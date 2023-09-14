// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeSet/GASAttributeSetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ABILITYSYSTEM_GASAttributeSetBase_generated_h
#error "GASAttributeSetBase.generated.h already included, missing '#pragma once' in GASAttributeSetBase.h"
#endif
#define ABILITYSYSTEM_GASAttributeSetBase_generated_h

#define FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_SPARSE_DATA
#define FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_RangedAttackPower); \
	DECLARE_FUNCTION(execOnRep_MeleeAttackPower); \
	DECLARE_FUNCTION(execOnRep_Energy); \
	DECLARE_FUNCTION(execOnRep_Rage); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_ACCESSORS
#define FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGASAttributeSetBase(); \
	friend struct Z_Construct_UClass_UGASAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(UGASAttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UGASAttributeSetBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		Mana, \
		Rage, \
		Energy, \
		MeleeAttackPower, \
		RangedAttackPower, \
		NETFIELD_REP_END=RangedAttackPower	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGASAttributeSetBase) \
public:


#define FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGASAttributeSetBase(UGASAttributeSetBase&&); \
	NO_API UGASAttributeSetBase(const UGASAttributeSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGASAttributeSetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASAttributeSetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGASAttributeSetBase) \
	NO_API virtual ~UGASAttributeSetBase();


#define FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_20_PROLOG
#define FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_SPARSE_DATA \
	FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_ACCESSORS \
	FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYSYSTEM_API UClass* StaticClass<class UGASAttributeSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
