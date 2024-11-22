// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/GameSportsWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSportsWheelRear() {}

// Begin Cross Module References
GAME_API UClass* Z_Construct_UClass_UGameSportsWheelRear();
GAME_API UClass* Z_Construct_UClass_UGameSportsWheelRear_NoRegister();
GAME_API UClass* Z_Construct_UClass_UGameWheelRear();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class UGameSportsWheelRear
void UGameSportsWheelRear::StaticRegisterNativesUGameSportsWheelRear()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSportsWheelRear);
UClass* Z_Construct_UClass_UGameSportsWheelRear_NoRegister()
{
	return UGameSportsWheelRear::StaticClass();
}
struct Z_Construct_UClass_UGameSportsWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "GameSportsWheelRear.h" },
		{ "ModuleRelativePath", "GameSportsWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSportsWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameSportsWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSportsWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSportsWheelRear_Statics::ClassParams = {
	&UGameSportsWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSportsWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSportsWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameSportsWheelRear()
{
	if (!Z_Registration_Info_UClass_UGameSportsWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSportsWheelRear.OuterSingleton, Z_Construct_UClass_UGameSportsWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSportsWheelRear.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UGameSportsWheelRear>()
{
	return UGameSportsWheelRear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSportsWheelRear);
UGameSportsWheelRear::~UGameSportsWheelRear() {}
// End Class UGameSportsWheelRear

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsWheelRear_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSportsWheelRear, UGameSportsWheelRear::StaticClass, TEXT("UGameSportsWheelRear"), &Z_Registration_Info_UClass_UGameSportsWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSportsWheelRear), 506803870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsWheelRear_h_1210885429(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Source_Game_GameSportsWheelRear_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
