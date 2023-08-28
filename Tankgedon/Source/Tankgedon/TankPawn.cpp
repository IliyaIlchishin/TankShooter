// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/Actor.h" 
#include "Components/StaticMeshComponent.h" 
#include "Components/BoxComponent.h" 
#include "TankPawn.h"

// Sets default values
ATankPawn::ATankPawn()
{

	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RootComponent"));
	RootComponent = BoxCollision;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	BodyMesh->SetupAttachment(RootComponent);

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret"));
	TurretMesh->SetupAttachment(BodyMesh);

	

}



// Called every frame
void ATankPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

