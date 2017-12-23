# OnPlayerTurnUpsideDown
This include will call OnPlayerTurnUpsideDown callback in case the player turns upside down through a modification.

## Callback:
```pawn
public OnPlayerTurnUpsideDown(playerid, &Float:quat1, &Float:quat2)
```

*You can change the player quaternion's passed components by reference.<br>

*Upside Down and Random Quats from sandbox will call this callback.<br>
*Parkour mods will call this callback as well as any other mod that turns players upside down.

## Dependencies:
[Pawn.RakNet](http://forum.sa-mp.com/showthread.php?t=640306)
