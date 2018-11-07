// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Guardian.generated.h"

UCLASS()
class FRIENEMY_API AGuardian : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGuardian();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//void OnTouchBegin(ETouchIndex::Type FingerIndex, FVector Location);
	//void OnTouchEnd(ETouchIndex::Type FingerIndex, FVector Location);
	//void OnFingerMove(ETouchIndex::Type FingerIndex, FVector Location);
	//void OnMousePressed();
	//void OnMouseReleased();
	//void OnMouseMove();
	
	//UFUNCTION(BlueprintImplementableEvent,meta = (DisplayName = "BeginTouchEmissionArea"))
	//void ReceiveBeginTouchEmissionArea(FVector Location,FVector ImpactNormal);

	//UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "EndTouchAimArea"))
	//void ReceiveEndTouchAimArea(FVector Location, FVector ImpactNormal);
	//
	//UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "FingerMoveOnAimArea"))
	//void ReceiveFingerMoveOnAimArea(FVector Location, FVector ImpactNormal);

	//UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "MousePressedOnEmissionArea"))
	//void ReceiveMousePressedOnEmissionArea(FVector Location, FVector ImpactNormal);

	//UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "MouseReleasedOnAimArea"));
	//void ReceiveMouseReleasedOnAimArea(FVector Location, FVector ImpactNormal);

	//UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "MouseMoveOnAimArea"))
	//void ReceiveMouseMoveOnAimArea(FVector Location, FVector ImpactNormal);

};
