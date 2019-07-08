// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AnimationHandler.h"
#include "Animation/AnimMontage.h"
#include "AttackNodes.h"
#include "BaseCombatCharacter.generated.h"


// Forward declaration
class IAnimatoinHandler;


UCLASS()
class PROJECTALPHAUE4_API ABaseCombatCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCombatCharacter();

	/** Holds the root node of the combo tree.
	*/
	AttackNodes* ComboAttackRoot;

	/** Holds the current attack that character is doing.
	*/
	AttackNodes* CurrentAttack;

	/** Holds the upper body montage.
	*/
	UPROPERTY(EditDefaultsOnly, Category = "BaseCombatCharacter")
	UAnimMontage* UpperBodyMontage;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Event fired from animation blueprint at animation begin stage
	*/
	UFUNCTION(BlueprintCallable, Category = "BaseCombatCharacter")
	void OnAnimationBegin();

	/** Event fired from animation blueprint at attack begin stage
	*/
	UFUNCTION(BlueprintCallable, Category = "BaseCombatCharacter")
	void OnAttackBegin();

	/** Event fired from animation blueprint at attack end stage
	*/
	UFUNCTION(BlueprintCallable, Category = "BaseCombatCharacter")
	void OnAttackEnd();

	/** Event fired from animation blueprint at animation end stage
	*/
	UFUNCTION(BlueprintCallable, Category = "BaseCombatCharacter")
	void OnAnimationEnd();

	/** Holds the animation handler for this character.
	*/
	IAnimationHandler* CombatAnimationHandler;
};
