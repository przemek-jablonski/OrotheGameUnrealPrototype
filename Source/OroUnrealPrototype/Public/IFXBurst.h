// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IFXBurst.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIFXBurst : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class OROUNREALPROTOTYPE_API IIFXBurst
{
	GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void onCreate();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void onFxElapsed();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void onDestroy();
	
};
