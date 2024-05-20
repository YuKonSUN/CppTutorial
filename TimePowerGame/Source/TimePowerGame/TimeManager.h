// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeManager.generated.h"

UCLASS()
class TIMEPOWERGAME_API ATimeManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimeManager();

	void Tick(float DeltaSeconds) override;

public:

	UFUNCTION(BlueprintCallable)
	bool GetAbilityAvailible();

	UFUNCTION(BlueprintCallable)
	float GetCurrentReversableTime();

	UFUNCTION(BlueprintCallable)
	float GetTimeFactor();

	UFUNCTION(BlueprintCallable)
	void BeginTimeReverse();

	UFUNCTION(BlueprintCallable)
	void EndTimeReverse();

public:
	// Enable control
	UFUNCTION(BlueprintCallable)
	void EnableTimeReverseAbility();
	UFUNCTION(BlueprintCallable)
	void DisableTimeReverseAbility();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UPROPERTY(BlueprintReadOnly)
	float CurrentTimeFactor = 1.f;

	UPROPERTY(BlueprintReadOnly)
	float CurrentRecordedTime = 0.0f;

	UPROPERTY(BlueprintReadOnly)
	bool TimeReversalAbilityEnabled = false;

protected:

	UPROPERTY(BlueprintReadWrite)
	float CurrentRecordTime = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NormalTimeFactor = 1.0f;

	UPROPERTY(BlueprintReadWrite, BlueprintReadWrite)
	float ReverseTimeFactor = -3.0f;

	UPROPERTY(BlueprintReadWrite, BlueprintReadWrite)
	float ReverseTimeThreshold = 3.0f;

	UPROPERTY(BlueprintReadWrite, BlueprintReadWrite)
	float ReverseTimeMaximum = 15.0f;

	

};
