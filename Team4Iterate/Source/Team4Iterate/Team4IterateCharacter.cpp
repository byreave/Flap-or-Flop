// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Team4IterateCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"


ATeam4IterateCharacter::ATeam4IterateCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true; // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->RelativeRotation = FRotator(0.f,180.f,0.f);

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ATeam4IterateCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATeam4IterateCharacter::MoveRight);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &ATeam4IterateCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ATeam4IterateCharacter::TouchStopped);

	PlayerInputComponent->BindAction("SpawnShape", IE_Pressed, this, &ATeam4IterateCharacter::SpawnShape);
	PlayerInputComponent->BindAction("SpawnHelpingShape", IE_Pressed, this, &ATeam4IterateCharacter::SpawnHelpingShape);
	APlayerController* MyController = GetWorld()->GetFirstPlayerController();

	MyController->bShowMouseCursor = true;
	MyController->bEnableClickEvents = true;
	MyController->bEnableMouseOverEvents = true;
}

void ATeam4IterateCharacter::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(1.f,0.f,0.f), Value);
}

void ATeam4IterateCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void ATeam4IterateCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

void ATeam4IterateCharacter::SpawnShape()
{
	// Attempt to spawn shape.
	if (SpectatorShapeClass)
	{
		// Get the camera transform.
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		//ShapeSpawnOffset.X = FMath::RandRange(500, 1000);
		//SecondShapeSpawnOffset.X = FMath::RandRange(500, 1000);
		//SecondShapeSpawnOffset.Z = FMath::RandRange(-400, 200);
		//ShapeSpawnOffset.Z = FMath::RandRange(-600, 0);


		// Transform ShapeSpawnOffset from camera space to world space
		FVector ShapeSpawnLocation = CameraLocation + FTransform(CameraRotation).TransformVector(ShapeSpawnOffset);
		FVector SecondShapeSpawnLocation = CameraLocation + FTransform(CameraRotation).TransformVector(SecondShapeSpawnOffset);
		FRotator ShapeSpawnRotation = CameraRotation;
		// Skew the aim to be slightly upwards.
		//ShapeSpawnRotation.Pitch += 10.0f;
		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;
			// Spawn the shape at the location
			ASpectatorShape* SpectatorShape = World->SpawnActor<ASpectatorShape>(SpectatorShapeClass, ShapeSpawnLocation, ShapeSpawnRotation, SpawnParams);
			ASpectatorShape* SecondSpectatorShape = World->SpawnActor<ASpectatorShape>(SpectatorShapeClass, SecondShapeSpawnLocation, ShapeSpawnRotation, SpawnParams);
		}
	}
}


void ATeam4IterateCharacter::SpawnHelpingShape()
{
	// Attempt to spawn shape.
	if (HelpingShapeClass)
	{
		// Get the camera transform.
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		// Transform ShapeSpawnOffset from camera space to world space
		FVector ShapeSpawnLocation = CameraLocation + FTransform(CameraRotation).TransformVector(HelpingShapeSpawnOffset);
		FRotator ShapeSpawnRotation = CameraRotation;
		// Skew the aim to be slightly upwards.
		//ShapeSpawnRotation.Pitch += 10.0f;
		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;
			// Spawn the shape at the location
			AHelpingShape* HelpingShape = World->SpawnActor<AHelpingShape>(HelpingShapeClass, ShapeSpawnLocation, ShapeSpawnRotation, SpawnParams);
		}
	}
}