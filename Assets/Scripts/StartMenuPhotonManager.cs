using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartMenuPhotonManager : MonoBehaviourPunCallbacks
{
    public TextMeshProUGUI ConnectingToServerText;
    public GameObject InputNameMenu;
    public TextMeshProUGUI InputNameText;
    public TextMeshProUGUI InputRoomNameText;
    public Button InputNameStartButton;
    public Animation InputNameFieldMoveUp;
    public GameObject SelectOrCreateRoomMenu;
    public Animation SelectOrCreateRoomMenuAppear;
    public RoomListing RoomListingPrefab;
    public Transform RoomListContent;
    public Animation JoinRoomAnimation;
    public PlayerListing PlayerListingPrefab;
    public Transform PlayerListContent;
    public GameObject RoomMenu;
    public Button StartGameButton;
    public Button PreparingOrReadyButton;
    public TextMeshProUGUI PreparingOrReadyText;

    Player _player => PhotonNetwork.LocalPlayer;
    // Start is called before the first frame update
    void Start()
    {
        PhotonNetwork.AutomaticallySyncScene = true;
        PhotonNetwork.GameVersion = "1";
        PhotonNetwork.ConnectUsingSettings();
    }
    public override void OnConnected()
    {
        Debug.Log("connected.");
    }
    public override void OnConnectedToMaster()
    {
        Debug.Log("connected to master.");
        ConnectingToServerText.gameObject.SetActive(false);
        InputNameMenu.SetActive(true);
    }
    public void Click_InputNameStart()
    {
        InputNameFieldMoveUp.Play();
        PhotonNetwork.NickName = InputNameText.text;
        ExitGames.Client.Photon.Hashtable properties = _player.CustomProperties;

        if(!properties.ContainsKey("Ready")) properties.Add("Ready", false);
        properties["Ready"] = false;

        PhotonNetwork.SetPlayerCustomProperties(properties);
        PhotonNetwork.JoinLobby();
    }
    public override void OnJoinedLobby()
    {
        Debug.Log("You joined lobby.");
        JoinLobbyOrLeftRoom();
    }
    void JoinLobbyOrLeftRoom()
    {
        InputNameStartButton.gameObject.SetActive(false);
        SelectOrCreateRoomMenu.SetActive(true);
        SelectOrCreateRoomMenuAppear.Play();
    }
    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        foreach (var roomInfo in roomList)
        {
            Instantiate(RoomListingPrefab, RoomListContent).GetComponent<RoomListing>().RoomInfo = roomInfo;
        }
    }
    public override void OnJoinedRoom()
    {
        SelectOrCreateRoomMenu.SetActive(false);
        InputNameMenu.SetActive(false);
        RoomMenu.SetActive(true);
        if (PhotonNetwork.IsMasterClient)
        {
            StartGameButton.gameObject.SetActive(true);
            
        }
        else
        {
            PreparingOrReadyButton.gameObject.SetActive(true);
        }
        if (JoinRoomAnimation != null) JoinRoomAnimation.Play();
        UpdatePlayerList();
    }
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        UpdatePlayerList();
    }
    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        UpdatePlayerList();
    }
    public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    {
        if (PhotonNetwork.InRoom)
        {
            UpdatePlayerList();
        }
    }
    // Update is called once per frame
    void UpdatePlayerList()
    {
        Debug.Log("Player List Updated.");
        foreach (Transform playerListing in PlayerListContent)
        {
            Destroy(playerListing.gameObject);
        }
        foreach (var Player in PhotonNetwork.PlayerList)
        {
            var listing = Instantiate(PlayerListingPrefab, PlayerListContent);
            listing.Player = Player;
        }
    }
    
    public void Click_CreateRoom()
    {

        RoomOptions options = new RoomOptions();
        options.MaxPlayers = 4;
        PhotonNetwork.JoinOrCreateRoom(InputRoomNameText.text,options,TypedLobby.Default);
    }
    public void Click_LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
    }
    public override void OnLeftRoom()
    {
        Debug.Log("You left room.");
        RoomMenu.SetActive(false);
        StartGameButton.gameObject.SetActive(false);
        PreparingOrReadyButton.gameObject.SetActive(false);
        JoinLobbyOrLeftRoom();
    }
    public void Click_PreparingOrReady()
    {
        _player.CustomProperties["Ready"] = !(bool)_player.CustomProperties["Ready"];
        _player.SetCustomProperties(_player.CustomProperties);
        PreparingOrReadyText.text = (bool)_player.CustomProperties["Ready"] ? "Ready" : "Preparing";
    }
    public void Click_StartGame()
    {
        if (!PhotonNetwork.IsMasterClient) return;
        var otherPlayerList = PhotonNetwork.PlayerList.ToList();
        otherPlayerList.Remove(_player);
        if (otherPlayerList.TrueForAll(o => (bool)o.CustomProperties["Ready"]))
        {
            PhotonNetwork.CurrentRoom.IsOpen = false;
            PhotonNetwork.CurrentRoom.IsVisible = false;
            PhotonNetwork.LoadLevel(1);
        }
    }
    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            StartGameButton.gameObject.SetActive(true);
            PreparingOrReadyButton.gameObject.SetActive(false);
            _player.CustomProperties["Ready"] = true;
            _player.SetCustomProperties(_player.CustomProperties);

        }
    }
}
