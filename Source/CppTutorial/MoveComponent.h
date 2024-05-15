// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MoveComponent.generated.h"

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveComponentReachEndPointSignature, bool, IsTopEndpoint);

UCLASS( ClassGroup=(Cpptutorial), meta=(BlueprintSpawnableComponent) )
class CPPTUTORIAL_API UMoveComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMoveComponent();

	UFUNCTION(BlueprintCallable)
	void EnableMovement(bool shouldMove);
	UFUNCTION(BlueprintCallable)
	void ResetMovement();
	UFUNCTION(BlueprintCallable)
	void SetMoveDirection(int direction);

	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	friend class FMovementComponentVisualizer;

	UPROPERTY(EditAnywhere)
	FVector MoveOffset;

	UPROPERTY(EditAnywhere)
	float Speed;

	UPROPERTY(EditAnywhere)
	bool MoveEnable = true;

	UPROPERTY(BlueprintAssignable)
	FOnMoveComponentReachEndPointSignature OnEndPointReached;

	FVector MoveOffsetNorm;
	FVector StartRelativeLocation;
	float MaxDistance = 0.f;
	float CurrentDistance = 0.f;	
	int MoveDirection = 1;
};
