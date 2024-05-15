// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveComponent.h"

// Sets default values for this component's properties
UMoveComponent::UMoveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UMoveComponent::EnableMovement(bool shouldMove)
{
	MoveEnable = shouldMove;
	SetComponentTickEnabled(MoveEnable);
}

void UMoveComponent::ResetMovement()
{
	CurrentDistance = 0.0f;
	SetRelativeLocation(StartRelativeLocation);
}

void UMoveComponent::SetMoveDirection(int direction)
{
	MoveDirection = direction >= 1 ? 1 : -1;
}


// Called when the game starts
void UMoveComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	StartRelativeLocation = GetRelativeLocation();
	MoveOffsetNorm = MoveOffset;
	MoveOffsetNorm.Normalize();
	MaxDistance = MoveOffset.Length();

}


// Called every frame
void UMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (MoveEnable)
	{
		CurrentDistance += DeltaTime * Speed * MoveDirection;

		if (CurrentDistance >= MaxDistance || CurrentDistance <= 0)
		{
			MoveDirection = -1 * MoveDirection;
			OnEndPointReached.Broadcast(CurrentDistance >= MaxDistance);
			CurrentDistance = FMath::Clamp(CurrentDistance, 0.0f, MaxDistance);
		}
			
	}

	SetRelativeLocation(StartRelativeLocation + CurrentDistance * MoveOffsetNorm);
}

