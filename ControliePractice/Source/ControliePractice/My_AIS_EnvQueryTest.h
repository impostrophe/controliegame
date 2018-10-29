// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "My_AIS_EnvQueryTest.generated.h"

/**
 * 
 */
UCLASS()
class CONTROLIEPRACTICE_API UMy_AIS_EnvQueryTest : public UEnvQueryTest
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = Test)
		FAIDataProviderIntValue NeededStatIndex;


	
	
};
