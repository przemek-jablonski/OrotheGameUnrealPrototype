// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "IFXBurst.h"

#include "FXBaseBurstActor.generated.h"

UCLASS()
class OROUNREALPROTOTYPE_API AFXBaseBurstActor : public AActor, public IIFXBurst
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFXBaseBurstActor();

public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//IFXBurst
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onCreate();
		virtual void onCreate_Implementation() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onFxElapsed();
		virtual void onFxElapsed_Implementation() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void onDestroy();
		virtual void onDestroy_Implementation() override;


protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	class UChildActorComponent *FxsGroup;

public:
	UChildActorComponent* fxs_group() const
	{
		return FxsGroup;
	}
};
