// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/GameSportsCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSportsCar() {}

// Begin Cross Module References
GAME_API UClass* Z_Construct_UClass_AGamePawn();
GAME_API UClass* Z_Construct_UClass_AGameSportsCar();
GAME_API UClass* Z_Construct_UClass_AGameSportsCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class AGameSportsCar
void AGameSportsCar::StaticRegisterNativesAGameSportsCar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameSportsCar);
UClass* Z_Construct_UClass_AGameSportsCar_NoRegister()
{
	return AGameSportsCar::StaticClass();
}
struct Z_Construct_UClass_AGameSportsCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameSportsCar.h" },
		{ "ModuleRelativePath", "GameSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameSportsCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameSportsCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGamePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameSportsCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameSportsCar_Statics::ClassParams = {
	&AGameSportsCar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameSportsCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameSportsCar()
{
	if (!Z_Registration_Info_UClass_AGameSportsCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameSportsCar.OuterSingleton, Z_Construct_UClass_AGameSportsCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameSportsCar.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<AGameSportsCar>()
{
	return AGameSportsCar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameSportsCar);
AGameSportsCar::~AGameSportsCar() {}
// End Class AGameSportsCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameSportsCar, AGameSportsCar::StaticClass, TEXT("AGameSportsCar"), &Z_Registration_Info_UClass_AGameSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameSportsCar), 2947637337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsCar_h_1374266285(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
