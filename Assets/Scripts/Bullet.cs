using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviourPun
{
    public float Speed;
    public Transform ExplosionFX;
    // Start is called before the first frame update
    void Start()
    {
        
        GetComponent<Rigidbody>().velocity = transform.forward * Speed;
        if(photonView.IsMine) Invoke("DestroySelf", 10f);
    }
    void DestroySelf()
    {
        PhotonNetwork.Destroy(gameObject);
    }
    private void OnTriggerEnter(Collider other)
    {
        if (photonView.IsMine)
        {
            if (other.tag == "Player")
            {
                var target = other.GetComponent<PlayerMovement>();
                if (target.Player != photonView.Owner)
                {
                    Debug.Log($"{photonView.Owner.NickName}'s bullet hit {target.Player}.");
                    target.photonView.RPC("RPC_Damage", RpcTarget.All, 10);
                    DestroySelf();
                }
            } else
            {
                DestroySelf();
            }
        }
    }
    private void OnDestroy()
    {
        Instantiate(ExplosionFX,transform.position + (transform.forward * (-Speed * Time.deltaTime)), transform.rotation);
    }
}
