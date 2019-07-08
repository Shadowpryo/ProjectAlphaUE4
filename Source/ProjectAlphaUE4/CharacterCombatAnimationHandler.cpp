// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterCombatAnimationHandler.h"

CharacterCombatAnimationHandler::CharacterCombatAnimationHandler()
{
}

CharacterCombatAnimationHandler::~CharacterCombatAnimationHandler()
{
}

void CharacterCombatAnimationHandler::OnAnimationBegin() {
	UE_LOG(LogTemp, Log, TEXT("CharacterCombatAnimationHandler::OnAnimationBegin"));
}
void CharacterCombatAnimationHandler::OnAttackBegin() {
	UE_LOG(LogTemp, Log, TEXT("CharacterCombatAnimationHandler::OnAttackBegin"));
}
void CharacterCombatAnimationHandler::OnAttackEnd() {
	UE_LOG(LogTemp, Log, TEXT("CharacterCombatAnimationHandler::OnAttackEnd"));
}
void CharacterCombatAnimationHandler::OnAnimationEnd() {
	UE_LOG(LogTemp, Log, TEXT("CharacterCombatAnimationHandler::OnAnimationEnd"));
}

void CharacterCombatAnimationHandler::Attack() {

}