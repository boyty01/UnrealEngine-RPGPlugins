// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystem.h"
#include "GasGameplayAbilityBase.generated.h"

/**
 * 
 */
UCLASS()
class ABILITYSYSTEM_API UGasGameplayAbilityBase : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UGasGameplayAbilityBase();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EGASAbilityInputID AbilityInputID = EGASAbilityInputID::None;
};
