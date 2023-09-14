// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Component/GASComponent.h"
#include "AttributeSet/GASAttributeSetBase.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/SpringArmComponent.h"
#include <GameplayEffectTypes.h>
#include "Camera/CameraComponent.h"
#include "TPRPGCharacter.generated.h"

UCLASS()
class THIRDPERSONRPGCHARACTERBASE_API ATPRPGCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPRPGCharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	USpringArmComponent* SpringArm;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	UCameraComponent* Camera;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UGASAttributeSetBase* Attributes;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; };

	virtual void InitializeAttributes();

	virtual void GiveAbilities();

	virtual void PossessedBy(AController* NewController) override;

	virtual void OnRep_PlayerState() override;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category ="GAS")
	TArray<TSubclassOf<class UGasGameplayAbilityBase>> DefaultAbilities;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category ="GAS")
	TSubclassOf<class UGameplayEffect> DefaultAttributeEffect;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
