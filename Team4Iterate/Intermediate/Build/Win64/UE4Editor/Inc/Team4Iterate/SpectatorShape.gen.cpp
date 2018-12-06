// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Team4Iterate/SpectatorShape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorShape() {}
// Cross Module References
	TEAM4ITERATE_API UClass* Z_Construct_UClass_ASpectatorShape_NoRegister();
	TEAM4ITERATE_API UClass* Z_Construct_UClass_ASpectatorShape();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Team4Iterate();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void ASpectatorShape::StaticRegisterNativesASpectatorShape()
	{
	}
	UClass* Z_Construct_UClass_ASpectatorShape_NoRegister()
	{
		return ASpectatorShape::StaticClass();
	}
	struct Z_Construct_UClass_ASpectatorShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpectatorShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Team4Iterate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorShape_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpectatorShape.h" },
		{ "ModuleRelativePath", "SpectatorShape.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorShape_Statics::NewProp_CustomMesh_MetaData[] = {
		{ "Category", "SpectatorShape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpectatorShape.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpectatorShape_Statics::NewProp_CustomMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CustomMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a000d, 1, nullptr, STRUCT_OFFSET(ASpectatorShape, CustomMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpectatorShape_Statics::NewProp_CustomMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpectatorShape_Statics::NewProp_CustomMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpectatorShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorShape_Statics::NewProp_CustomMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpectatorShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpectatorShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpectatorShape_Statics::ClassParams = {
		&ASpectatorShape::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ASpectatorShape_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASpectatorShape_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASpectatorShape_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpectatorShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpectatorShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpectatorShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpectatorShape, 3119537808);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpectatorShape(Z_Construct_UClass_ASpectatorShape, &ASpectatorShape::StaticClass, TEXT("/Script/Team4Iterate"), TEXT("ASpectatorShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpectatorShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
