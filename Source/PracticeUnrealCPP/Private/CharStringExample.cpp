// Fill out your copyright notice in the Description page of Project Settings.


#include "CharStringExample.h"

void ACharStringExample::BeginPlay()
{
	Super::BeginPlay();

	TCHAR CharValue = 'A';

	UE_LOG(LogTemp, Warning, TEXT("Char Value: %c"), CharValue);

	FString StringValue = "Hello Unreal";

	// �߿�  Fsring�� ����� ���� ���� �տ� *�� ����ؾ� �մϴ�.
	UE_LOG(LogTemp, Warning, TEXT("String Value: %s"), *StringValue);


}
