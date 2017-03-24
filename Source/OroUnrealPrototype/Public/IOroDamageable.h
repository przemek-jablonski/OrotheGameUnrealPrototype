// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "SProjectileBehaviour.h"
#include "SProjectileDamage.h"
#include "IOroDamageable.generated.h"

class DSProjectileDamage;
class DSProjectileBehaviour;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIOroDamageable : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class OROUNREALPROTOTYPE_API IIOroDamageable
{
	GENERATED_IINTERFACE_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onDamageEvent(USProjectileBehaviour *ProjectileBehaviour, int ProjectileBehaviourSize, USProjectileDamage *ProjectileDamage, int ProjectileDamageSize);
	
	UFUNCTION(BlueprintNativeEvent)
	void onDeathEvent(USProjectileBehaviour *ProjectileBehaviour, int ProjectileBehaviourSize, USProjectileDamage *ProjectileDamage, int ProjectileDamageSize);


};
