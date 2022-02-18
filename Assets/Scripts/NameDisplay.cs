using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using System.Linq;

public class NameDisplay : MonoBehaviourPun
{
    [SerializeField]
    private float _displaySize = 1f;
    [SerializeField]
    private float _MaxDisplayDistance = 10f;
    [SerializeField]
    private TextMeshPro _nameText => transform.Find("NameText").GetComponent<TextMeshPro>();

    private void Update()
    {
        transform.rotation = Camera.main.transform.rotation;
        var distance = Vector3.Distance(transform.position, Camera.main.transform.position);
        transform.localScale = Vector3.one * distance * _displaySize;
        _nameText.gameObject.SetActive(distance < _MaxDisplayDistance);
        _nameText.text = transform.parent.GetComponent<PlayerMovement>().photonView.Owner?.NickName;
    }
}
