// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UAC_TeleportActor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FISHTANK_API UUAC_TeleportActor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUAC_TeleportActor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Actor in scene, transform used to determine bounds of level
	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Actor)
	class Actor* NWCorner;*/

	// X and Y bounds of level
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float maxX = 1000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float maxY = 1800;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colliders", meta=(UseComponentPicker))
	class USphereComponent* col;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	class USceneComponent* parent;
};
