// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4Iterate/Team4IterateCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeam4IterateCharacter() {}
// Cross Module References
	TEAM4ITERATE_API UClass* Z_Construct_UClass_ATeam4IterateCharacter_NoRegister();
	TEAM4ITERATE_API UClass* Z_Construct_UClass_ATeam4IterateCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Team4Iterate();
	TEAM4ITERATE_API UFunction* Z_Construct_UFunction_ATeam4IterateCharacter_SpawnHelpingShape();
	TEAM4ITERATE_API UFunction* Z_Construct_UFunction_ATeam4IterateCharacter_SpawnShape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TEAM4ITERATE_API UClass* Z_Construct_UClass_AHelpingShape_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TEAM4ITERATE_API UClass* Z_Construct_UClass_ASpectatorShape_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ATeam4IterateCharacter::StaticRegisterNativesATeam4IterateCharacter()
	{
		UClass* Class = ATeam4IterateCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnHelpingShape", &ATeam4IterateCharacter::execSpawnHelpingShape },
			{ "SpawnShape", &ATeam4IterateCharacter::execSpawnShape },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeam4IterateCharacter_SpawnHelpingShape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeam4IterateCharacter_SpawnHelpingShape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeam4IterateCharacter_SpawnHelpingShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeam4IterateCharacter, "SpawnHelpingShape", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeam4IterateCharacter_SpawnHelpingShape_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATeam4IterateCharacter_SpawnHelpingShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeam4IterateCharacter_SpawnHelpingShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATeam4IterateCharacter_SpawnHelpingShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATeam4IterateCharacter_SpawnShape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeam4IterateCharacter_SpawnShape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
		{ "ToolTip", "Function that handles spawning shapes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeam4IterateCharacter_SpawnShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeam4IterateCharacter, "SpawnShape", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeam4IterateCharacter_SpawnShape_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATeam4IterateCharacter_SpawnShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeam4IterateCharacter_SpawnShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATeam4IterateCharacter_SpawnShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATeam4IterateCharacter_NoRegister()
	{
		return ATeam4IterateCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATeam4IterateCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpingShapeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HelpingShapeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpingShapeSpawnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HelpingShapeSpawnOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorShapeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpectatorShapeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondShapeSpawnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondShapeSpawnOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeSpawnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeSpawnOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheatManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheatManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeam4IterateCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Team4Iterate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeam4IterateCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeam4IterateCharacter_SpawnHelpingShape, "SpawnHelpingShape" }, // 3508731327
		{ &Z_Construct_UFunction_ATeam4IterateCharacter_SpawnShape, "SpawnShape" }, // 2421646224
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeam4IterateCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Team4IterateCharacter.h" },
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_HelpingShapeClass_MetaData[] = {
		{ "Category", "Helping Shapes" },
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
		{ "ToolTip", "Helping shape class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_HelpingShapeClass = { UE4CodeGen_Private::EPropertyClass::Class, "HelpingShapeClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(ATeam4IterateCharacter, HelpingShapeClass), Z_Construct_UClass_AHelpingShape_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_HelpingShapeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_HelpingShapeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_HelpingShapeSpawnOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_HelpingShapeSpawnOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "HelpingShapeSpawnOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ATeam4IterateCharacter, HelpingShapeSpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_HelpingShapeSpawnOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_HelpingShapeSpawnOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SpectatorShapeClass_MetaData[] = {
		{ "Category", "Spectator Shapes" },
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
		{ "ToolTip", "Spectator shape class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SpectatorShapeClass = { UE4CodeGen_Private::EPropertyClass::Class, "SpectatorShapeClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(ATeam4IterateCharacter, SpectatorShapeClass), Z_Construct_UClass_ASpectatorShape_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SpectatorShapeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SpectatorShapeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SecondShapeSpawnOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SecondShapeSpawnOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondShapeSpawnOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ATeam4IterateCharacter, SecondShapeSpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SecondShapeSpawnOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SecondShapeSpawnOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_ShapeSpawnOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
		{ "ToolTip", "Shape spawn offset based on camera location." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_ShapeSpawnOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ShapeSpawnOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ATeam4IterateCharacter, ShapeSpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_ShapeSpawnOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_ShapeSpawnOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_CheatManager_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_CheatManager = { UE4CodeGen_Private::EPropertyClass::Object, "CheatManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ATeam4IterateCharacter, CheatManager), Z_Construct_UClass_UCheatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_CheatManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_CheatManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera beside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATeam4IterateCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Team4IterateCharacter.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SideViewCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SideViewCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATeam4IterateCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeam4IterateCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_HelpingShapeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_HelpingShapeSpawnOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SpectatorShapeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SecondShapeSpawnOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_ShapeSpawnOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_CheatManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeam4IterateCharacter_Statics::NewProp_SideViewCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeam4IterateCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeam4IterateCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeam4IterateCharacter_Statics::ClassParams = {
		&ATeam4IterateCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATeam4IterateCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateCharacter_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATeam4IterateCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATeam4IterateCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeam4IterateCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeam4IterateCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeam4IterateCharacter, 3259702814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeam4IterateCharacter(Z_Construct_UClass_ATeam4IterateCharacter, &ATeam4IterateCharacter::StaticClass, TEXT("/Script/Team4Iterate"), TEXT("ATeam4IterateCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeam4IterateCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
