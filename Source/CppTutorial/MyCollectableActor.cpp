// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCollectableActor.h"

// Sets default values
AMyCollectableActor::AMyCollectableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(StaticMesh);
	
}

// Called when the game starts or when spawned
void AMyCollectableActor::BeginPlay()
{
	Super::BeginPlay();
	
	FScriptDelegate DelegateSubscriber;
	DelegateSubscriber.BindUFunction(this, "OnComponentBeginOverlap");

	BoxCollision->OnComponentBeginOverlap.Add(DelegateSubscriber);
	SetActorTickEnabled(false);
}

void AMyCollectableActor::OnComponentBeginOverlap(UBoxComponent* Component, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (!IsLaunched && OtherActor->IsA(TriggerClass))
	{
		//Jump(Velocity);
		OnJumpTrigger.Broadcast(OtherActor, OtherComp);
	}
}

// Called every frame
void AMyCollectableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsLaunched)
	{
		LiveTime -= DeltaTime;

		if (LiveTime <= 0.f)
		{
			Destroy();
		}
	}

}

void AMyCollectableActor::Jump(float veloctity)
{
	if (!IsLaunched)
	{
		StaticMesh->AddImpulse({ .0f, .0f, veloctity * 500.f });
		IsLaunched = true;
		SetActorTickEnabled(true);
	}
	
}

