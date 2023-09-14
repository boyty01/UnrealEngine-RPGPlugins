// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYSYSTEM_AbilitySystem_generated_h
#error "AbilitySystem.generated.h already included, missing '#pragma once' in AbilitySystem.h"
#endif
#define ABILITYSYSTEM_AbilitySystem_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AbilitySystem_h


#define FOREACH_ENUM_EGASABILITYINPUTID(op) \
	op(EGASAbilityInputID::None) \
	op(EGASAbilityInputID::Confirm) \
	op(EGASAbilityInputID::Cancel) \
	op(EGASAbilityInputID::AutoAttack) 

enum class EGASAbilityInputID : uint8;
template<> struct TIsUEnumClass<EGASAbilityInputID> { enum { Value = true }; };
template<> ABILITYSYSTEM_API UEnum* StaticEnum<EGASAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
