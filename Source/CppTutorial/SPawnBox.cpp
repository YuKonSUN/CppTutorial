// Fill out your copyright notice in the Description page of Project Settings.


#include "SPawnBox.h"

// Sets default values
ASPawnBox::ASPawnBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnBox"));
	RootComponent = SpawnBox;
}

// Called when the game starts or when spawned
void ASPawnBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASPawnBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASPawnBox::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
}

void ASPawnBox::EnableActorSpawning(bool Enable)
{
	ShouldSpawn = Enable;

	if (Enable)
	{
		SheduleActorSpawn();
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(SpawnTimerHandle);
	}
}

bool ASPawnBox::SpawnActorRandom()
{
	bool canSpawn = false;

	if (ActorClassToBeSpawned)
	{
		FBoxSphereBounds boxBounds = SpawnBox->CalcBounds(GetActorTransform());

		FVector SpawnLocation = boxBounds.Origin;
		SpawnLocation.X += (-boxBounds.BoxExtent.X + 2 * boxBounds.BoxExtent.X * FMath::FRand());
		SpawnLocation.Y += (-boxBounds.BoxExtent.Y + 2 * boxBounds.BoxExtent.Y * FMath::FRand());
		SpawnLocation.Z += (-boxBounds.BoxExtent.Z + 2 * boxBounds.BoxExtent.Z * FMath::FRand());
		
		canSpawn = GetWorld()->SpawnActor(ActorClassToBeSpawned, &SpawnLocation) != nullptr;
	}

	return canSpawn;
}

void ASPawnBox::SheduleActorSpawn()
{
	float DeltaToNextTime = SpawnAvgTime + (-SpawnTimeOffset + 2 * SpawnTimeOffset * FMath::FRand());

	GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &ASPawnBox::ActorSpawnSheduled, DeltaToNextTime, false);
}

void ASPawnBox::ActorSpawnSheduled()
{
	if (SpawnActorRandom())
	{
		if (ShouldSpawn)
		{
			SheduleActorSpawn();
		}
		else
		{

		}
	}
}

