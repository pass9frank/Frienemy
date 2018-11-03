// Fill out your copyright notice in the Description page of Project Settings.

#include "Guy.h"


// Sets default values
AGuy::AGuy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGuy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGuy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGuy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxisKey(EKeys::Gamepad_LeftX, this, &AGuy::Move_XAxis);
	PlayerInputComponent->BindAxisKey(EKeys::Gamepad_LeftY, this, &AGuy::Move_YAxis);
}

void AGuy::Move_XAxis(const float AxisValue)
{
	AddMovementInput(GetActorRightVector(), AxisValue);
	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("X:%f"),AxisValue));
}

void AGuy::Move_YAxis(const float AxisValue)
{
	AddMovementInput(GetActorForwardVector(), AxisValue);
	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Y:%f"), AxisValue));
}

