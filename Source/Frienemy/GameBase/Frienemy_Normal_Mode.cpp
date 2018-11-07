// Fill out your copyright notice in the Description page of Project Settings.

#include "Frienemy_Normal_Mode.h"
#include "Pawn/Guardian.h"



AFrienemy_Normal_Mode::AFrienemy_Normal_Mode()
{
	DefaultPawnClass = AGuardian::StaticClass();
}

//void AFrienemy_Normal_Mode::GameStart()
//{
//
//}
//
//void AFrienemy_Normal_Mode::GetCurrentPlayerNum(int32& PlayerNum)
//{
//	PlayerNum = PlayerList.Num();
//}
//
//void AFrienemy_Normal_Mode::GetPlayer(int32 PlayerIndex, APlayerController *& PlayerNum)
//{
//	PlayerNum = PlayerList[PlayerIndex];
//}

//void AFrienemy_Normal_Mode::PreLogin(const FString & Options, const FString & Address, const FUniqueNetIdRepl & UniqueId, FString & ErrorMessage)
//{
//	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
//	if (PlayerList.Num() == MaxPlayerNum)
//	{
//		ErrorMessage = "Too many players";
//	}
//}
//
//void AFrienemy_Normal_Mode::PostLogin(APlayerController * NewPlayer)
//{
//	Super::PostLogin(NewPlayer);
//	if (PlayerList.Num() < MaxPlayerNum)
//	{
//		PlayerList.Add(NewPlayer);
//		if (PlayerList.Num() == MaxPlayerNum)
//		{
//			GameStart();
//		}
//	}
//}
