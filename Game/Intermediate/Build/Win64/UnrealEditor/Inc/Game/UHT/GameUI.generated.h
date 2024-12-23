// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GameUI_generated_h
#error "GameUI.generated.h already included, missing '#pragma once' in GameUI.h"
#endif
#define GAME_GameUI_generated_h

#define FID_Game_Source_Game_GameUI_h_17_CALLBACK_WRAPPERS
#define FID_Game_Source_Game_GameUI_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameUI(); \
	friend struct Z_Construct_UClass_UGameUI_Statics; \
public: \
	DECLARE_CLASS(UGameUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UGameUI)


#define FID_Game_Source_Game_GameUI_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameUI(UGameUI&&); \
	UGameUI(const UGameUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameUI) \
	NO_API virtual ~UGameUI();


#define FID_Game_Source_Game_GameUI_h_14_PROLOG
#define FID_Game_Source_Game_GameUI_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Source_Game_GameUI_h_17_CALLBACK_WRAPPERS \
	FID_Game_Source_Game_GameUI_h_17_INCLASS_NO_PURE_DECLS \
	FID_Game_Source_Game_GameUI_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class UGameUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Source_Game_GameUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
