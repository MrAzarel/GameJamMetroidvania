// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseEnemy.generated.h"

class EnemyHealthComponent;
class UTextRenderComponent;

UCLASS()
class GAMEJAMMETROIDVANIA_API ABaseEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseEnemy();

protected:

	UPROPERTY(VisibleAnywere, BlueprinntReadWrite, Category = "Components")
	EnemyHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywere, BlueprinntReadWrite, Category = "Components")
	UTextRenderComponent* HealthTextComponent;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
