// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TerrainUnit.h"
#include "BattleMap.generated.h"


UCLASS()
class BATTLEPLANNER_API ABattleMap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABattleMap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Size")
		int32 turows_x;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Size")
		int32 turows_y;
};
