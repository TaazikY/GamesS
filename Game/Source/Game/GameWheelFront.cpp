// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UGameWheelFront::UGameWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}