// Fill out your copyright notice in the Description page of Project Settings.


#include "XPCharacter.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"


// Sets default values
AXPCharacter::AXPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	PlayerMesh->SetupAttachment(GetCapsuleComponent());
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	PlayerCamera->SetupAttachment(GetCapsuleComponent());
}

// Called when the game starts or when spawned
void AXPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AXPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* playerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InputMapping, 0);
		}
	}

	if (UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AXPCharacter::Movement);
		Input->BindAction(LookAction, ETriggerEvent::Triggered, this, &AXPCharacter::Look);
	}
}

void AXPCharacter::Movement(const FInputActionValue& ActionValue)
{
	FVector2D InputVector = ActionValue.Get<FVector2D>();

	const FVector ForwardVector = GetActorForwardVector();
	const FVector RightVector = GetActorRightVector();

	FVector MoveVector = ForwardVector * InputVector.Y + RightVector * InputVector.X;

	AddMovementInput(MoveVector, MoveSpeed * GetWorld()->GetDeltaSeconds());
}

void AXPCharacter::Look(const FInputActionValue& ActionValue)
{
	FVector2D LookInput = ActionValue.Get<FVector2D>();
	AddControllerYawInput(LookInput.X * TurnSpeed * GetWorld()->GetDeltaSeconds());
}

