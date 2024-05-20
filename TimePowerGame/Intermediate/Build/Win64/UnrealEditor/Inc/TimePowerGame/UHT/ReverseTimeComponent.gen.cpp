// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimePowerGame/ReverseTimeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverseTimeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TIMEPOWERGAME_API UClass* Z_Construct_UClass_ATimeManager_NoRegister();
	TIMEPOWERGAME_API UClass* Z_Construct_UClass_UReverseTimeComponent();
	TIMEPOWERGAME_API UClass* Z_Construct_UClass_UReverseTimeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimePowerGame();
// End Cross Module References
	void UReverseTimeComponent::StaticRegisterNativesUReverseTimeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReverseTimeComponent);
	UClass* Z_Construct_UClass_UReverseTimeComponent_NoRegister()
	{
		return UReverseTimeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReverseTimeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReverseTimeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TimePowerGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReverseTimeComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverseTimeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ReverseTimeComponent.h" },
		{ "ModuleRelativePath", "ReverseTimeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverseTimeComponent_Statics::NewProp_TimeManager_MetaData[] = {
		{ "Category", "ReverseTimeComponent" },
		{ "ModuleRelativePath", "ReverseTimeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReverseTimeComponent_Statics::NewProp_TimeManager = { "TimeManager", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverseTimeComponent, TimeManager), Z_Construct_UClass_ATimeManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReverseTimeComponent_Statics::NewProp_TimeManager_MetaData), Z_Construct_UClass_UReverseTimeComponent_Statics::NewProp_TimeManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReverseTimeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverseTimeComponent_Statics::NewProp_TimeManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReverseTimeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverseTimeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReverseTimeComponent_Statics::ClassParams = {
		&UReverseTimeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReverseTimeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReverseTimeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReverseTimeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReverseTimeComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReverseTimeComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReverseTimeComponent()
	{
		if (!Z_Registration_Info_UClass_UReverseTimeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReverseTimeComponent.OuterSingleton, Z_Construct_UClass_UReverseTimeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReverseTimeComponent.OuterSingleton;
	}
	template<> TIMEPOWERGAME_API UClass* StaticClass<UReverseTimeComponent>()
	{
		return UReverseTimeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverseTimeComponent);
	UReverseTimeComponent::~UReverseTimeComponent() {}
	struct Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_ReverseTimeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_ReverseTimeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReverseTimeComponent, UReverseTimeComponent::StaticClass, TEXT("UReverseTimeComponent"), &Z_Registration_Info_UClass_UReverseTimeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReverseTimeComponent), 2424238048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_ReverseTimeComponent_h_1949497997(TEXT("/Script/TimePowerGame"),
		Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_ReverseTimeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_ReverseTimeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
