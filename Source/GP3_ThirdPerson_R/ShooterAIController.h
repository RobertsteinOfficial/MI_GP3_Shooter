// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

/**
 * 
 */
UCLASS()
class GP3_THIRDPERSON_R_API AShooterAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	APawn* PlayerPawn;

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AiBehaviour;

public:
	virtual void Tick(float DeltaSeconds) override;

protected:
	virtual void BeginPlay() override;
};
