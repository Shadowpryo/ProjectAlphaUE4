// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interface.h"

// Forward declaration
class ABaseCombatCharacter;

/**
 * 
 */
class PROJECTALPHAUE4_API ICombatAnimationHandler
{
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/** Default constructor
	*/
	ICombatAnimationHandler();

	/** Default destructor
	*/
	virtual ~ICombatAnimationHandler();

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

protected:

	/** Holds the character.
	*/
	ABaseCombatCharacter* Character;
};
