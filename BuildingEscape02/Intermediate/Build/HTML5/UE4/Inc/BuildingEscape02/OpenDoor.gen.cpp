// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape02/OpenDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoor() {}
// Cross Module References
	BUILDINGESCAPE02_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape02_OnOpenRequest__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape02();
	BUILDINGESCAPE02_API UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	BUILDINGESCAPE02_API UClass* Z_Construct_UClass_UOpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BuildingEscape02_OnOpenRequest__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape02_OnOpenRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape02_OnOpenRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape02, "OnOpenRequest__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape02_OnOpenRequest__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape02_OnOpenRequest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape02_OnOpenRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape02_OnOpenRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	struct Z_Construct_UClass_UOpenDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCloseDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoorCloseDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OpenRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OpenDoor.h" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_DoorCloseDelay_MetaData[] = {
		{ "Category", "OpenDoor" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_DoorCloseDelay = { UE4CodeGen_Private::EPropertyClass::Float, "DoorCloseDelay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, DoorCloseDelay), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_DoorCloseDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_DoorCloseDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_PressurePlate_MetaData[] = {
		{ "Category", "OpenDoor" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_PressurePlate = { UE4CodeGen_Private::EPropertyClass::Object, "PressurePlate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_PressurePlate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_PressurePlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenAngle_MetaData[] = {
		{ "Category", "OpenDoor" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenAngle = { UE4CodeGen_Private::EPropertyClass::Float, "OpenAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, OpenAngle), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenRequest_MetaData[] = {
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenRequest = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OpenRequest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UOpenDoor, OpenRequest), Z_Construct_UDelegateFunction_BuildingEscape02_OnOpenRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenRequest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_DoorCloseDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_PressurePlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenDoor_Statics::ClassParams = {
		&UOpenDoor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UOpenDoor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 1426570731);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/BuildingEscape02"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
