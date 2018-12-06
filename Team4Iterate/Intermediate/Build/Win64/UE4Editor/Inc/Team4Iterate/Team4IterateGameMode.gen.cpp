// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4Iterate/Team4IterateGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeam4IterateGameMode() {}
// Cross Module References
	TEAM4ITERATE_API UClass* Z_Construct_UClass_ATeam4IterateGameMode_NoRegister();
	TEAM4ITERATE_API UClass* Z_Construct_UClass_ATeam4IterateGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Team4Iterate();
// End Cross Module References
	void ATeam4IterateGameMode::StaticRegisterNativesATeam4IterateGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATeam4IterateGameMode_NoRegister()
	{
		return ATeam4IterateGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATeam4IterateGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeam4IterateGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Team4Iterate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeam4IterateGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Team4IterateGameMode.h" },
		{ "ModuleRelativePath", "Team4IterateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeam4IterateGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeam4IterateGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeam4IterateGameMode_Statics::ClassParams = {
		&ATeam4IterateGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATeam4IterateGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeam4IterateGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeam4IterateGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeam4IterateGameMode, 3907241251);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeam4IterateGameMode(Z_Construct_UClass_ATeam4IterateGameMode, &ATeam4IterateGameMode::StaticClass, TEXT("/Script/Team4Iterate"), TEXT("ATeam4IterateGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeam4IterateGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
