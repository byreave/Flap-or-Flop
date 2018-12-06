// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4Iterate/HelpingShape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelpingShape() {}
// Cross Module References
	TEAM4ITERATE_API UClass* Z_Construct_UClass_AHelpingShape_NoRegister();
	TEAM4ITERATE_API UClass* Z_Construct_UClass_AHelpingShape();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Team4Iterate();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void AHelpingShape::StaticRegisterNativesAHelpingShape()
	{
	}
	UClass* Z_Construct_UClass_AHelpingShape_NoRegister()
	{
		return AHelpingShape::StaticClass();
	}
	struct Z_Construct_UClass_AHelpingShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HelpingMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelpingShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Team4Iterate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelpingShape_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HelpingShape.h" },
		{ "ModuleRelativePath", "HelpingShape.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelpingShape_Statics::NewProp_HelpingMesh_MetaData[] = {
		{ "Category", "HelpingShape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HelpingShape.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHelpingShape_Statics::NewProp_HelpingMesh = { UE4CodeGen_Private::EPropertyClass::Object, "HelpingMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a000d, 1, nullptr, STRUCT_OFFSET(AHelpingShape, HelpingMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHelpingShape_Statics::NewProp_HelpingMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHelpingShape_Statics::NewProp_HelpingMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHelpingShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHelpingShape_Statics::NewProp_HelpingMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelpingShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelpingShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHelpingShape_Statics::ClassParams = {
		&AHelpingShape::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AHelpingShape_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AHelpingShape_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHelpingShape_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHelpingShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHelpingShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHelpingShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHelpingShape, 2328630868);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHelpingShape(Z_Construct_UClass_AHelpingShape, &AHelpingShape::StaticClass, TEXT("/Script/Team4Iterate"), TEXT("AHelpingShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelpingShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
