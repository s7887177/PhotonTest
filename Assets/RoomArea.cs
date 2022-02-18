using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomArea : MonoBehaviour
{
    List<GCharacter> _members = new List<GCharacter>();
    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void OnTriggerEnter(Collider other)
    {
        var character = other.GetComponent<GCharacter>();
        if (character == null) return;
        _members.Add(character);
        character.Matches.ForEach(o => 
        { 
            if((o.FirstCharacter==character && _members.Contains(o.SecondCharacter)) || (o.SecondCharacter == character && _members.Contains(o.FirstCharacter)))
            {

                o.FirstCharacter.Dance();
                o.SecondCharacter.Dance();
                Debug.Log(o.DoSomething);
            }
        });
        Debug.Log("Something Enter.");
    }
    private void OnTriggerExit(Collider other)
    {

        var character = other.GetComponent<GCharacter>();
        if (character == null) return;
        _members.Remove(character);
        Debug.Log("Something Exit.");
    }
    // Update is called once per frame
    void Update()
    {
    }
}
