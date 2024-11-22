// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameOffroadCar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GameOffroadCar_generated_h
#error "GameOffroadCar.generated.h already included, missing '#pragma once' in GameOffroadCar.h"
#endif
#define GAME_GameOffroadCar_generated_h

#define FID_Game_Source_Game_GameOffroadCar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameOffroadCar(); \
	friend struct Z_Construct_UClass_AGameOffroadCar_Statics; \
public: \
	DECLARE_CLASS(AGameOffroadCar, AGamePawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AGameOffroadCar)


#define FID_Game_Source_Game_GameOffroadCar_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameOffroadCar(AGameOffroadCar&&); \
	AGameOffroadCar(const AGameOffroadCar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameOffroadCar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameOffroadCar); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGameOffroadCar) \
	NO_API virtual ~AGameOffroadCar();


#define FID_Game_Source_Game_GameOffroadCar_h_12_PROLOG
#define FID_Game_Source_Game_GameOffroadCar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Source_Game_GameOffroadCar_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Source_Game_GameOffroadCar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AGameOffroadCar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Source_Game_GameOffroadCar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
