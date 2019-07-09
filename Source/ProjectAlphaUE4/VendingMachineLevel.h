// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "VendingMachineLevel.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTALPHAUE4_API AVendingMachineLevel : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Stats")
	int VendingsToDestory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Stats")
	bool bFoundHiddenRoom = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Stats")
	float TimeToBeat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Stats")
	int MaxEnemiesInWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level Stats")
	int CurrentAmountOfEnemies;




	
};
