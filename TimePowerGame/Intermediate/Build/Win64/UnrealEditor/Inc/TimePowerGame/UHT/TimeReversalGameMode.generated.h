// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeReversalGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATimeManager;
#ifdef TIMEPOWERGAME_TimeReversalGameMode_generated_h
#error "TimeReversalGameMode.generated.h already included, missing '#pragma once' in TimeReversalGameMode.h"
#endif
#define TIMEPOWERGAME_TimeReversalGameMode_generated_h

#define FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_SPARSE_DATA
#define FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTimeManager);


#define FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_ACCESSORS
#define FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimeReversalGameMode(); \
	friend struct Z_Construct_UClass_ATimeReversalGameMode_Statics; \
public: \
	DECLARE_CLASS(ATimeReversalGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TimePowerGame"), NO_API) \
	DECLARE_SERIALIZER(ATimeReversalGameMode)


#define FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimeReversalGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimeReversalGameMode(ATimeReversalGameMode&&); \
	NO_API ATimeReversalGameMode(const ATimeReversalGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeReversalGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeReversalGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimeReversalGameMode) \
	NO_API virtual ~ATimeReversalGameMode();


#define FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_13_PROLOG
#define FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_SPARSE_DATA \
	FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_ACCESSORS \
	FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEPOWERGAME_API UClass* StaticClass<class ATimeReversalGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TimePowerGame_Source_TimePowerGame_TimeReversalGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
