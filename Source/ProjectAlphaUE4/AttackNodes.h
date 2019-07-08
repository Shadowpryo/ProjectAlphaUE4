// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Map.h"

enum EAttackType {
	ROOT,
	PRIMARY_ATTACK,
	SECONDARY_ATTACK,
	RANGE_ATTACK
};

/**
 * 
 */
class PROJECTALPHAUE4_API AttackNodes
{
public:
	explicit AttackNodes(FString AttackTag);
	~AttackNodes();

	/** Add the next attack for particular type.
	*   NOTE: Once added, this node will take ownership of Attack pointer and will
	*   be responsible for clearing resources allocated. Deleting child attacks
	*   explicitly will lead to corruption of combo tree. To delete attack, use
	*   RemoveChildAttack.
	*   @param AttackType Type of attack.
	*   @param Attack Pointer to the attack.
	*   @param Forced If true, if there is already an attack of type it will remove the attack and add the new passed attack.
	*/
	void AddChildAttack(EAttackType AttackType, AttackNodes* Attack, bool Forced = false);

	/** Removes the attack for particular type.
	*   NOTE: This method will remove attacks recurssively.
	*   @param AttackType Type of attack to remove.
	*/
	void RemoveChildAttack(EAttackType AttackType);

	/** Returns the child attack of type.
	*   @param AttackType Type of attack to fetch.
	*   @return Pointer to the attack. nullptr if attack is not valid.
	*/
	AttackNodes* GetChildAttack(EAttackType AttackType);

	/** Return the attack tag belongs to this attack.
	*/
	FORCEINLINE FString GetAttackTag() const { return AttackTag; }

private:
	/** Holds the tag for the attack. Empty string if its root.
	*/
	FString AttackTag;

	/** Type of current attack
	*/
	EAttackType Type;

	/** Map of all branches for next attacks.
	*/
	TMap<EAttackType, AttackNodes*> Branches;
};
