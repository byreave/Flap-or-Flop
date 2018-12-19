// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CheatManager.h"
#include "SpectatorShape.h"
#include "HelpingShape.h"
#include "Team4IterateCharacter.generated.h"

UCLASS(config=Game)
class ATeam4IterateCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(EditDefaultsOnly, Category = Cheats)
	class UCheatManager* CheatManager;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface


public:
	ATeam4IterateCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	FORCEINLINE class UCheatManager* GetCheatManager() const { return CheatManager; }

	// Function that handles spawning shapes.
	UFUNCTION()
	void SpawnShape();

	UFUNCTION()
	void SpawnHelpingShape();

	// Shape spawn offset based on camera location.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Gameplay)
	FVector ShapeSpawnOffset = FVector(100, 0, -162.149994);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Gameplay)
	FVector SecondShapeSpawnOffset = FVector(100, 0, 100);
	// Spectator shape class to spawn
	UPROPERTY(EditDefaultsOnly, Category = "Spectator Shapes")
	TSubclassOf<class ASpectatorShape> SpectatorShapeClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Gameplay)
	FVector HelpingShapeSpawnOffset = FVector(100, 0, -162.149994);
	// Helping shape class to spawn
	UPROPERTY(EditDefaultsOnly, Category = "Helping Shapes")
	TSubclassOf<class AHelpingShape> HelpingShapeClass;
};
