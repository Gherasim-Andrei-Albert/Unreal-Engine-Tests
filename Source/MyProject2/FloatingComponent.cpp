// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingComponent.h"
#include "Engine.h"

// Sets default values for this component's properties
UFloatingComponent::UFloatingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFloatingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UFloatingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* popandau = GetOwner();
	FVector currentLocation = popandau->GetActorLocation();

	if (up == true) {
		if (currentLocation.Z < 0) {
			FVector nextLocation = currentLocation;
			nextLocation.Z += 5;
			popandau->GetRootComponent()->SetWorldLocation(nextLocation);
		}
		else {
			up = false;
		}
	}
	else {
		if (currentLocation.Z > -100) {
			FVector nextLocation = currentLocation;
			nextLocation.Z -= 5;
			popandau->GetRootComponent()->SetWorldLocation(nextLocation);
		}
		else {
			up = true;
		}
	}
}

