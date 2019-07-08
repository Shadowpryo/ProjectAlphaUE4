// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

// Forward declaration
class ABaseCombatCharacter;

/**
 *
 */
class PROJECTALPHAUE4_API IAnimationHandler
{
public:
	/** Default constructor
	*/
	IAnimationHandler();

	/** Default destructor
	*/
	virtual ~IAnimationHandler();

	/** Called when in animation begin stage and animation is interrupted
	*/
	virtual void OnAnimationInterrupted() = 0;


	/** Sets the character that this combat animation handler belongs to.
	*   @param BaseCombatCharacter Pointer to the character
	*/
	void SetCharacter(ABaseCombatCharacter* BaseCombatCharacter);

	/** Called when in animation begin stage
	*/
	virtual void OnAnimationBegin() = 0;

	/** Called when in attack begin stage
	*/
	virtual void OnAttackBegin() = 0;

	/** Called when in attack end stage
	*/
	virtual void OnAttackEnd() = 0;

	/** Called when in animation endbegin stage
	*/
	virtual void OnAnimationEnd() = 0;

	FORCEINLINE bool isAttacking() const { return bIsAttacking; }

protected:

	/** Holds the character.
	*/
	ABaseCombatCharacter* Character;

	bool bIsAttacking;

	bool bCanInterruptAttack;
};