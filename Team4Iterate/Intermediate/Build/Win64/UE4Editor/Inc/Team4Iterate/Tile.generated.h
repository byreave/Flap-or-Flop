// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TEAM4ITERATE_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define TEAM4ITERATE_Tile_generated_h

#define Team4Iterate_Source_Team4Iterate_Tile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlaceActors) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ToSpawn); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinSpawn); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxSpawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaceActors(Z_Param_ToSpawn,Z_Param_MinSpawn,Z_Param_MaxSpawn); \
		P_NATIVE_END; \
	}


#define Team4Iterate_Source_Team4Iterate_Tile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlaceActors) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ToSpawn); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinSpawn); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxSpawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaceActors(Z_Param_ToSpawn,Z_Param_MinSpawn,Z_Param_MaxSpawn); \
		P_NATIVE_END; \
	}


#define Team4Iterate_Source_Team4Iterate_Tile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Team4Iterate"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define Team4Iterate_Source_Team4Iterate_Tile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Team4Iterate"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define Team4Iterate_Source_Team4Iterate_Tile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public:


#define Team4Iterate_Source_Team4Iterate_Tile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile)


#define Team4Iterate_Source_Team4Iterate_Tile_h_12_PRIVATE_PROPERTY_OFFSET
#define Team4Iterate_Source_Team4Iterate_Tile_h_9_PROLOG
#define Team4Iterate_Source_Team4Iterate_Tile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team4Iterate_Source_Team4Iterate_Tile_h_12_PRIVATE_PROPERTY_OFFSET \
	Team4Iterate_Source_Team4Iterate_Tile_h_12_RPC_WRAPPERS \
	Team4Iterate_Source_Team4Iterate_Tile_h_12_INCLASS \
	Team4Iterate_Source_Team4Iterate_Tile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Team4Iterate_Source_Team4Iterate_Tile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Team4Iterate_Source_Team4Iterate_Tile_h_12_PRIVATE_PROPERTY_OFFSET \
	Team4Iterate_Source_Team4Iterate_Tile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Team4Iterate_Source_Team4Iterate_Tile_h_12_INCLASS_NO_PURE_DECLS \
	Team4Iterate_Source_Team4Iterate_Tile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Team4Iterate_Source_Team4Iterate_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
