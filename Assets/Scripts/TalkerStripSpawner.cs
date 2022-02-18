using UnityEngine;

public class TalkerStripSpawner : Spawner<TalkerStrip>
{
    public TalkerStrip Spawn(string name, Sprite avator, bool isOwner, string firstMessage)
    {
        var rt = Spawn();
        rt.isOwner = isOwner;
        rt.nameUI.text = name;
        rt.avatarUI.sprite = avator;
        rt.Refresh();
        return rt;
    }
}
