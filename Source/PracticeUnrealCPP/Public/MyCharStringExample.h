// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharStringExample.h"
#include "MyCharStringExample.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICEUNREALCPP_API AMyCharStringExample : public ACharStringExample
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;	
	
};
