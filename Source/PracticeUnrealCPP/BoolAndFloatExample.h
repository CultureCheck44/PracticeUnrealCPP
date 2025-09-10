// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BoolAndFloatExample.generated.h"


/**
 * 
 */
UCLASS()
class PRACTICEUNREALCPP_API ABoolAndFloatExample : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;	
	
};
