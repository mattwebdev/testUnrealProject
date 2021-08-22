// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_testProjectCharacter_generated_h
#error "testProjectCharacter.generated.h already included, missing '#pragma once' in testProjectCharacter.h"
#endif
#define TESTPROJECT_testProjectCharacter_generated_h

#define testProject_Source_testProject_testProjectCharacter_h_20_SPARSE_DATA
#define testProject_Source_testProject_testProjectCharacter_h_20_RPC_WRAPPERS
#define testProject_Source_testProject_testProjectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define testProject_Source_testProject_testProjectCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtestProjectCharacter(); \
	friend struct Z_Construct_UClass_AtestProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AtestProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/testProject"), NO_API) \
	DECLARE_SERIALIZER(AtestProjectCharacter)


#define testProject_Source_testProject_testProjectCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAtestProjectCharacter(); \
	friend struct Z_Construct_UClass_AtestProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AtestProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/testProject"), NO_API) \
	DECLARE_SERIALIZER(AtestProjectCharacter)


#define testProject_Source_testProject_testProjectCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtestProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtestProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtestProjectCharacter(AtestProjectCharacter&&); \
	NO_API AtestProjectCharacter(const AtestProjectCharacter&); \
public:


#define testProject_Source_testProject_testProjectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtestProjectCharacter(AtestProjectCharacter&&); \
	NO_API AtestProjectCharacter(const AtestProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtestProjectCharacter)


#define testProject_Source_testProject_testProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AtestProjectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AtestProjectCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AtestProjectCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AtestProjectCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AtestProjectCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AtestProjectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AtestProjectCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AtestProjectCharacter, L_MotionController); }


#define testProject_Source_testProject_testProjectCharacter_h_17_PROLOG
#define testProject_Source_testProject_testProjectCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testProject_Source_testProject_testProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	testProject_Source_testProject_testProjectCharacter_h_20_SPARSE_DATA \
	testProject_Source_testProject_testProjectCharacter_h_20_RPC_WRAPPERS \
	testProject_Source_testProject_testProjectCharacter_h_20_INCLASS \
	testProject_Source_testProject_testProjectCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define testProject_Source_testProject_testProjectCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testProject_Source_testProject_testProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	testProject_Source_testProject_testProjectCharacter_h_20_SPARSE_DATA \
	testProject_Source_testProject_testProjectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	testProject_Source_testProject_testProjectCharacter_h_20_INCLASS_NO_PURE_DECLS \
	testProject_Source_testProject_testProjectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AtestProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testProject_Source_testProject_testProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
