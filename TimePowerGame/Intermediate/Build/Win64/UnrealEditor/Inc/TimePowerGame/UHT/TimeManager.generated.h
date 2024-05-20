// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEPOWERGAME_TimeManager_generated_h
#error "TimeManager.generated.h already included, missing '#pragma once' in TimeManager.h"
#endif
#define TIMEPOWERGAME_TimeManager_generated_h

#define FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_SPARSE_DATA
#define FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableTimeReverseAbility); \
	DECLARE_FUNCTION(execEnableTimeReverseAbility); \
	DECLARE_FUNCTION(execEndTimeReverse); \
	DECLARE_FUNCTION(execBeginTimeReverse); \
	DECLARE_FUNCTION(execGetTimeFactor); \
	DECLARE_FUNCTION(execGetCurrentReversableTime); \
	DECLARE_FUNCTION(execGetAbilityAvailible);


#define FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_ACCESSORS
#define FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimeManager(); \
	friend struct Z_Construct_UClass_ATimeManager_Statics; \
public: \
	DECLARE_CLASS(ATimeManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TimePowerGame"), NO_API) \
	DECLARE_SERIALIZER(ATimeManager)


#define FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimeManager(ATimeManager&&); \
	NO_API ATimeManager(const ATimeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATimeManager) \
	NO_API virtual ~ATimeManager();


#define FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_9_PROLOG
#define FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_SPARSE_DATA \
	FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_ACCESSORS \
	FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_TimePowerGame_Source_TimePowerGame_TimeManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEPOWERGAME_API UClass* StaticClass<class ATimeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TimePowerGame_Source_TimePowerGame_TimeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
