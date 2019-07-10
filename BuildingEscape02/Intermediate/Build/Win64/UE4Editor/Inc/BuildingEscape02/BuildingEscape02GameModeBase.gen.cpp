// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape02/BuildingEscape02GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingEscape02GameModeBase() {}
// Cross Module References
	BUILDINGESCAPE02_API UClass* Z_Construct_UClass_ABuildingEscape02GameModeBase_NoRegister();
	BUILDINGESCAPE02_API UClass* Z_Construct_UClass_ABuildingEscape02GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape02();
// End Cross Module References
	void ABuildingEscape02GameModeBase::StaticRegisterNativesABuildingEscape02GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuildingEscape02GameModeBase_NoRegister()
	{
		return ABuildingEscape02GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingEscape02GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingEscape02GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscape02GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BuildingEscape02GameModeBase.h" },
		{ "ModuleRelativePath", "BuildingEscape02GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingEscape02GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingEscape02GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingEscape02GameModeBase_Statics::ClassParams = {
		&ABuildingEscape02GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingEscape02GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABuildingEscape02GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingEscape02GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingEscape02GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingEscape02GameModeBase, 1506197658);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingEscape02GameModeBase(Z_Construct_UClass_ABuildingEscape02GameModeBase, &ABuildingEscape02GameModeBase::StaticClass, TEXT("/Script/BuildingEscape02"), TEXT("ABuildingEscape02GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingEscape02GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
