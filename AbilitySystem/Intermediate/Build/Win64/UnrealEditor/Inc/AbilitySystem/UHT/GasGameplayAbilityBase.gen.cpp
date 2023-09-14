// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Public/GameplayAbilities/GasGameplayAbilityBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGasGameplayAbilityBase() {}
// Cross Module References
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_UGasGameplayAbilityBase();
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_UGasGameplayAbilityBase_NoRegister();
	ABILITYSYSTEM_API UEnum* Z_Construct_UEnum_AbilitySystem_EGASAbilityInputID();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_AbilitySystem();
// End Cross Module References
	void UGasGameplayAbilityBase::StaticRegisterNativesUGasGameplayAbilityBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGasGameplayAbilityBase);
	UClass* Z_Construct_UClass_UGasGameplayAbilityBase_NoRegister()
	{
		return UGasGameplayAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UGasGameplayAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGasGameplayAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGasGameplayAbilityBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGasGameplayAbilityBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilities/GasGameplayAbilityBase.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/GasGameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGasGameplayAbilityBase_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGasGameplayAbilityBase_Statics::NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/GasGameplayAbilityBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGasGameplayAbilityBase_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGasGameplayAbilityBase, AbilityInputID), Z_Construct_UEnum_AbilitySystem_EGASAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGasGameplayAbilityBase_Statics::NewProp_AbilityInputID_MetaData), Z_Construct_UClass_UGasGameplayAbilityBase_Statics::NewProp_AbilityInputID_MetaData) }; // 3862507162
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGasGameplayAbilityBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasGameplayAbilityBase_Statics::NewProp_AbilityInputID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasGameplayAbilityBase_Statics::NewProp_AbilityInputID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGasGameplayAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGasGameplayAbilityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGasGameplayAbilityBase_Statics::ClassParams = {
		&UGasGameplayAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGasGameplayAbilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGasGameplayAbilityBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGasGameplayAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGasGameplayAbilityBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGasGameplayAbilityBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGasGameplayAbilityBase()
	{
		if (!Z_Registration_Info_UClass_UGasGameplayAbilityBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGasGameplayAbilityBase.OuterSingleton, Z_Construct_UClass_UGasGameplayAbilityBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGasGameplayAbilityBase.OuterSingleton;
	}
	template<> ABILITYSYSTEM_API UClass* StaticClass<UGasGameplayAbilityBase>()
	{
		return UGasGameplayAbilityBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGasGameplayAbilityBase);
	UGasGameplayAbilityBase::~UGasGameplayAbilityBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_GameplayAbilities_GasGameplayAbilityBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_GameplayAbilities_GasGameplayAbilityBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGasGameplayAbilityBase, UGasGameplayAbilityBase::StaticClass, TEXT("UGasGameplayAbilityBase"), &Z_Registration_Info_UClass_UGasGameplayAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGasGameplayAbilityBase), 1336747829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_GameplayAbilities_GasGameplayAbilityBase_h_2226243547(TEXT("/Script/AbilitySystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_GameplayAbilities_GasGameplayAbilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_GameplayAbilities_GasGameplayAbilityBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
