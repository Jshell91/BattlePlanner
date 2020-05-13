 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

UENUM(BlueprintType)
enum class ETileType : uint8 
{
	regular, rough, extreme, impassable, fortified, adverse
};

UCLASS()
class BATTLEPLANNER_API ATile : public AActor
{
	GENERATED_BODY()

		
	
public:	
	// Sets default values for this actor's properties
	ATile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enum")
	ETileType type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		int32 lightmovecost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		int32 heavymovecost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		bool fortified;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		bool adverse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinates")
	int32 co_x;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinates")
	FString co_y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinates")
	int32 co_ynt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Size")
		float size_x;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Size")
		float size_y;
};
