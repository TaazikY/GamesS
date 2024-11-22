// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/GameWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameWheelRear() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
GAME_API UClass* Z_Construct_UClass_UGameWheelRear();
GAME_API UClass* Z_Construct_UClass_UGameWheelRear_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class UGameWheelRear
void UGameWheelRear::StaticRegisterNativesUGameWheelRear()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameWheelRear);
UClass* Z_Construct_UClass_UGameWheelRear_NoRegister()
{
	return UGameWheelRear::StaticClass();
}
struct Z_Construct_UClass_UGameWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base rear wheel definition.\n */" },
#endif
		{ "IncludePath", "GameWheelRear.h" },
		{ "ModuleRelativePath", "GameWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base rear wheel definition." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameWheelRear_Statics::ClassParams = {
	&UGameWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameWheelRear()
{
	if (!Z_Registration_Info_UClass_UGameWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameWheelRear.OuterSingleton, Z_Construct_UClass_UGameWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameWheelRear.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UGameWheelRear>()
{
	return UGameWheelRear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameWheelRear);
UGameWheelRear::~UGameWheelRear() {}
// End Class UGameWheelRear

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Source_Game_GameWheelRear_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameWheelRear, UGameWheelRear::StaticClass, TEXT("UGameWheelRear"), &Z_Registration_Info_UClass_UGameWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameWheelRear), 4099008066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Source_Game_GameWheelRear_h_4031105680(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_Game_Source_Game_GameWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Source_Game_GameWheelRear_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
