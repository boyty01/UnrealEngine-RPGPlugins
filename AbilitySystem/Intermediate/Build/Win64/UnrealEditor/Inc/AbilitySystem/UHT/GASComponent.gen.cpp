// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Public/Component/GASComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASComponent() {}
// Cross Module References
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_UGASComponent();
	ABILITYSYSTEM_API UClass* Z_Construct_UClass_UGASComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_AbilitySystem();
// End Cross Module References
	void UGASComponent::StaticRegisterNativesUGASComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASComponent);
	UClass* Z_Construct_UClass_UGASComponent_NoRegister()
	{
		return UGASComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGASComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Component/GASComponent.h" },
		{ "ModuleRelativePath", "Public/Component/GASComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASComponent_Statics::ClassParams = {
		&UGASComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGASComponent()
	{
		if (!Z_Registration_Info_UClass_UGASComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASComponent.OuterSingleton, Z_Construct_UClass_UGASComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASComponent.OuterSingleton;
	}
	template<> ABILITYSYSTEM_API UClass* StaticClass<UGASComponent>()
	{
		return UGASComponent::StaticClass();
	}
	UGASComponent::UGASComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASComponent);
	UGASComponent::~UGASComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_Component_GASComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_Component_GASComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASComponent, UGASComponent::StaticClass, TEXT("UGASComponent"), &Z_Registration_Info_UClass_UGASComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASComponent), 2409925539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_Component_GASComponent_h_77398830(TEXT("/Script/AbilitySystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_Component_GASComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealWoW_Plugins_AbilitySystem_Source_AbilitySystem_Public_Component_GASComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
