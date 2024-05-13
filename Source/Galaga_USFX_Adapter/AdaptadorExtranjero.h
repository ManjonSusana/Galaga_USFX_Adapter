// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bounce_Ball.h"
#include "AdaptadorExtranjero.generated.h"

UCLASS()
class GALAGA_USFX_ADAPTER_API AAdaptadorExtranjero : public AActor, public IBounce_Ball
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAdaptadorExtranjero();

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
