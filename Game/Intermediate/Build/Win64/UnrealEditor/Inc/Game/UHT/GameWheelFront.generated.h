// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameWheelFront.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GameWheelFront_generated_h
#error "GameWheelFront.generated.h already included, missing '#pragma once' in GameWheelFront.h"
#endif
#define GAME_GameWheelFront_generated_h

#define FID_Game_Source_Game_GameWheelFront_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameWheelFront(); \
	friend struct Z_Construct_UClass_UGameWheelFront_Statics; \
public: \
	DECLARE_CLASS(UGameWheelFront, UChaosVehicleWheel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UGameWheelFront)


#define FID_Game_Source_Game_GameWheelFront_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameWheelFront(UGameWheelFront&&); \
	UGameWheelFront(const UGameWheelFront&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameWheelFront); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameWheelFront); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameWheelFront) \
	NO_API virtual ~UGameWheelFront();


#define FID_Game_Source_Game_GameWheelFront_h_12_PROLOG
#define FID_Game_Source_Game_GameWheelFront_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Source_Game_GameWheelFront_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Source_Game_GameWheelFront_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class UGameWheelFront>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Source_Game_GameWheelFront_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
