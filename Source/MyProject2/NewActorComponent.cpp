// Fill out your copyright notice in the Description page of Project Settings.


#include "NewActorComponent.h"

#include "Engine.h" // <- This

// Sets default values for this component's properties
UNewActorComponent::UNewActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNewActorComponent::BeginPlay()
{
	/*FVector Position;
	Position.X = 0.0f;
	Position.Y = 0.0f;
	Position.Z = 0.0f;

	FRotator Rotation;
	Rotation.Yaw = -180.0f;
	Rotation.Pitch = 0.0f;
	Rotation.Roll = 0.0f;

	AActor* parentActor =
		this->GetOwner();

	parentActor->GetRootComponent()->SetWorldLocation(Position);*/

	Super::BeginPlay();
	

	/*FVector Position;
	Position.X = 0.0f;
	Position.Y = 0.0f;
	Position.Z = 0.0f;

	FRotator Rotation;
	Rotation.Yaw = -180.0f;
	Rotation.Pitch = 0.0f;
	Rotation.Roll = 0.0f;

	AActor* parentActor =
		this->GetOwner();

	parentActor->GetRootComponent()->SetWorldLocation(Position);*/
	// ...
	
}


// Called every frame
void UNewActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	/*FVector Position;
	Position.X = 0.0f;
	Position.Y = 0.0f;
	Position.Z = 0.0f;

	FRotator Rotation;
	Rotation.Yaw = -180.0f;
	Rotation.Pitch = 0.0f;
	Rotation.Roll = 0.0f;

	AActor* parentActor =
		this->GetOwner();

	parentActor->GetRootComponent()->SetWorldLocation(Position);*/
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction); 

	/*FVector Position;
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
	

	//StaticMeshComponent->SetRelativeLocationAndRotation(Position, Rotation); // doesn't work

	

	//RootComponent->SetWorldRotation(Rotation);
	//RootComponent->SetWorldLocation(Position); // Both don't work

	/*FTransform Transform;
	Transform.SetLocation(Position);

	FQuat GRRRRR;
	GRRRRR.X = -180.0f;
	Transform.SetRotation(GRRRRR);

	StaticMeshComponent->SetWorldTransform(Transform); // Also doesn't work*/


	//SetActorRotation(Rotation); // This doesn't either
	//SetActorLocation(Position); // This doesn't either

	// ...
}

