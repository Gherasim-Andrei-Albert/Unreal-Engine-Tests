// Fill out your copyright notice in the Description page of Project Settings.


#include "NewActorComponent2.h"
#include "Engine.h"

// Sets default values for this component's properties
UNewActorComponent2::UNewActorComponent2()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNewActorComponent2::BeginPlay()
{
	Super::BeginPlay();
	Super::BeginPlay();
	FVector Position;
	Position.X = 0.0f;
	Position.Y = 0.0f;
	Position.Z = 0.0f;

	FRotator Rotation;
	Rotation.Yaw = -180.0f;
	Rotation.Pitch = 0.0f;
	Rotation.Roll = 0.0f;

	AActor* parentActor =
		this->GetOwner();

	parentActor->GetRootComponent()->SetWorldLocation(Position);
	// ...
	
}


// Called every frame
void UNewActorComponent2::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

