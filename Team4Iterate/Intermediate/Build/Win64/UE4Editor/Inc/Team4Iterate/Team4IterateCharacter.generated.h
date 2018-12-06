// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM4ITERATE_Team4IterateCharacter_generated_h
#error "Team4IterateCharacter.generated.h already included, missing '#pragma once' in Team4IterateCharacter.h"
#endif
#define TEAM4ITERATE_Team4IterateCharacter_generated_h

#define Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnHelpingShape) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnHelpingShape(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnShape) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnShape(); \
		P_NATIVE_END; \
	}


#define Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnHelpingShape) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnHelpingShape(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnShape) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnShape(); \
		P_NATIVE_END; \
	}


#define Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeam4IterateCharacter(); \
	friend struct Z_Construct_UClass_ATeam4IterateCharacter_Statics; \
public: \
	DECLARE_CLASS(ATeam4IterateCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Team4Iterate"), NO_API) \
	DECLARE_SERIALIZER(ATeam4IterateCharacter)


#define Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATeam4IterateCharacter(); \
	friend struct Z_Construct_UClass_ATeam4IterateCharacter_Statics; \
public: \
	DECLARE_CLASS(ATeam4IterateCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Team4Iterate"), NO_API) \
	DECLARE_SERIALIZER(ATeam4IterateCharacter)


#define Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeam4IterateCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeam4IterateCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeam4IterateCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeam4IterateCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeam4IterateCharacter(ATeam4IterateCharacter&&); \
	NO_API ATeam4IterateCharacter(const ATeam4IterateCharacter&); \
public:


#define Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeam4IterateCharacter(ATeam4IterateCharacter&&); \
	NO_API ATeam4IterateCharacter(const ATeam4IterateCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeam4IterateCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeam4IterateCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeam4IterateCharacter)


#define Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ATeam4IterateCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATeam4IterateCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CheatManager() { return STRUCT_OFFSET(ATeam4IterateCharacter, CheatManager); }


#define Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_12_PROLOG
#define Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_RPC_WRAPPERS \
	Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_INCLASS \
	Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Team4Iterate_Source_Team4Iterate_Team4IterateCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
