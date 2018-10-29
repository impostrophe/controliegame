// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorStatItem.generated.h"

UCLASS()
class CONTROLIEPRACTICE_API AMyActorStatItem : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Stat)
		int32 PrimaryStatIndex;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Stat)
		TArray<float> StatRestore;

	// Sets default values for this actor's properties
	AMyActorStatItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
