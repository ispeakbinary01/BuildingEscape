// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape02/FloorPositionReport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPositionReport() {}
// Cross Module References
	BUILDINGESCAPE02_API UClass* Z_Construct_UClass_UFloorPositionReport_NoRegister();
	BUILDINGESCAPE02_API UClass* Z_Construct_UClass_UFloorPositionReport();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape02();
// End Cross Module References
	void UFloorPositionReport::StaticRegisterNativesUFloorPositionReport()
	{
	}
	UClass* Z_Construct_UClass_UFloorPositionReport_NoRegister()
	{
		return UFloorPositionReport::StaticClass();
	}
	struct Z_Construct_UClass_UFloorPositionReport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorPositionReport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPositionReport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FloorPositionReport.h" },
		{ "ModuleRelativePath", "FloorPositionReport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorPositionReport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorPositionReport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloorPositionReport_Statics::ClassParams = {
		&UFloorPositionReport::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFloorPositionReport_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFloorPositionReport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloorPositionReport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloorPositionReport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloorPositionReport, 3504507471);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloorPositionReport(Z_Construct_UClass_UFloorPositionReport, &UFloorPositionReport::StaticClass, TEXT("/Script/BuildingEscape02"), TEXT("UFloorPositionReport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorPositionReport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
