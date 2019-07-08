// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCombatCharacter.h"
#include "CharacterCombatAnimationHandler.h"

// Sets default values
ABaseCombatCharacter::ABaseCombatCharacter() : ComboAttackRoot(nullptr), CurrentAttack(ComboAttackRoot), CombatAnimationHandler(nullptr)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ComboAttackRoot = new AttackNodes("");
	CurrentAttack = ComboAttackRoot;
}

// Called when the game starts or when spawned
void ABaseCombatCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (CombatAnimationHandler) {
		CombatAnimationHandler->SetCharacter(this);
	}
	
}

// Called every frame
void ABaseCombatCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseCombatCharacter::OnAnimationBegin()
{
	if (CombatAnimationHandler)
	{
		CombatAnimationHandler->OnAnimationBegin();
	}
}

void ABaseCombatCharacter::OnAttackBegin()
{
	if (CombatAnimationHandler)
	{
		CombatAnimationHandler->OnAttackBegin();
	}
}

void ABaseCombatCharacter::OnAttackEnd()
{
	if (CombatAnimationHandler)
	{
		CombatAnimationHandler->OnAttackEnd();
	}
}

void ABaseCombatCharacter::OnAnimationEnd()
{
	CurrentAttack = ComboAttackRoot;

	if (CombatAnimationHandler)
	{
		CombatAnimationHandler->OnAnimationEnd();
	}
}
