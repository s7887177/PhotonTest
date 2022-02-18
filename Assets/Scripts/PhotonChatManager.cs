using ExitGames.Client.Photon;
using Photon.Chat;
using Photon.Pun;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

public class PhotonChatManager : MonoBehaviour, IChatClientListener
{
    ChatClient chatClient;
    [SerializeField] string userId;
    [SerializeField] Text messageInputGui;
    [SerializeField] string currentChannel;
    [SerializeField] GameObject joinChatWindow;
    [SerializeField] GameObject chatRoomWindow;
    [SerializeField] Text messageDisplayGui;
    void Awake()
    {
        chatClient = new ChatClient(this);
    }

    void Update()
    {
        chatClient.Service();
    }
    public void Connect()
    {
        if (string.IsNullOrEmpty(userId))
        {
            throw new System.ArgumentNullException("userId");
        }
        var appId = PhotonNetwork.PhotonServerSettings.AppSettings.AppIdChat;
        var appVersion = PhotonNetwork.AppVersion;
        var authValues = new AuthenticationValues(userId);
        chatClient.Connect(appId, appVersion, authValues);
    }
    public void Send()
    {
        var message = messageInputGui.text;
        messageInputGui.text = "";
        Debug.Log($"About to send message: {message}");
        chatClient.PublishMessage(currentChannel, message);
    }

    public void SetUserId(string userId)
    {
        this.userId = userId;
    }
    void IChatClientListener.DebugReturn(DebugLevel level, string message)
    {
        switch (level)
        {
            case DebugLevel.OFF:
                break;
            case DebugLevel.ERROR:
                Debug.LogError(message);
                break;
            case DebugLevel.WARNING:
                Debug.LogWarning(message);
                break;
            case DebugLevel.INFO:
                Debug.Log(message);
                break;
            case DebugLevel.ALL:
                Debug.Log(message);
                break;
            default:
                break;
        }
    }

    void IChatClientListener.OnChatStateChange(ChatState state)
    {
        Debug.Log($"{nameof(IChatClientListener.OnChatStateChange)}({state})");
    }

    void IChatClientListener.OnConnected()
    {
        Debug.Log(nameof(IChatClientListener.OnConnected));
        chatClient.Subscribe(new[] { "Default Channel" });
    }

    void IChatClientListener.OnDisconnected()
    {
        Debug.Log(nameof(IChatClientListener.OnDisconnected));

    }

    void IChatClientListener.OnGetMessages(string channelName, string[] senders, object[] messages)
    {
        Debug.Log(nameof(IChatClientListener.OnGetMessages));
        if (channelName != currentChannel) return;
        var sb = new StringBuilder();
        sb.AppendLine(messageDisplayGui.text);
        for (int i = 0; i < senders.Length; i++)
        {
            var sender = senders[i];
            var message = messages[i];
            sb.Append($"{sender}: {message}");
        }
        messageDisplayGui.text = sb.ToString();
    }

    void IChatClientListener.OnPrivateMessage(string sender, object message, string channelName)
    {
        throw new System.NotImplementedException();
    }

    void IChatClientListener.OnStatusUpdate(string user, int status, bool gotMessage, object message)
    {
        throw new System.NotImplementedException();
    }

    void IChatClientListener.OnSubscribed(string[] channels, bool[] results)
    {
        var sb = new StringBuilder();
        sb.AppendLine(nameof(IChatClientListener.OnSubscribed));
        sb.Append("channels: ");
        foreach (var channel in channels)
        {
            sb.Append(channel + ", ");
        }
        sb.AppendLine();
        sb.Append("results: ");
        foreach (var result in results)
        {
            sb.Append(result + ", ");
        }
        Debug.Log(sb);

        currentChannel = channels[0];
        joinChatWindow.SetActive(false);
        chatRoomWindow.SetActive(true);
    }

    void IChatClientListener.OnUnsubscribed(string[] channels)
    {
        throw new System.NotImplementedException();
    }

    void IChatClientListener.OnUserSubscribed(string channel, string user)
    {
        throw new System.NotImplementedException();
    }

    void IChatClientListener.OnUserUnsubscribed(string channel, string user)
    {
        throw new System.NotImplementedException();
    }

}
