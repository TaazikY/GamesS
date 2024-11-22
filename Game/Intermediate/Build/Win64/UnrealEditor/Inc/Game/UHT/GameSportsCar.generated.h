// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSportsCar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GameSportsCar_generated_h
#error "GameSportsCar.generated.h already included, missing '#pragma once' in GameSportsCar.h"
#endif
#define GAME_GameSportsCar_generated_h

#define FID_Game_Source_Game_GameSportsCar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameSportsCar(); \
	friend struct Z_Construct_UClass_AGameSportsCar_Statics; \
public: \
	DECLARE_CLASS(AGameSportsCar, AGamePawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AGameSportsCar)


#define FID_Game_Source_Game_GameSportsCar_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameSportsCar(AGameSportsCar&&); \
	AGameSportsCar(const AGameSportsCar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameSportsCar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameSportsCar); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGameSportsCar) \
	NO_API virtual ~AGameSportsCar();


#define FID_Game_Source_Game_GameSportsCar_h_12_PROLOG
#define FID_Game_Source_Game_GameSportsCar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Source_Game_GameSportsCar_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Source_Game_GameSportsCar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AGameSportsCar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Source_Game_GameSportsCar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
