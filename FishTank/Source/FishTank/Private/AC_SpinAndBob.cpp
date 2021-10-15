// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_SpinAndBob.h"
#include "Actor.h"

// Sets default values for this component's properties
UAC_SpinAndBob::UAC_SpinAndBob()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAC_SpinAndBob::BeginPlay()
{
	Super::BeginPlay();

	// ...

	startLocation = GetOwner()->GetActorLocation();
	
}


// Called every frame
void UAC_SpinAndBob::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	GetOwner()->AddActorWorldRotation(Spin * DeltaTime);

	float time = GetOwner()->GetWorld()->GetRealTimeSeconds();
	float sine = FMath::Sin(time * BobSpeedMultiplier);
	GetOwner()->SetActorLocation(startLocation + (Bob * sine));
}

