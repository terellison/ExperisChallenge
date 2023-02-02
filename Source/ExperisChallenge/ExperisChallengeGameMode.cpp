// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExperisChallengeGameMode.h"
#include "ExperisChallengeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExperisChallengeGameMode::AExperisChallengeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
