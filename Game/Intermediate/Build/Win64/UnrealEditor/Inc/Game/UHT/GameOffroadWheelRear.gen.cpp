// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/GameOffroadWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOffroadWheelRear() {}

// Begin Cross Module References
GAME_API UClass* Z_Construct_UClass_UGameOffroadWheelRear();
GAME_API UClass* Z_Construct_UClass_UGameOffroadWheelRear_NoRegister();
GAME_API UClass* Z_Construct_UClass_UGameWheelRear();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class UGameOffroadWheelRear
void UGameOffroadWheelRear::StaticRegisterNativesUGameOffroadWheelRear()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameOffroadWheelRear);
UClass* Z_Construct_UClass_UGameOffroadWheelRear_NoRegister()
{
	return UGameOffroadWheelRear::StaticClass();
}
struct Z_Construct_UClass_UGameOffroadWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "GameOffroadWheelRear.h" },
		{ "ModuleRelativePath", "GameOffroadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOffroadWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameOffroadWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOffroadWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameOffroadWheelRear_Statics::ClassParams = {
	&UGameOffroadWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOffroadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameOffroadWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameOffroadWheelRear()
{
	if (!Z_Registration_Info_UClass_UGameOffroadWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameOffroadWheelRear.OuterSingleton, Z_Construct_UClass_UGameOffroadWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameOffroadWheelRear.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UGameOffroadWheelRear>()
{
	return UGameOffroadWheelRear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOffroadWheelRear);
UGameOffroadWheelRear::~UGameOffroadWheelRear() {}
// End Class UGameOffroadWheelRear

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Source_Game_GameOffroadWheelRear_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameOffroadWheelRear, UGameOffroadWheelRear::StaticClass, TEXT("UGameOffroadWheelRear"), &Z_Registration_Info_UClass_UGameOffroadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameOffroadWheelRear), 3066993283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Source_Game_GameOffroadWheelRear_h_541307663(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_Game_Source_Game_GameOffroadWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Source_Game_GameOffroadWheelRear_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
