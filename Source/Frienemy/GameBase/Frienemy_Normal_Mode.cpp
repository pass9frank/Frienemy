// Fill out your copyright notice in the Description page of Project Settings.

#include "Frienemy_Normal_Mode.h"
#include "Pawn/Guardian.h"



AFrienemy_Normal_Mode::AFrienemy_Normal_Mode()
{
	DefaultPawnClass = AGuardian::StaticClass();
}
