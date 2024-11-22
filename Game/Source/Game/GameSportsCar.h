// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GamePawn.h"
#include "GameSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class GAME_API AGameSportsCar : public AGamePawn
{
	GENERATED_BODY()
	
public:

	AGameSportsCar();
};
