// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimePowerGame/TimePowerGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimePowerGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TIMEPOWERGAME_API UClass* Z_Construct_UClass_ATimePowerGameModeBase();
	TIMEPOWERGAME_API UClass* Z_Construct_UClass_ATimePowerGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimePowerGame();
// End Cross Module References
	void ATimePowerGameModeBase::StaticRegisterNativesATimePowerGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimePowerGameModeBase);
	UClass* Z_Construct_UClass_ATimePowerGameModeBase_NoRegister()
	{
		return ATimePowerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATimePowerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimePowerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TimePowerGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimePowerGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimePowerGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TimePowerGameModeBase.h" },
		{ "ModuleRelativePath", "TimePowerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimePowerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimePowerGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimePowerGameModeBase_Statics::ClassParams = {
		&ATimePowerGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimePowerGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimePowerGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATimePowerGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATimePowerGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimePowerGameModeBase.OuterSingleton, Z_Construct_UClass_ATimePowerGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATimePowerGameModeBase.OuterSingleton;
	}
	template<> TIMEPOWERGAME_API UClass* StaticClass<ATimePowerGameModeBase>()
	{
		return ATimePowerGameModeBase::StaticClass();
	}
	ATimePowerGameModeBase::ATimePowerGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimePowerGameModeBase);
	ATimePowerGameModeBase::~ATimePowerGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimePowerGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimePowerGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATimePowerGameModeBase, ATimePowerGameModeBase::StaticClass, TEXT("ATimePowerGameModeBase"), &Z_Registration_Info_UClass_ATimePowerGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimePowerGameModeBase), 3712855217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimePowerGameModeBase_h_2411815789(TEXT("/Script/TimePowerGame"),
		Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimePowerGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimePowerGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
