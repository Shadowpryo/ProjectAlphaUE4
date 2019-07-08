// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimationHandler.h"

/**
 * 
 */
class PROJECTALPHAUE4_API CharacterCombatAnimationHandler final : public IAnimationHandler
{
public:
	CharacterCombatAnimationHandler();
	~CharacterCombatAnimationHandler();
	/** Called when in animation begin stage
	*/
	void OnAnimationBegin() override;

	/** Called when in attack begin stage
	*/
	void OnAttackBegin() override;

	/** Called when in attack end stage
	*/
	void OnAttackEnd() override;

	/** Called when in animation endbegin stage
	*/
	void OnAnimationEnd() override;

	void Attack();

	/*True if the character can perform a second attack*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bAcceptsSecondAttackInput;

	/*Ture if the character can perform a third attack*/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bAcceptsThirdAttackInput;
};
