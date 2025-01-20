// Copyright Epic Games, Inc. All Rights Reserved.

#include "GP3_ThirdPerson_RGameMode.h"
#include "GP3_ThirdPerson_RCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGP3_ThirdPerson_RGameMode::AGP3_ThirdPerson_RGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
