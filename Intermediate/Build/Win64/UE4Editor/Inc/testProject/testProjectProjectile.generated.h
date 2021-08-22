// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TESTPROJECT_testProjectProjectile_generated_h
#error "testProjectProjectile.generated.h already included, missing '#pragma once' in testProjectProjectile.h"
#endif
#define TESTPROJECT_testProjectProjectile_generated_h

#define testProject_Source_testProject_testProjectProjectile_h_15_SPARSE_DATA
#define testProject_Source_testProject_testProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define testProject_Source_testProject_testProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define testProject_Source_testProject_testProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtestProjectProjectile(); \
	friend struct Z_Construct_UClass_AtestProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AtestProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/testProject"), NO_API) \
	DECLARE_SERIALIZER(AtestProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define testProject_Source_testProject_testProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAtestProjectProjectile(); \
	friend struct Z_Construct_UClass_AtestProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AtestProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/testProject"), NO_API) \
	DECLARE_SERIALIZER(AtestProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define testProject_Source_testProject_testProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtestProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtestProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtestProjectProjectile(AtestProjectProjectile&&); \
	NO_API AtestProjectProjectile(const AtestProjectProjectile&); \
public:


#define testProject_Source_testProject_testProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtestProjectProjectile(AtestProjectProjectile&&); \
	NO_API AtestProjectProjectile(const AtestProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtestProjectProjectile)


#define testProject_Source_testProject_testProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AtestProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AtestProjectProjectile, ProjectileMovement); }


#define testProject_Source_testProject_testProjectProjectile_h_12_PROLOG
#define testProject_Source_testProject_testProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testProject_Source_testProject_testProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	testProject_Source_testProject_testProjectProjectile_h_15_SPARSE_DATA \
	testProject_Source_testProject_testProjectProjectile_h_15_RPC_WRAPPERS \
	testProject_Source_testProject_testProjectProjectile_h_15_INCLASS \
	testProject_Source_testProject_testProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define testProject_Source_testProject_testProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testProject_Source_testProject_testProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	testProject_Source_testProject_testProjectProjectile_h_15_SPARSE_DATA \
	testProject_Source_testProject_testProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	testProject_Source_testProject_testProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	testProject_Source_testProject_testProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AtestProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testProject_Source_testProject_testProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
