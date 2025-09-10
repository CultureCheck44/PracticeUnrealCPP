// Fill out your copyright notice in the Description page of Project Settings.


// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharStringExample.h"

void AMyCharStringExample::BeginPlay()
{
	Super::BeginPlay();

	TCHAR CharValue = 'A';

	UE_LOG(LogTemp, Warning, TEXT("Char Value: %c"), CharValue);

	FString StringValue = "Hello Unreal";

	// 중요 FString을 출력할 때는 변수 앞에 *를 사용해야 합니다.
	UE_LOG(LogTemp, Warning, TEXT("String Value: %s"), *StringValue);

	FString Myname = TEXT("윤성");
	UE_LOG(LogTemp, Warning, TEXT("My name is %s"), *Myname);
	
	UE_LOG(LogTemp, Warning, TEXT("\\"));
	UE_LOG(LogTemp, Warning, TEXT("문단 \n 나누기"));

	// 첫 번째 고양이
	UE_LOG(LogTemp, Warning, TEXT("/\\_/\\"));
	UE_LOG(LogTemp, Warning, TEXT("|q p|    /}"));
	UE_LOG(LogTemp, Warning, TEXT("( 0 )\"\"\" \\\\")); 
	UE_LOG(LogTemp, Warning, TEXT("|\" ^ \"`  |"));
	UE_LOG(LogTemp, Warning, TEXT("||_/=\\\\__|"));

}