// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "SPawnBox.generated.h"

UCLASS()
class CPPTUTORIAL_API ASPawnBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPawnBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnAvgTime = 5;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnTimeOffset = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ActorClassToBeSpawned;

protected:
	UFUNCTION(BlueprintCallable)
	void EnableActorSpawning(bool Enable);

public:
	UFUNCTION()
	void ActorSpawnSheduled();

private:
	void SheduleActorSpawn();
	bool SpawnActorRandom();

	

private:
	
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* SpawnBox;

	UPROPERTY(EditAnywhere)
	bool ShouldSpawn = true;

	FTimerHandle SpawnTimerHandle;
};
