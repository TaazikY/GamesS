// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/GameSportsWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSportsWheelFront() {}

// Begin Cross Module References
GAME_API UClass* Z_Construct_UClass_UGameSportsWheelFront();
GAME_API UClass* Z_Construct_UClass_UGameSportsWheelFront_NoRegister();
GAME_API UClass* Z_Construct_UClass_UGameWheelFront();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class UGameSportsWheelFront
void UGameSportsWheelFront::StaticRegisterNativesUGameSportsWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSportsWheelFront);
UClass* Z_Construct_UClass_UGameSportsWheelFront_NoRegister()
{
	return UGameSportsWheelFront::StaticClass();
}
struct Z_Construct_UClass_UGameSportsWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "GameSportsWheelFront.h" },
		{ "ModuleRelativePath", "GameSportsWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSportsWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameSportsWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSportsWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSportsWheelFront_Statics::ClassParams = {
	&UGameSportsWheelFront::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSportsWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSportsWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameSportsWheelFront()
{
	if (!Z_Registration_Info_UClass_UGameSportsWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSportsWheelFront.OuterSingleton, Z_Construct_UClass_UGameSportsWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSportsWheelFront.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UGameSportsWheelFront>()
{
	return UGameSportsWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSportsWheelFront);
UGameSportsWheelFront::~UGameSportsWheelFront() {}
// End Class UGameSportsWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSportsWheelFront, UGameSportsWheelFront::StaticClass, TEXT("UGameSportsWheelFront"), &Z_Registration_Info_UClass_UGameSportsWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSportsWheelFront), 1943517964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsWheelFront_h_2832632157(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
