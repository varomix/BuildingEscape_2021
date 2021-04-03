// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"

#include <string>

#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	// FString Log = TEXT("HELLo");
	// FString* PrtLog = &Log;
	// UE_LOG(LogTemp, Warning, TEXT("%s World"), **PrtLog);

	const FString ActorName = GetOwner()->GetName();

	UE_LOG(LogTemp, Warning, TEXT("Actor name is: %s"), *ActorName);

	const FVector ActorLocation = GetOwner()->GetActorLocation();
	UE_LOG(LogTemp, Warning, TEXT("Actor Locations is %s"), *ActorLocation.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Actor Position is  X: %f, Y: %f, Z: %f"), ActorLocation.X, ActorLocation.Y, ActorLocation.Z);
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

