// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AStarProjectGameMode.h"
#include "AStarProjectPlayerController.h"
#include "AStarProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAStarProjectGameMode::AAStarProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAStarProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}