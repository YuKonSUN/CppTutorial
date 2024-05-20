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
	DEFINE_FUNCTION(ATimeManager::execDisableTimeReverseAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableTimeReverseAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeManager::execEnableTimeReverseAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableTimeReverseAbility();
		P_NATIVE_END;
	}
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
	DEFINE_FUNCTION(ATimeManager::execGetCurrentReversableTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentReversableTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeManager::execGetAbilityAvailible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAbilityAvailible();
		P_NATIVE_END;
	}
	void ATimeManager::StaticRegisterNativesATimeManager()
	{
		UClass* Class = ATimeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTimeReverse", &ATimeManager::execBeginTimeReverse },
			{ "DisableTimeReverseAbility", &ATimeManager::execDisableTimeReverseAbility },
			{ "EnableTimeReverseAbility", &ATimeManager::execEnableTimeReverseAbility },
			{ "EndTimeReverse", &ATimeManager::execEndTimeReverse },
			{ "GetAbilityAvailible", &ATimeManager::execGetAbilityAvailible },
			{ "GetCurrentReversableTime", &ATimeManager::execGetCurrentReversableTime },
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
	struct Z_Construct_UFunction_ATimeManager_DisableTimeReverseAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_DisableTimeReverseAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_DisableTimeReverseAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, nullptr, "DisableTimeReverseAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_DisableTimeReverseAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeManager_DisableTimeReverseAbility_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeManager_DisableTimeReverseAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeManager_DisableTimeReverseAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_EnableTimeReverseAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_EnableTimeReverseAbility_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable control\n" },
#endif
		{ "ModuleRelativePath", "TimeManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable control" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_EnableTimeReverseAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, nullptr, "EnableTimeReverseAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_EnableTimeReverseAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeManager_EnableTimeReverseAbility_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeManager_EnableTimeReverseAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeManager_EnableTimeReverseAbility_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics
	{
		struct TimeManager_eventGetAbilityAvailible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeManager_eventGetAbilityAvailible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TimeManager_eventGetAbilityAvailible_Parms), &Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, nullptr, "GetAbilityAvailible", nullptr, nullptr, Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::TimeManager_eventGetAbilityAvailible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::TimeManager_eventGetAbilityAvailible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATimeManager_GetAbilityAvailible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeManager_GetAbilityAvailible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics
	{
		struct TimeManager_eventGetCurrentReversableTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeManager_eventGetCurrentReversableTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, nullptr, "GetCurrentReversableTime", nullptr, nullptr, Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::TimeManager_eventGetCurrentReversableTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::TimeManager_eventGetCurrentReversableTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRecordedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRecordedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeReversalAbilityEnabled_MetaData[];
#endif
		static void NewProp_TimeReversalAbilityEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TimeReversalAbilityEnabled;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseTimeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseTimeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseTimeMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseTimeMaximum;
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
		{ &Z_Construct_UFunction_ATimeManager_DisableTimeReverseAbility, "DisableTimeReverseAbility" }, // 1051503852
		{ &Z_Construct_UFunction_ATimeManager_EnableTimeReverseAbility, "EnableTimeReverseAbility" }, // 687523463
		{ &Z_Construct_UFunction_ATimeManager_EndTimeReverse, "EndTimeReverse" }, // 2178593019
		{ &Z_Construct_UFunction_ATimeManager_GetAbilityAvailible, "GetAbilityAvailible" }, // 3689625701
		{ &Z_Construct_UFunction_ATimeManager_GetCurrentReversableTime, "GetCurrentReversableTime" }, // 3447226333
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordedTime_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordedTime = { "CurrentRecordedTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeManager, CurrentRecordedTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordedTime_MetaData), Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordedTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeReversalAbilityEnabled_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	void Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeReversalAbilityEnabled_SetBit(void* Obj)
	{
		((ATimeManager*)Obj)->TimeReversalAbilityEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeReversalAbilityEnabled = { "TimeReversalAbilityEnabled", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATimeManager), &Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeReversalAbilityEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeReversalAbilityEnabled_MetaData), Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeReversalAbilityEnabled_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeThreshold_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeThreshold = { "ReverseTimeThreshold", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeManager, ReverseTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeThreshold_MetaData), Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeMaximum_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "TimeManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeMaximum = { "ReverseTimeMaximum", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeManager, ReverseTimeMaximum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeMaximum_MetaData), Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeMaximum_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentTimeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeReversalAbilityEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentRecordTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_NormalTimeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_ReverseTimeMaximum,
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
		{ Z_Construct_UClass_ATimeManager, ATimeManager::StaticClass, TEXT("ATimeManager"), &Z_Registration_Info_UClass_ATimeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeManager), 2864375893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_18455299(TEXT("/Script/TimePowerGame"),
		Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
