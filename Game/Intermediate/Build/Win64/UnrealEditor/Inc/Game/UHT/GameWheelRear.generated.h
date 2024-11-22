// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameWheelRear.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GameWheelRear_generated_h
#error "GameWheelRear.generated.h already included, missing '#pragma once' in GameWheelRear.h"
#endif
#define GAME_GameWheelRear_generated_h

#define FID_Game_Source_Game_GameWheelRear_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameWheelRear(); \
	friend struct Z_Construct_UClass_UGameWheelRear_Statics; \
public: \
	DECLARE_CLASS(UGameWheelRear, UChaosVehicleWheel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UGameWheelRear)


#define FID_Game_Source_Game_GameWheelRear_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameWheelRear(UGameWheelRear&&); \
	UGameWheelRear(const UGameWheelRear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameWheelRear); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameWheelRear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameWheelRear) \
	NO_API virtual ~UGameWheelRear();


#define FID_Game_Source_Game_GameWheelRear_h_12_PROLOG
#define FID_Game_Source_Game_GameWheelRear_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Source_Game_GameWheelRear_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Source_Game_GameWheelRear_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class UGameWheelRear>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Source_Game_GameWheelRear_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
