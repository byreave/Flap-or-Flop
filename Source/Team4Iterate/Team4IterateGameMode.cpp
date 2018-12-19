// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Team4IterateGameMode.h"
#include "Team4IterateCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeam4IterateGameMode::ATeam4IterateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
