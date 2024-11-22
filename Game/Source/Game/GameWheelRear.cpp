// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UGameWheelRear::UGameWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}