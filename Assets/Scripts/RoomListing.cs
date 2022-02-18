using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class RoomListing : MonoBehaviourPunCallbacks

{
    RoomInfo _roomInfo;
    public RoomInfo RoomInfo
    {
        get => _roomInfo;
        set 
        {
            _roomInfo = value;
            _text.text = string.Format("{0} {1} {2} / {3}", _roomInfo.Name, new string('-', 30 - _roomInfo.Name.Length), _roomInfo.PlayerCount, _roomInfo.MaxPlayers);
        }
    }
    [SerializeField]
    TextMeshProUGUI _text;
    public void Click()
    {
        PhotonNetwork.JoinRoom(RoomInfo.Name);
    }
}
