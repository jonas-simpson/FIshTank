// Fill out your copyright notice in the Description page of Project Settings.


#include "UAC_TeleportActor.h"
#include "Scene.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"

// Sets default values for this component's properties
UUAC_TeleportActor::UUAC_TeleportActor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUAC_TeleportActor::BeginPlay()
{
	Super::BeginPlay();

	// Find & assign NWCorner
	/*for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr) {
		if (ActorItr->GetName() == "Corner_NW") {
			NWCorner = *ActorItr;
		}
	}*/

	// Make sure component is attached & working
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("TeleportActorComponent::BeginPlay"));

	// Get USphereComponent collider
	col = GetOwner()->FindComponentByClass<USphereComponent>();
}


// Called every frame
void UUAC_TeleportActor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//FVector currentLoc = col->GetWorldLocation();
	FVector currentLoc = parent->GetComponentLocation();

	//col->teleport
	


	//Determine if actor is outside of bounds
	if (currentLoc.X > maxX || currentLoc.X < -maxX) {
		// If outside of X bounds, teleport to opposite x side of world
		/*col->TeleportTo(FVector(-currentLoc.X, currentLoc.Y, currentLoc.Z),
						   parent->GetActorRotation());*/
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("TeleportActorComponent::TickComponent\nOut of Bounds X!"));
	}
	if (currentLoc.Y > maxY || currentLoc.Y < -maxY) {
		// If outside of Y bounds, teleport to opposite y side of world
		/*col->TeleportTo(FVector(currentLoc.X, -currentLoc.Y, currentLoc.Z),
			parent->GetActorRotation());*/
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("TeleportActorComponent::TickComponent\nOut of Bounds Y!"));
	}
}

