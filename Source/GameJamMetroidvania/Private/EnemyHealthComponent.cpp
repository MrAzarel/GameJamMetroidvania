// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyHealthComponent.h"

// Sets default values for this component's properties
UEnemyHealthComponent::UEnemyHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}


// Called when the game starts
void UEnemyHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth;
}


// Called every frame
void UEnemyHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

