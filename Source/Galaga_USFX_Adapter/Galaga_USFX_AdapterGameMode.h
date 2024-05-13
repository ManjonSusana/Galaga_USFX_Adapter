// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_AdapterGameMode.generated.h"
UCLASS(MinimalAPI)
class AGalaga_USFX_AdapterGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_AdapterGameMode();
protected:
	virtual  void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, Category = "Galaga")

	class AGalaga_USFX_AdapterPawn* jugador;

	UPROPERTY(EditAnywhere, Category = "Galaga")
	
	class AAdaptadorExtranjero* adapter;
};



