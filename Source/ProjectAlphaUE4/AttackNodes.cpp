// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackNodes.h"

AttackNodes::AttackNodes(FString AttackTag) : AttackTag(AttackTag), Type(EAttackType::ROOT)
{
}

AttackNodes::~AttackNodes()
{
	for (auto& attack : Branches) {
		delete attack.Value;
	}
}

void AttackNodes::AddChildAttack(EAttackType AttackType, AttackNodes* Attack, bool Forced)
{
	bool contains = Branches.Contains(AttackType);

	// If contains and force insert
	if (contains && Forced)
	{
		RemoveChildAttack(AttackType);
	}

	// Add the new attack
	if (!contains || (contains && Forced))
	{
		Attack->Type = AttackType;
		Branches.Add(AttackType, Attack);
	}
}

void AttackNodes::RemoveChildAttack(EAttackType AttackType)
{
	bool contains = Branches.Contains(AttackType);
	if (contains)
	{
		// Free resource
		AttackNodes* attack = Branches[AttackType];
		delete attack; // This should recursively delete all the child nodes.

		// Remove from map
		Branches.Remove(AttackType);
	}
}

AttackNodes* AttackNodes::GetChildAttack(EAttackType AttackType)
{
	bool contains = Branches.Contains(AttackType);
	if (contains)
	{
		return Branches[AttackType];
	}

	return nullptr;
}