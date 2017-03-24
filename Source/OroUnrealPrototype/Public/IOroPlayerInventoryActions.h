// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IOroPlayerInventoryActions.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIOroPlayerInventoryActions : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class OROUNREALPROTOTYPE_API IIOroPlayerInventoryActions
{
	GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onInventoryOpenToggleEvent(bool bInventoryOpened);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onInGameMenuOpenEvent(bool bInGameMenuOpened);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onOpenQuickKeyAssignmentMenuEvent(bool bQuickKeyAssignmentOpened);
	
};
