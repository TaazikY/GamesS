// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameGameMode.h"
#include "GamePlayerController.h"

AGameGameMode::AGameGameMode()
{
	PlayerControllerClass = AGamePlayerController::StaticClass();
}
