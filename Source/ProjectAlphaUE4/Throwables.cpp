// Fill out your copyright notice in the Description page of Project Settings.


#include "Throwables.h"

// Sets default values
AThrowables::AThrowables()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AThrowables::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThrowables::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

