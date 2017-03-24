// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IOroBaseObject.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIOroBaseObject : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class OROUNREALPROTOTYPE_API IIOroBaseObject
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void onCreate();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void onDestroy();

};
