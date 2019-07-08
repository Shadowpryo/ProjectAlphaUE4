// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimationHandler.h"

// Add default functionality here for any ICombatAnimationHandler functions that are not pure virtual.

IAnimationHandler::IAnimationHandler() : bCanInterruptAttack(false)
{
}

IAnimationHandler::~IAnimationHandler()
{
}

void IAnimationHandler::SetCharacter(ABaseCombatCharacter* BaseCombatCharacter)
{
	Character = BaseCombatCharacter;
}