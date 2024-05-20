// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimePowerGame/TimeReversalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeReversalGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TIMEPOWERGAME_API UClass* Z_Construct_UClass_ATimeManager_NoRegister();
	TIMEPOWERGAME_API UClass* Z_Construct_UClass_ATimeReversalGameMode();
	TIMEPOWERGAME_API UClass* Z_Construct_UClass_ATimeReversalGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimePowerGame();
// End Cross Module References
	DEFINE_FUNCTION(ATimeReversalGameMode::execGetTimeManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATimeManager**)Z_Param__Result=P_THIS->GetTimeManager();
		P_NATIVE_END;
	}
	void ATimeReversalGameMode::StaticRegisterNativesATimeReversalGameMode()
	{
		UClass* Class = ATimeReversalGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTimeManager", &ATimeReversalGameMode::execGetTimeManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics
	{
		struct TimeReversalGameMode_eventGetTimeManager_Parms
		{
			ATimeManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeReversalGameMode_eventGetTimeManager_Parms, ReturnValue), Z_Construct_UClass_ATimeManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TimeReversalGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeReversalGameMode, nullptr, "GetTimeManager", nullptr, nullptr, Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::TimeReversalGameMode_eventGetTimeManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::TimeReversalGameMode_eventGetTimeManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimeReversalGameMode);
	UClass* Z_Construct_UClass_ATimeReversalGameMode_NoRegister()
	{
		return ATimeReversalGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATimeReversalGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_ATimeReversalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TimePowerGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReversalGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATimeReversalGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager, "GetTimeManager" }, // 1524678704
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReversalGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeReversalGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TimeReversalGameMode.h" },
		{ "ModuleRelativePath", "TimeReversalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeReversalGameMode_Statics::NewProp_TimeManager_MetaData[] = {
		{ "Category", "TimeReversalGameMode" },
		{ "ModuleRelativePath", "TimeReversalGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeReversalGameMode_Statics::NewProp_TimeManager = { "TimeManager", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeReversalGameMode, TimeManager), Z_Construct_UClass_ATimeManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReversalGameMode_Statics::NewProp_TimeManager_MetaData), Z_Construct_UClass_ATimeReversalGameMode_Statics::NewProp_TimeManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeReversalGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeReversalGameMode_Statics::NewProp_TimeManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeReversalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeReversalGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeReversalGameMode_Statics::ClassParams = {
		&ATimeReversalGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATimeReversalGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReversalGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReversalGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimeReversalGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReversalGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATimeReversalGameMode()
	{
		if (!Z_Registration_Info_UClass_ATimeReversalGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeReversalGameMode.OuterSingleton, Z_Construct_UClass_ATimeReversalGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATimeReversalGameMode.OuterSingleton;
	}
	template<> TIMEPOWERGAME_API UClass* StaticClass<ATimeReversalGameMode>()
	{
		return ATimeReversalGameMode::StaticClass();
	}
	ATimeReversalGameMode::ATimeReversalGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeReversalGameMode);
	ATimeReversalGameMode::~ATimeReversalGameMode() {}
	struct Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATimeReversalGameMode, ATimeReversalGameMode::StaticClass, TEXT("ATimeReversalGameMode"), &Z_Registration_Info_UClass_ATimeReversalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeReversalGameMode), 289432154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_4086957749(TEXT("/Script/TimePowerGame"),
		Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
