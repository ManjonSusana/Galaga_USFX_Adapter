// Fill out your copyright notice in the Description page of Project Settings.


#include "BallAdapter.h"
#include "Ball.h"

// Sets default values
ABallAdapter::ABallAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABallAdapter::BeginPlay()
{
	Super::BeginPlay();
	Ball = GetWorld()->SpawnActor<ABall>(ABall::StaticClass(), FVector(-770, 10, 100), FRotator::ZeroRotator);

	
}

// Called every frame
void ABallAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABallAdapter::lanzar()
{
	if (!Ball) {
		GEngine ->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("No se ha creado la bola")));
	}

	Ball->Launch();
}

