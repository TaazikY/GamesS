// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/GameWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameWheelFront() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
GAME_API UClass* Z_Construct_UClass_UGameWheelFront();
GAME_API UClass* Z_Construct_UClass_UGameWheelFront_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class UGameWheelFront
void UGameWheelFront::StaticRegisterNativesUGameWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameWheelFront);
UClass* Z_Construct_UClass_UGameWheelFront_NoRegister()
{
	return UGameWheelFront::StaticClass();
}
struct Z_Construct_UClass_UGameWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base front wheel definition.\n */" },
#endif
		{ "IncludePath", "GameWheelFront.h" },
		{ "ModuleRelativePath", "GameWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base front wheel definition." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameWheelFront_Statics::ClassParams = {
	&UGameWheelFront::StaticClass,
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
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameWheelFront()
{
	if (!Z_Registration_Info_UClass_UGameWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameWheelFront.OuterSingleton, Z_Construct_UClass_UGameWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameWheelFront.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UGameWheelFront>()
{
	return UGameWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameWheelFront);
UGameWheelFront::~UGameWheelFront() {}
// End Class UGameWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Source_Game_GameWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameWheelFront, UGameWheelFront::StaticClass, TEXT("UGameWheelFront"), &Z_Registration_Info_UClass_UGameWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameWheelFront), 1281464510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Source_Game_GameWheelFront_h_3883201550(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_Game_Source_Game_GameWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Source_Game_GameWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
