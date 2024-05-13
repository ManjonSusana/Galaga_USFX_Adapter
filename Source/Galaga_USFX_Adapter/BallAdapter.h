// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bounce_Ball.h"
#include "BallAdapter.generated.h"

UCLASS()
class GALAGA_USFX_ADAPTER_API ABallAdapter : public AActor, public IBounce_Ball
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ABallAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(VisibleAnywhere, Category = "Ball Adapter")
	class ABall* Ball;

public:
	void lanzar() override;
};
