// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Public/AttributeSet/GASAttributeSetBase.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASAttributeSetBase() {}
// Cross Module References
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_UGASAttributeSetBase();
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_UGASAttributeSetBase_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_AbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(UGASAttributeSetBase::execOnRep_RangedAttackPower)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RangedAttackPower(Z_Param_Out_OldAttackPower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGASAttributeSetBase::execOnRep_MeleeAttackPower)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MeleeAttackPower(Z_Param_Out_OldAttackPower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGASAttributeSetBase::execOnRep_Energy)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Energy(Z_Param_Out_OldEnergy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGASAttributeSetBase::execOnRep_Rage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldRage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Rage(Z_Param_Out_OldRage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGASAttributeSetBase::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGASAttributeSetBase::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UGASAttributeSetBase::StaticRegisterNativesUGASAttributeSetBase()
	{
		UClass* Class = UGASAttributeSetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Energy", &UGASAttributeSetBase::execOnRep_Energy },
			{ "OnRep_Health", &UGASAttributeSetBase::execOnRep_Health },
			{ "OnRep_Mana", &UGASAttributeSetBase::execOnRep_Mana },
			{ "OnRep_MeleeAttackPower", &UGASAttributeSetBase::execOnRep_MeleeAttackPower },
			{ "OnRep_Rage", &UGASAttributeSetBase::execOnRep_Rage },
			{ "OnRep_RangedAttackPower", &UGASAttributeSetBase::execOnRep_RangedAttackPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics
	{
		struct GASAttributeSetBase_eventOnRep_Energy_Parms
		{
			FGameplayAttributeData OldEnergy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldEnergy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::NewProp_OldEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::NewProp_OldEnergy = { "OldEnergy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSetBase_eventOnRep_Energy_Parms, OldEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::NewProp_OldEnergy_MetaData), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::NewProp_OldEnergy_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::NewProp_OldEnergy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSetBase, nullptr, "OnRep_Energy", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::GASAttributeSetBase_eventOnRep_Energy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::GASAttributeSetBase_eventOnRep_Energy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics
	{
		struct GASAttributeSetBase_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSetBase_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSetBase, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::GASAttributeSetBase_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::GASAttributeSetBase_eventOnRep_Health_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics
	{
		struct GASAttributeSetBase_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSetBase_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana_MetaData), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSetBase, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::GASAttributeSetBase_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::GASAttributeSetBase_eventOnRep_Mana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics
	{
		struct GASAttributeSetBase_eventOnRep_MeleeAttackPower_Parms
		{
			FGameplayAttributeData OldAttackPower;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackPower_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::NewProp_OldAttackPower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::NewProp_OldAttackPower = { "OldAttackPower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSetBase_eventOnRep_MeleeAttackPower_Parms, OldAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::NewProp_OldAttackPower_MetaData), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::NewProp_OldAttackPower_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::NewProp_OldAttackPower,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSetBase, nullptr, "OnRep_MeleeAttackPower", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::GASAttributeSetBase_eventOnRep_MeleeAttackPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::GASAttributeSetBase_eventOnRep_MeleeAttackPower_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics
	{
		struct GASAttributeSetBase_eventOnRep_Rage_Parms
		{
			FGameplayAttributeData OldRage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldRage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldRage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::NewProp_OldRage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::NewProp_OldRage = { "OldRage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSetBase_eventOnRep_Rage_Parms, OldRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::NewProp_OldRage_MetaData), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::NewProp_OldRage_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::NewProp_OldRage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSetBase, nullptr, "OnRep_Rage", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::GASAttributeSetBase_eventOnRep_Rage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::GASAttributeSetBase_eventOnRep_Rage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics
	{
		struct GASAttributeSetBase_eventOnRep_RangedAttackPower_Parms
		{
			FGameplayAttributeData OldAttackPower;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackPower_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::NewProp_OldAttackPower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::NewProp_OldAttackPower = { "OldAttackPower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASAttributeSetBase_eventOnRep_RangedAttackPower_Parms, OldAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::NewProp_OldAttackPower_MetaData), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::NewProp_OldAttackPower_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::NewProp_OldAttackPower,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttributeSetBase, nullptr, "OnRep_RangedAttackPower", nullptr, nullptr, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::GASAttributeSetBase_eventOnRep_RangedAttackPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::GASAttributeSetBase_eventOnRep_RangedAttackPower_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASAttributeSetBase);
	UClass* Z_Construct_UClass_UGASAttributeSetBase_NoRegister()
	{
		return UGASAttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UGASAttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Energy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackPower_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeAttackPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangedAttackPower_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RangedAttackPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASAttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGASAttributeSetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Energy, "OnRep_Energy" }, // 2665278476
		{ &Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Health, "OnRep_Health" }, // 2057354482
		{ &Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Mana, "OnRep_Mana" }, // 1935121934
		{ &Z_Construct_UFunction_UGASAttributeSetBase_OnRep_MeleeAttackPower, "OnRep_MeleeAttackPower" }, // 2671059487
		{ &Z_Construct_UFunction_UGASAttributeSetBase_OnRep_Rage, "OnRep_Rage" }, // 1056905855
		{ &Z_Construct_UFunction_UGASAttributeSetBase_OnRep_RangedAttackPower, "OnRep_RangedAttackPower" }, // 3978885757
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSetBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AttributeSet/GASAttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Health attribute */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSetBase, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Mana attribute */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSetBase, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Mana_MetaData), Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Mana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Rage_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Rage attribute */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rage attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Rage = { "Rage", "OnRep_Rage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSetBase, Rage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Rage_MetaData), Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Rage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Energy attribute */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Energy attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Energy = { "Energy", "OnRep_Energy", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSetBase, Energy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Energy_MetaData), Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Energy_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_MeleeAttackPower_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Melee Attack power attribute */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Melee Attack power attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_MeleeAttackPower = { "MeleeAttackPower", "OnRep_MeleeAttackPower", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSetBase, MeleeAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_MeleeAttackPower_MetaData), Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_MeleeAttackPower_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_RangedAttackPower_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Ranged Attack power attribute */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSet/GASAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranged Attack power attribute" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_RangedAttackPower = { "RangedAttackPower", "OnRep_RangedAttackPower", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGASAttributeSetBase, RangedAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_RangedAttackPower_MetaData), Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_RangedAttackPower_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASAttributeSetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Rage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_Energy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_MeleeAttackPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttributeSetBase_Statics::NewProp_RangedAttackPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASAttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASAttributeSetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASAttributeSetBase_Statics::ClassParams = {
		&UGASAttributeSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGASAttributeSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASAttributeSetBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttributeSetBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGASAttributeSetBase()
	{
		if (!Z_Registration_Info_UClass_UGASAttributeSetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASAttributeSetBase.OuterSingleton, Z_Construct_UClass_UGASAttributeSetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASAttributeSetBase.OuterSingleton;
	}
	template<> ABILITYSYSTEM_API UClass* StaticClass<UGASAttributeSetBase>()
	{
		return UGASAttributeSetBase::StaticClass();
	}

	void UGASAttributeSetBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_Rage(TEXT("Rage"));
		static const FName Name_Energy(TEXT("Energy"));
		static const FName Name_MeleeAttackPower(TEXT("MeleeAttackPower"));
		static const FName Name_RangedAttackPower(TEXT("RangedAttackPower"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_Rage == ClassReps[(int32)ENetFields_Private::Rage].Property->GetFName()
			&& Name_Energy == ClassReps[(int32)ENetFields_Private::Energy].Property->GetFName()
			&& Name_MeleeAttackPower == ClassReps[(int32)ENetFields_Private::MeleeAttackPower].Property->GetFName()
			&& Name_RangedAttackPower == ClassReps[(int32)ENetFields_Private::RangedAttackPower].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGASAttributeSetBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASAttributeSetBase);
	UGASAttributeSetBase::~UGASAttributeSetBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASAttributeSetBase, UGASAttributeSetBase::StaticClass, TEXT("UGASAttributeSetBase"), &Z_Registration_Info_UClass_UGASAttributeSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASAttributeSetBase), 2961918140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_2148517980(TEXT("/Script/AbilitySystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_AttributeSet_GASAttributeSetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
