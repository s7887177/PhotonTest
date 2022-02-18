using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
public class PlayerMovement : MonoBehaviourPunCallbacks
{
    TextMeshProUGUI _hpText => GameObject.Find("HpText").GetComponent<TextMeshProUGUI>();
    [SerializeField]
    int _hp;
    public int HP
    {
        get => _hp;
        set
        {
            _hp = value <= 0 ? 0: value;
            if (isOwner)
            {
                _hpText.text = _hp.ToString();
                if (_hp <= 0)
                {
                    _camera.transform.parent = null;
                    PhotonNetwork.Destroy(gameObject);
                }
            }
        }
    }
    public float Speed;
    public float MouseSens => playerSettings.mouseSensitivity;
    [SerializeField]
    float _jumpSpeed;
    [SerializeField]
    Bullet Bullet;

    Vector3 _speedBuffer;
    bool _isGrounded
    {
        get
        {
            _controller.Move(_speedBuffer * Time.deltaTime);
            var rt = _controller.isGrounded;
            _controller.Move(-_speedBuffer * Time.deltaTime);
            return rt;
            //return Physics.CapsuleCast(transform.position - _controller.height / 2 * transform.up, transform.position  + _controller.height / 2 * transform.up, _controller.radius, Vector3.down, _controller.skinWidth + .01f);

        }
    }

    public Player Player => photonView.Owner;
    CharacterController _controller => GetComponent<CharacterController>();
    Camera _camera => GetComponentInChildren<Camera>();
    public bool hasCam => _camera != null;
    public bool isOwner => photonView.Owner == PhotonNetwork.LocalPlayer;
    [HideInInspector]
    public bool OwnerLock;
    [SerializeField]
    PlayerSettings playerSettings;
    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        HP = HP;
    }

    // Update is called once per frame
    void Update()
    {
        if (isOwner)
        {
            //Set Camera Into Player
            if(!hasCam)
            {
                Debug.Log($"Set main camera to {name}.");
                Camera.main.transform.parent = transform;
                Camera.main.transform.position = transform.position;
                Camera.main.transform.rotation = transform.rotation;
            }
            //Vertical View Movement
            var camAngle = _camera.transform.eulerAngles- Input.GetAxisRaw("Mouse Y") * Vector3.right * MouseSens * Time.deltaTime;
            camAngle.x = camAngle.x > 180f ? camAngle.x - 360f : camAngle.x;
            camAngle.x = Mathf.Clamp(camAngle.x, -90f, 90f);
            _camera.transform.eulerAngles = camAngle;
            //Horizontal View Movement
            transform.eulerAngles += Input.GetAxisRaw("Mouse X") * Vector3.up * MouseSens * Time.deltaTime;
            //Player Movement
            var MoveDir = (Input.GetAxisRaw("Horizontal") * transform.right + Input.GetAxisRaw("Vertical")* transform.forward).normalized;
            _controller.stepOffset = 0;
            _controller.Move(MoveDir * Speed * Time.deltaTime);
            //jump
            if (_isGrounded && Input.GetKey(KeyCode.Space))
            {
                _speedBuffer += Vector3.up * _jumpSpeed;
            }
            UpdateSpeedBuffer();
            //Apply Gravity
            _controller.Move(_speedBuffer * Time.deltaTime);

            //Shot
            if (Input.GetMouseButtonDown(0))
            {
                PhotonNetwork.Instantiate(Path.Combine("Prefabs", Bullet.name), _camera.transform.position, _camera.transform.rotation);
            }
            //Free CursorLock
            if (Input.GetKeyDown(KeyCode.Escape))
                Cursor.lockState = Cursor.lockState == CursorLockMode.Locked ? CursorLockMode.None : CursorLockMode.Locked;
        }
    }

    void UpdateSpeedBuffer()
    {
        if (_isGrounded)
        {
            _speedBuffer = Vector3.zero;
        }
        _speedBuffer += Physics.gravity * Time.deltaTime;
    }
    [PunRPC]
    public void RPC_Damage(int damage)
    {
        HP -= damage;
    }
    private void OnDestroy()
    {
        if (isOwner)
        {
            Debug.Log("You Died.");
            MasterController.Instance.InstantiateNewPlayer();
        }
        else
        {
            Debug.Log(Player.NickName + " is dead.");
        }
    }
}