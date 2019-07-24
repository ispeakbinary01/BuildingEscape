// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE02_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define BUILDINGESCAPE02_OpenDoor_generated_h

#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_10_DELEGATE \
static inline void FOnOpenRequest_DelegateWrapper(const FMulticastScriptDelegate& OnOpenRequest) \
{ \
	OnOpenRequest.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_RPC_WRAPPERS
#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape02"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape02"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OpenAngle() { return STRUCT_OFFSET(UOpenDoor, OpenAngle); } \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UOpenDoor, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__DoorCloseDelay() { return STRUCT_OFFSET(UOpenDoor, DoorCloseDelay); }


#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_12_PROLOG
#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_RPC_WRAPPERS \
	BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_INCLASS \
	BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_INCLASS_NO_PURE_DECLS \
	BuildingEscape02_Source_BuildingEscape02_OpenDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape02_Source_BuildingEscape02_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
