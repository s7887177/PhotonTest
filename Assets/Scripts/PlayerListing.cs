using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PlayerListing : MonoBehaviour
{
    [SerializeField]
    TextMeshProUGUI _text;
    Player _player;
    public Player Player
    {
        get => _player;
        set
        {
            _player = value;
            UpdateText();
        }
    }
    public void UpdateText()
    {
        var state =
            _player.IsMasterClient ? "Master" :
            (bool)_player.CustomProperties["Ready"] ? "Ready" :
            "Preparing";
        _text.text = string.Format(" {0,11}, {1}", state, _player.NickName); 
    }

}
