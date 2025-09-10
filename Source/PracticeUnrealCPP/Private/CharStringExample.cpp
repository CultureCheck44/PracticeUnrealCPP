// Fill out your copyright notice in the Description page of Project Settings.


#include "CharStringExample.h"

void ACharStringExample::BeginPlay()
{
	Super::BeginPlay();

	TCHAR CharValue = 'A';

	UE_LOG(LogTemp, Warning, TEXT("Char Value: %c"), CharValue);

	FString StringValue = "Hello Unreal";

	// 중요  Fsring을 출력할 때는 변수 앞에 *를 사용해야 합니다.
	UE_LOG(LogTemp, Warning, TEXT("String Value: %s"), *StringValue);


}
