// Fill out your copyright notice in the Description page of Project Settings.

#include "Tile.h"

// Sets default values
ATile::ATile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


void ATile::PlaceActors(TSubclassOf<AActor> ToSpawn, int32 MinSpawn, int32 MaxSpawn)
{
	UE_LOG(LogTemp, Warning, TEXT("PlaceActors called"))
	FVector Min(100, 0, 0);
	FVector Max(3797.0, 0, 0);
	FBox Bounds(Min, Max);
	int32 NumberToSpawn = FMath::RandRange(MinSpawn, MaxSpawn);

	for (size_t i = 0; i < NumberToSpawn; i++)
	{
		FVector SpawnPoint = FMath::RandPointInBox(Bounds);
		FVector SecondSpawnPoint = SpawnPoint + FVector(0, 0, 2000);

		AActor* Spawned = GetWorld()->SpawnActor<AActor>(ToSpawn);
		AActor* SecondSpawned = GetWorld()->SpawnActor<AActor>(ToSpawn);

		Spawned->SetActorRelativeLocation(SpawnPoint);
		Spawned->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
		SecondSpawned->SetActorRelativeLocation(SecondSpawnPoint);
		SecondSpawned->AttachToActor(this, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));

		UE_LOG(LogTemp, Warning, TEXT("SpawnPoint: %s"), *SpawnPoint.ToCompactString())
	}
}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

