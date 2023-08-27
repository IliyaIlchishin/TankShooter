// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankPawn.generated.h"

class UStaticMeshComponen;


UCLASS()
class TANKGEDON_API ATankPawn : public APawn
{
	GENERATED_BODY()

public:
	
	ATankPawn();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Components")
		UStaticMeshComponent* BodyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Components")
		UStaticMeshComponent* TurretMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = " Components")
		class UBoxComponent* BoxCollision; 



public:	
	
	virtual void Tick(float DeltaTime) override;



};
