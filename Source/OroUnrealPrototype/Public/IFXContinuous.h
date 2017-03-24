// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IFXContinuous.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIFXContinuous : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class OROUNREALPROTOTYPE_API IIFXContinuous
{
	GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onCreate();
	
};
