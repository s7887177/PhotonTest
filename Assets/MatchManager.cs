using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MatchManager : MonoBehaviour
{
    public static MatchManager Instance;
    private void Awake()
    {
        if (Instance != null) Destroy(this);
        else Instance = this;
    }

    [SerializeField]
    public List<GMatch> Matches;
}
[System.Serializable]
public struct GMatch
{
    public GCharacter FirstCharacter;
    public GCharacter SecondCharacter;
    public string DoSomething;
}