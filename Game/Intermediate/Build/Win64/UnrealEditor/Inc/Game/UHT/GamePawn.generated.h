// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GamePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GamePawn_generated_h
#error "GamePawn.generated.h already included, missing '#pragma once' in GamePawn.h"
#endif
#define GAME_GamePawn_generated_h

#define FID_Game_Source_Game_GamePawn_h_27_CALLBACK_WRAPPERS
#define FID_Game_Source_Game_GamePawn_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGamePawn(); \
	friend struct Z_Construct_UClass_AGamePawn_Statics; \
public: \
	DECLARE_CLASS(AGamePawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AGamePawn)


#define FID_Game_Source_Game_GamePawn_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGamePawn(AGamePawn&&); \
	AGamePawn(const AGamePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamePawn); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGamePawn) \
	NO_API virtual ~AGamePawn();


#define FID_Game_Source_Game_GamePawn_h_24_PROLOG
#define FID_Game_Source_Game_GamePawn_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Source_Game_GamePawn_h_27_CALLBACK_WRAPPERS \
	FID_Game_Source_Game_GamePawn_h_27_INCLASS_NO_PURE_DECLS \
	FID_Game_Source_Game_GamePawn_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AGamePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Source_Game_GamePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
