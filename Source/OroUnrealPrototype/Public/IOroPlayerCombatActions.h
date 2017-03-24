// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IOroPlayerCombatActions.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIOroPlayerCombatActions : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class OROUNREALPROTOTYPE_API IIOroPlayerCombatActions
{
	GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onPrimaryFireEvent(bool bContinuousFire);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onSecondaryFireEvent(bool bContinuousFire);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onPrimaryPotionEvent();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onSecondaryPotionEvent();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onQuickSwapWeaponEvent();

};
