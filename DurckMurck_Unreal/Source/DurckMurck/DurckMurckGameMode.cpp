// Copyright Epic Games, Inc. All Rights Reserved.

#include "DurckMurckGameMode.h"
#include "DurckMurckCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADurckMurckGameMode::ADurckMurckGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
