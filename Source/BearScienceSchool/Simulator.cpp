// Fill out your copyright notice in the Description page of Project Settings.


#include "Simulator.h"

// Sets default values
ASimulator::ASimulator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASimulator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASimulator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

