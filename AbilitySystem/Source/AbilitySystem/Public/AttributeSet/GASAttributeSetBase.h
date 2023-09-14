// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GASAttributeSetBase.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class ABILITYSYSTEM_API UGASAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()
	
public :
	UGASAttributeSetBase();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/* Health attribute */
	UPROPERTY(BlueprintReadOnly, Category ="Attributes", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGASAttributeSetBase, Health);

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	/* Mana attribute */
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UGASAttributeSetBase, Mana);

	UFUNCTION()
	virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

	/* Rage attribute */
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Rage)
	FGameplayAttributeData Rage;
	ATTRIBUTE_ACCESSORS(UGASAttributeSetBase, Rage);

	UFUNCTION()
	virtual void OnRep_Rage(const FGameplayAttributeData& OldRage);

	/* Energy attribute */
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Energy)
	FGameplayAttributeData Energy;
	ATTRIBUTE_ACCESSORS(UGASAttributeSetBase, Energy);

	UFUNCTION()
	virtual void OnRep_Energy(const FGameplayAttributeData& OldEnergy);

	/* Melee Attack power attribute */
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MeleeAttackPower)
	FGameplayAttributeData MeleeAttackPower;
	ATTRIBUTE_ACCESSORS(UGASAttributeSetBase, MeleeAttackPower);

	UFUNCTION()
	virtual void OnRep_MeleeAttackPower(const FGameplayAttributeData& OldAttackPower);

	/* Ranged Attack power attribute */
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_RangedAttackPower)
	FGameplayAttributeData RangedAttackPower;
	ATTRIBUTE_ACCESSORS(UGASAttributeSetBase, RangedAttackPower);

	UFUNCTION()
	virtual void OnRep_RangedAttackPower(const FGameplayAttributeData& OldAttackPower);



};
