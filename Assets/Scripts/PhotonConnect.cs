using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using System.Linq;
using System.IO;

public class PhotonConnect : MonoBehaviourPunCallbacks
{

    public PlayerMovement[] Players;
    // Start is called before the first frame update
    void Start()
    {
        Time.fixedDeltaTime = .005f;
        if (!PhotonNetwork.IsConnected)
        {
            PhotonNetwork.NickName = "Egg";
            PhotonNetwork.GameVersion = "1";
            PhotonNetwork.ConnectUsingSettings();
        }
        else
        {
            ExitGames.Client.Photon.Hashtable hashTable = PhotonNetwork.LocalPlayer.CustomProperties;
            if (!hashTable.ContainsKey("changes")) hashTable.Add("changes", "isStarted");
            hashTable["changes"] = "isStarted";
            if (!hashTable.ContainsKey("isStarted")) hashTable.Add("isStarted", false);
            hashTable["isStarted"] = true;
            PhotonNetwork.LocalPlayer.SetCustomProperties(hashTable);
        }


    }
    public   override void OnConnectedToMaster()
    {
        Debug.Log(PhotonNetwork.NickName + " is connected to master.");
        PhotonNetwork.JoinLobby();
    }
    public override void OnConnected()
    {
        Debug.Log(PhotonNetwork.NickName + " is connected.");
    }
    public override void OnJoinedLobby()
    {
        Debug.Log(PhotonNetwork.NickName + " is joined lobby.");
        var options = new RoomOptions();
        options.MaxPlayers = 4;
        PhotonNetwork.JoinOrCreateRoom("testRoom",options,TypedLobby.Default);
    }
    public override void OnJoinedRoom()
    {
        OnStartGame();
        Debug.Log(PhotonNetwork.NickName + " is joined " + PhotonNetwork.CurrentRoom.Name + ".");
    }
    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        Debug.Log("Roomlist is updated.");
    }
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        Debug.Log($"Player {newPlayer} has entered room.");
    }

    public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    {
        Debug.Log($"Player {targetPlayer} has changed Properties:");
        var changes = changedProps["changes"].ToString().Split(',');
        var realChangedProps = new ExitGames.Client.Photon.Hashtable();
        foreach (var change in changes)
        {
            if(change == "isStarted")
            {
                if ((bool)changedProps["isStarted"])
                {
                    OnPlayerStartGame(targetPlayer);
                }
            }
        }
    }
    public void OnStartGame()
    {
        MasterController.Instance.InstantiateNewPlayer();
    }
    public void OnPlayerStartGame(Player player)
    {
        Debug.Log($"Player {player} start game");
        //DistributeNullMovementToPlayer(player);
    }
    void DistributeNullMovementToPlayer(Player Player)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            foreach (var playerMovement in Players)
            {
                Debug.Log(playerMovement.OwnerLock);
                if (playerMovement.photonView.Owner == null && !playerMovement.OwnerLock)
                {
                    playerMovement.photonView.TransferOwnership(Player);
                    playerMovement.OwnerLock = true;
                    break;
                }
            }
        }
    }
    public override void OnDisconnected(DisconnectCause cause)
    {
        print("Disconneted from server for reason" + cause.ToString());
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
