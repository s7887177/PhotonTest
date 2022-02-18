public class MessageStripSpawner : Spawner<MessageStrip>
{
    public MessageStrip Spawn(string message, bool isOwner)
    {
        var rt = Spawn();
        rt.message = message;
        rt.isOwner = isOwner;
        return rt;
    }
}
