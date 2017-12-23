# OnPlayerTurnUpsideDown
This include will call OnPlayerTurnUpsideDown callback in case the player turns upside down through a modification.

## Callback:
```pawn
public OnPlayerTurnUpsideDown(playerid, &Float:quat1, &Float:quat2)
```

*You can change the player quaternion's passed components by reference (quat1 is the 2nd component and quat2 the 3rd).<br>

*Upside Down and Random Quats from sandbox will call this callback.

## Dependencies:
[Pawn.RakNet](http://forum.sa-mp.com/showthread.php?t=640306)
