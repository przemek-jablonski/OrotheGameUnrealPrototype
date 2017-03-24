// Fill out your copyright notice in the Description page of Project Settings.

#include "OroUnrealPrototype.h"
#include "FXBaseBurstActor.h"


// Sets default values
AFXBaseBurstActor::AFXBaseBurstActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FxsGroup = CreateDefaultSubobject<UChildActorComponent>(TEXT("FXBaseBurstActor"));
	RootComponent = FxsGroup;

}

// Called when the game starts or when spawned
void AFXBaseBurstActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFXBaseBurstActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFXBaseBurstActor::onCreate_Implementation()
{
}

void AFXBaseBurstActor::onFxElapsed_Implementation()
{
}

void AFXBaseBurstActor::onDestroy_Implementation()
{
}

