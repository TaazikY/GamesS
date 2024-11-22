// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GamePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GamePlayerController_generated_h
#error "GamePlayerController.generated.h already included, missing '#pragma once' in GamePlayerController.h"
#endif
#define GAME_GamePlayerController_generated_h

#define FID_Game_Source_Game_GamePlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGamePlayerController(); \
	friend struct Z_Construct_UClass_AGamePlayerController_Statics; \
public: \
	DECLARE_CLASS(AGamePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(AGamePlayerController)


#define FID_Game_Source_Game_GamePlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGamePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGamePlayerController(AGamePlayerController&&); \
	AGamePlayerController(const AGamePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGamePlayerController) \
	NO_API virtual ~AGamePlayerController();


#define FID_Game_Source_Game_GamePlayerController_h_17_PROLOG
#define FID_Game_Source_Game_GamePlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Source_Game_GamePlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Game_Source_Game_GamePlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class AGamePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Source_Game_GamePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
