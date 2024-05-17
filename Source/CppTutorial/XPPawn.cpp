// Fill out your copyright notice in the Description page of Project Settings.


#include "XPPawn.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

// Sets default values
AXPPawn::AXPPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	RootComponent = PlayerMesh;
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	PlayerCamera->SetupAttachment(PlayerMesh);

	// 创建一个简单的移动组件
	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
	if (MovementComponent)
	{
		MovementComponent->UpdatedComponent = RootComponent;
	}
	

}

// Called when the game starts or when spawned
void AXPPawn::BeginPlay()
{
	Super::BeginPlay();
	if (!MovementComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("MovementComponent is not initialized!"));
	}
}

// Called every frame
void AXPPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AXPPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
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
		Input->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AXPPawn::Movement);
		Input->BindAction(LookAction, ETriggerEvent::Triggered, this, &AXPPawn::Look);
	}
}

void AXPPawn::Movement(const FInputActionValue& ActionValue)
{
	FVector2D InputVector = ActionValue.Get<FVector2D>();

	//InputVector *= MoveSpeed * GetWorld()->GetDeltaSeconds();

	

	const FVector ForwardVector = GetActorForwardVector();
	const FVector RightVector = GetActorRightVector();

	FVector MoveVector = ForwardVector * InputVector.Y + RightVector * InputVector.X;
	//MoveVector.Z = 0.0f;
	//Camera looks at Axis X, W and S control direction of forward and back

	AddMovementInput(MoveVector, MoveSpeed * GetWorld()->GetDeltaSeconds());

	/*auto location = GetActorLocation();
	location.X += InputVector.X * MoveSpeed; 
	location.Y += InputVector.Y * MoveSpeed;
	SetActorLocation(location);*/
}

void AXPPawn::Look(const FInputActionValue& ActionValue)
{
	FVector2D LookInput = ActionValue.Get<FVector2D>();
	AddControllerYawInput(LookInput.X * TurnSpeed* GetWorld()->GetDeltaSeconds());
	//AddControllerPitchInput(LookInput.Y * TurnSpeed);

}

