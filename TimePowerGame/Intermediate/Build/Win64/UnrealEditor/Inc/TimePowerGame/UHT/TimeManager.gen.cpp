// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimePowerGame/TimeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TIMEPOWERGAME_API UClass* Z_Construct_UClass_ATimeManager();
	TIMEPOWERGAME_API UClass* Z_Construct_UClass_ATimeManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimePowerGame();
// End Cross Module References
	DEFINE_FUNCTION(ATimeManager::execEndTimeReverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTimeReverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeManager::execBeginTimeReverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginTimeReverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeManager::execGetTimeFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeFactor();
		P_NATIVE_END;
	}
	void ATimeManager::StaticRegisterNativesATimeManager()
	{
		UClass* Class = ATimeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTimeReverse", &ATimeManager::execBeginTimeReverse },
			{ "EndTimeReverse", &ATimeManager::execEndTimeReverse },
			{ "GetTimeFactor", &ATimeManager::execGetTimeFactor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, nullptr, "BeginTimeReverse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeManager_BeginTimeReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, nullptr, "EndTimeReverse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeManager_EndTimeReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics
	{
		struct TimeManager_eventGetTimeFactor_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeManager_eventGetTimeFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, nullptr, "GetTimeFactor", nullptr, nullptr, Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::TimeManager_eventGetTimeFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::TimeManager_eventGetTimeFactor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATimeManager_GetTimeFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimeManager);
	UClass* Z_Construct_UClass_ATimeManager_NoRegister()
	{
		return ATimeManager::StaticClass();
	}
	struct Z_Construct_UClass_ATimeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTimeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTimeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRecordTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRecordTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalTimeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalTimeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseTimeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseTimeFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TimePowerGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATimeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimeManager_BeginTimeReverse, "BeginTimeReverse" }, // 2531779182
		{ &Z_Construct_UFunction_ATimeManager_EndTimeReverse, "EndTimeReverse" }, // 2178593019
		{ &Z_Construct_UFunction_ATimeManager_GetTimeFactor, "GetTimeFactor" }, // 3724061899
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimeManager.h" },
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentTimeFactor_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentTimeFactor = { "CurrentTimeFactor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeManager, CurrentTimeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentTimeFactor_MetaData), Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentTimeFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordTime_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordTime = { "CurrentRecordTime", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeManager, CurrentRecordTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordTime_MetaData), Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_NormalTimeFactor_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_NormalTimeFactor = { "NormalTimeFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeManager, NormalTimeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_NormalTimeFactor_MetaData), Z_Construct_UClass_ATimeManager_Statics::NewProp_NormalTimeFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeFactor_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeFactor = { "ReverseTimeFactor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeManager, ReverseTimeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeFactor_MetaData), Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeFactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentTimeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_NormalTimeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeManager_Statics::ClassParams = {
		&ATimeManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATimeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimeManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATimeManager()
	{
		if (!Z_Registration_Info_UClass_ATimeManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeManager.OuterSingleton, Z_Construct_UClass_ATimeManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATimeManager.OuterSingleton;
	}
	template<> TIMEPOWERGAME_API UClass* StaticClass<ATimeManager>()
	{
		return ATimeManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeManager);
	ATimeManager::~ATimeManager() {}
	struct Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATimeManager, ATimeManager::StaticClass, TEXT("ATimeManager"), &Z_Registration_Info_UClass_ATimeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeManager), 1029290016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_3734417478(TEXT("/Script/TimePowerGame"),
		Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
