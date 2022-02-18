using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
public class GCharacter : MonoBehaviour
{
    public string DanceText;
    public List<GMatch> Matches => MatchManager.Instance.Matches.FindAll(o => o.FirstCharacter == this).Concat(MatchManager.Instance.Matches.FindAll(o => o.SecondCharacter)).ToList();
       
    public void Dance()
    {
        Debug.Log(DanceText);
    }
}
