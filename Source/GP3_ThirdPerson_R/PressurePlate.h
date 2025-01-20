// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PressurePlate.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class GP3_THIRDPERSON_R_API APressurePlate : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxTrigger;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

public:
	// Sets default values for this actor's properties
	APressurePlate();

private:
	UFUNCTION()
	void TriggerEnter(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
