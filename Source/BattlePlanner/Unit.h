// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemInterface.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Unit.generated.h"


UENUM(BlueprintType)
enum class EFactions : uint8
{
	heimdall, terra, centauri, ascaryan
};

UENUM(BlueprintType)
enum class EResource : uint8
{
	energy, credits, honor, entropy
};

UENUM(BlueprintType)
enum class ETier : uint8
{
	tier1, tier2, tier3, tier4, tier5, tier6, buildings
};

UENUM(BlueprintType)
enum class EClass : uint8
{
	light, heavy
};

UCLASS()
class BATTLEPLANNER_API AUnit : public APawn, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	UAbilitySystemComponent* GetAbilitySystemComponent() const override //We add this function, overriding it from IAbilitySystemInterface.
	{
		return AbilitySystem;
	};

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities, meta = (AllowPrivateAccess = "true"))
		UAbilitySystemComponent* AbilitySystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Info")
		FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Info")
		EFactions faction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Info")
		ETier tier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Info")
		EResource resource;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Info")
		int cost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		EClass Class;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int command;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int range;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int movement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int atklight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int atkheavy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int protection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		TArray<TSubclassOf<class UGameplayAbility>> Ability;
};
