// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "XPCharacter.h"
#include "GameFramework/DefaultPawn.h"
#include "CppTutorialGameModeBase.generated.h"



/**
 * 
 */
UCLASS()
class CPPTUTORIAL_API ACppTutorialGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	void InitGameState() override;
	
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<AXPCharacter> CustomXPPawnClass = AXPCharacter::StaticClass();
	
};
