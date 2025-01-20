// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class GP3_THIRDPERSON_R_API AGun : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "VFX")
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere, Category = "VFX")
	UParticleSystem* ImpactEffect;

	UPROPERTY(EditAnywhere, Category = "Stats")
	float MaxRange = 1000;

	UPROPERTY(EditAnywhere, Category = "Stats")
	float Damage = 10;

public:	
	// Sets default values for this actor's properties
	AGun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PullTrigger();
};
