/*
OnPlayerTurnUpsideDown.
*/

#if ! defined PAWNRAKNET_INC_
	#error You must have Pawn.Raknet include in order to use this one.
#endif

forward OnPlayerTurnUpsideDown(playerid, &Float:quat);

/*OnIncomingPacket*/
public OnIncomingPacket(playerid, packetid, BitStream:bs)
{
	if(packetid == 0xCF)
	{
		new ARQ_onFootSync[PR_OnFootSync];

		BS_IgnoreBits(bs, 0x8);
		BS_ReadOnFootSync(bs, ARQ_onFootSync);
		
		if(floatabs(ARQ_onFootSync[PR_quaternion][1]) >= 0.85)
		{
			OnPlayerTurnUpsideDown(playerid, ARQ_onFootSync[PR_quaternion][1]);
		}
		
		BS_SetWriteOffset(bs, 0x8);
		BS_WriteOnFootSync(bs, ARQ_onFootSync); 
	}
	#if defined ARQ_OnIncomingPacket
		return ARQ_OnIncomingPacket(playerid, packetid, bs);
	#else
		return 1;
	#endif
}

/*Hooks*/
#if defined _ALS_OnIncomingPacket
#undef OnIncomingPacket
#else
#define _ALS_OnIncomingPacket
#endif
#define OnIncomingPacket ARQ_OnIncomingPacket

#if defined ARQ_OnIncomingPacket
forward ARQ_OnIncomingPacket(playerid, packetid, BitStream:bs);
#endif
/*
OnPlayerTurnUpsideDown.
*//*
OnPlayerTurnUpsideDown.
*/

#if ! defined PAWNRAKNET_INC_
	#error You must have Pawn.Raknet include in order to use this one.
#endif

forward OnPlayerTurnUpsideDown(playerid, &Float:quat1, &Float:quat2);

/*OnIncomingPacket*/
public OnIncomingPacket(playerid, packetid, BitStream:bs)
{
	if(packetid == 0xCF)
	{
		new ARQ_onFootSync[PR_OnFootSync];

		BS_IgnoreBits(bs, 0x8);
		BS_ReadOnFootSync(bs, ARQ_onFootSync);
		
		if(floatabs(ARQ_onFootSync[PR_quaternion][1]) >= 0.85 || floatabs(ARQ_onFootSync[PR_quaternion][2]) >= 0.85)
		{
			OnPlayerTurnUpsideDown(playerid, ARQ_onFootSync[PR_quaternion][1], ARQ_onFootSync[PR_quaternion][1]);
		}
		
		BS_SetWriteOffset(bs, 0x8);
		BS_WriteOnFootSync(bs, ARQ_onFootSync); 
	}
	#if defined ARQ_OnIncomingPacket
		return ARQ_OnIncomingPacket(playerid, packetid, bs);
	#else
		return 1;
	#endif
}

/*Hooks*/
#if defined _ALS_OnIncomingPacket
#undef OnIncomingPacket
#else
#define _ALS_OnIncomingPacket
#endif
#define OnIncomingPacket ARQ_OnIncomingPacket

#if defined ARQ_OnIncomingPacket
forward ARQ_OnIncomingPacket(playerid, packetid, BitStream:bs);
#endif

#if ! defined PAWNRAKNET_INC_
	#error You must have Pawn.Raknet include in order to use this one.
#endif

forward OnPlayerTurnUpsideDown(playerid, &Float:quat1, &Float:quat2);

/*OnIncomingPacket*/
public OnIncomingPacket(playerid, packetid, BitStream:bs)
{
	if(packetid == 0xCF)
	{
		new ARQ_onFootSync[PR_OnFootSync];

		BS_IgnoreBits(bs, 0x8);
		BS_ReadOnFootSync(bs, ARQ_onFootSync);
		
		if(floatabs(ARQ_onFootSync[PR_quaternion][1]) >= 0.85 || floatabs(ARQ_onFootSync[PR_quaternion][2]) >= 0.85)
		{
			OnPlayerTurnUpsideDown(playerid, ARQ_onFootSync[PR_quaternion][1], ARQ_onFootSync[PR_quaternion][1]);
		}
		
		BS_SetWriteOffset(bs, 0x8);
		BS_WriteOnFootSync(bs, ARQ_onFootSync); 
	}
	#if defined ARQ_OnIncomingPacket
		return ARQ_OnIncomingPacket(playerid, packetid, bs);
	#else
		return 1;
	#endif
}

/*Hooks*/
#if defined _ALS_OnIncomingPacket
#undef OnIncomingPacket
#else
#define _ALS_OnIncomingPacket
#endif
#define OnIncomingPacket ARQ_OnIncomingPacket

#if defined ARQ_OnIncomingPacket
forward ARQ_OnIncomingPacket(playerid, packetid, BitStream:bs);
#endif
