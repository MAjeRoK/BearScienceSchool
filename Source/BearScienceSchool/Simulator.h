// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Simulator.generated.h"

UCLASS()
class BEARSCIENCESCHOOL_API ASimulator : public AActor
{
	GENERATED_BODY()
	FVector flying_impulse;
	
public:	
	// Sets default values for this actor's properties
	ASimulator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
