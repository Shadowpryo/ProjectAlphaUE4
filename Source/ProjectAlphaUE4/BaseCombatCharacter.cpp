// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCombatCharacter.h"
#include "CharacterCombatAnimationHandler.h"

// Sets default values
ABaseCombatCharacter::ABaseCombatCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCombatCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCombatCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseCombatCharacter::OnAnimationBegin()
{

}

void ABaseCombatCharacter::OnAttackBegin()
{
}

void ABaseCombatCharacter::OnAttackEnd()
{
}

void ABaseCombatCharacter::OnAnimationEnd()
{
	
}
