// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.h"
#include "TerrainUnit.generated.h"


UCLASS()
class BATTLEPLANNER_API ATerrainUnit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATerrainUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinates")
		int32 co_x;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinates")
		int32 co_y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Size")
		float size_x;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Size")
		float size_y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Size")
		float tilesize_x;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Size")
		float tilesize_y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Size")
		int32 rows_x;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Size")
		int32 rows_y;	
};
