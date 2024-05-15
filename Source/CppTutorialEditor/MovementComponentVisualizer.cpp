// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementComponentVisualizer.h"

void FMovementComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	const UMoveComponent* MoveComponent = Cast<UMoveComponent>(Component);

	if (MoveComponent)
	{
		PDI->DrawLine(
			MoveComponent->GetComponentLocation(),
			MoveComponent->GetComponentLocation() + MoveComponent->MoveOffset,
			FLinearColor::Red,
			SDPG_Foreground
		);
	}

}
