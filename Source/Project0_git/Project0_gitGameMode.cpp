// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project0_gitGameMode.h"
#include "Project0_gitHUD.h"
#include "Project0_gitCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject0_gitGameMode::AProject0_gitGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProject0_gitHUD::StaticClass();
}
