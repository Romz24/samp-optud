# OnPlayerTurnUpsideDown
This include will call OnPlayerTurnUpsideDown callback in case the player turns upside down through a modification.

## Callback:
```pawn
public OnPlayerTurnUpsideDown(playerid, &Float:quat)
```

*Returning 0 won't let the update reach other clients.
*You can change the quaternion value passed by reference.

## Dependencies:
[Pawn.RakNet](http://forum.sa-mp.com/showthread.php?t=640306)
