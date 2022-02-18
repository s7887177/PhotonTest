using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class MasterController : MonoBehaviourPunCallbacks
{
    public static MasterController Instance;
    [SerializeField]
    GameObject _playerPrefab;
    [SerializeField]
    Transform _spawnPointSet;
    Vector3 RandomSpawnPoint
    {
        get
        {

            var points = new List<Vector3>();
            foreach (Transform t in _spawnPointSet)
            {
                points.Add(t.position);
            }
            return points[Random.Range(0, points.Count)];
        }
    }
    private void Awake()
    {
        if (Instance == null) Instance = this;
    }
    public void Start()
    {
        InstantiateNewPlayer();
    }
    public void InstantiateNewPlayer()
    {
        PhotonNetwork.Instantiate(Path.Combine("Prefabs", _playerPrefab.name), RandomSpawnPoint, Quaternion.identity);
    }
}
