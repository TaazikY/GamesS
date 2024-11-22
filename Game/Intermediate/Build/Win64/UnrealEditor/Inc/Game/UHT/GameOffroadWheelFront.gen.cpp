// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/GameOffroadWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOffroadWheelFront() {}

// Begin Cross Module References
GAME_API UClass* Z_Construct_UClass_UGameOffroadWheelFront();
GAME_API UClass* Z_Construct_UClass_UGameOffroadWheelFront_NoRegister();
GAME_API UClass* Z_Construct_UClass_UGameWheelFront();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class UGameOffroadWheelFront
void UGameOffroadWheelFront::StaticRegisterNativesUGameOffroadWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameOffroadWheelFront);
UClass* Z_Construct_UClass_UGameOffroadWheelFront_NoRegister()
{
	return UGameOffroadWheelFront::StaticClass();
}
struct Z_Construct_UClass_UGameOffroadWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "GameOffroadWheelFront.h" },
		{ "ModuleRelativePath", "GameOffroadWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOffroadWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameOffroadWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOffroadWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameOffroadWheelFront_Statics::ClassParams = {
	&UGameOffroadWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOffroadWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameOffroadWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameOffroadWheelFront()
{
	if (!Z_Registration_Info_UClass_UGameOffroadWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameOffroadWheelFront.OuterSingleton, Z_Construct_UClass_UGameOffroadWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameOffroadWheelFront.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UGameOffroadWheelFront>()
{
	return UGameOffroadWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOffroadWheelFront);
UGameOffroadWheelFront::~UGameOffroadWheelFront() {}
// End Class UGameOffroadWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Source_Game_GameOffroadWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameOffroadWheelFront, UGameOffroadWheelFront::StaticClass, TEXT("UGameOffroadWheelFront"), &Z_Registration_Info_UClass_UGameOffroadWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameOffroadWheelFront), 4145242411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Source_Game_GameOffroadWheelFront_h_1083316236(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_Game_Source_Game_GameOffroadWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Source_Game_GameOffroadWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
