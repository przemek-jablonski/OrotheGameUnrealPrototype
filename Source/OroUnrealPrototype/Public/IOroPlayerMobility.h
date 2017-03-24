// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IOroPlayerMobility.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIOroPlayerMobility : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class OROUNREALPROTOTYPE_API IIOroPlayerMobility
{
	GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onRotationEvent(float RotationVerticalAxisValue, float RotationHorizontalAxisValue);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onMovementEvent(float MovementVerticalAxisValue, float MovementHorizontalAxisValue, float ControllerRotationYawValue);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onAimEvent();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onSprintEvent();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onJumpEvent();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onActorInteractionEvent();


	
};
