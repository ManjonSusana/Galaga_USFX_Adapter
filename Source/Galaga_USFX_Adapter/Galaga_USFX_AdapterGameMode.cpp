// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_AdapterGameMode.h"
#include "Galaga_USFX_AdapterPawn.h"
#include "Kismet/GameplayStatics.h"
#include "AdaptadorExtranjero.h"

AGalaga_USFX_AdapterGameMode::AGalaga_USFX_AdapterGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_AdapterPawn::StaticClass();

	PrimaryActorTick.bCanEverTick = true;
}

void AGalaga_USFX_AdapterGameMode::BeginPlay()
{
	Super::BeginPlay();

	jugador = Cast<AGalaga_USFX_AdapterPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	adapter = GetWorld()-> SpawnActor<AAdaptadorExtranjero>(AAdaptadorExtranjero::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));
	jugador ->SetBounceBall(adapter);
	jugador->lanzar();
}

void AGalaga_USFX_AdapterGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

