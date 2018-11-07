// Fill out your copyright notice in the Description page of Project Settings.

#include "Guardian.h"


// Sets default values
AGuardian::AGuardian()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGuardian::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGuardian::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGuardian::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AGuardian::OnTouchBegin);
	//PlayerInputComponent->BindTouch(EInputEvent::IE_Released,this,&AGuardian::OnTouchEnd);
	//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AGuardian::OnFingerMove);
	//PlayerInputComponent->BindKey(EKeys::LeftMouseButton,IE_Pressed,this,
}
//
//void AGuardian::OnTouchBegin(ETouchIndex::Type FingerIndex, FVector Location)
//{
//	if (FingerIndex == ETouchIndex::Touch1)
//	{
//		FHitResult hitResultOut;
//		if (GetWorld()->GetFirstPlayerController()->GetHitResultAtScreenPosition(FVector2D(Location.X,Location.Y), ECollisionChannel::ECC_GameTraceChannel1,false, hitResultOut))
//		{
//			ReceiveBeginTouchEmissionArea(hitResultOut.ImpactPoint, hitResultOut.ImpactNormal);
//		}
//
//	}
//}
//
//void AGuardian::OnTouchEnd(ETouchIndex::Type FingerIndex, FVector Location)
//{
//	if (FingerIndex == ETouchIndex::Touch1)
//	{
//		FHitResult hitResultOut;
//		if (GetWorld()->GetFirstPlayerController()->GetHitResultAtScreenPosition(FVector2D(Location.X, Location.Y), ECollisionChannel::ECC_GameTraceChannel2, false, hitResultOut))
//		{
//			ReceiveEndTouchAimArea(hitResultOut.ImpactPoint, hitResultOut.ImpactNormal);
//		}
//
//	}
//}
//
//void AGuardian::OnFingerMove(ETouchIndex::Type FingerIndex, FVector Location)
//{
//
//	if (FingerIndex == ETouchIndex::Touch1)
//	{
//		FHitResult hitResultOut;
//		if (GetWorld()->GetFirstPlayerController()->GetHitResultAtScreenPosition(FVector2D(Location.X, Location.Y), ECollisionChannel::ECC_GameTraceChannel2, false, hitResultOut))
//		{
//			ReceiveFingerMoveOnAimArea(hitResultOut.ImpactPoint, hitResultOut.ImpactNormal);
//		}
//
//	}
//}

