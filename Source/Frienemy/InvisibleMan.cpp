// Fill out your copyright notice in the Description page of Project Settings.

#include "InvisibleMan.h"


// Sets default values
AInvisibleMan::AInvisibleMan()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TopViewCamera = NewObject<UCameraComponent>(this,TEXT("TopViewCamera"));
}

// Called when the game starts or when spawned
void AInvisibleMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInvisibleMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AInvisibleMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

