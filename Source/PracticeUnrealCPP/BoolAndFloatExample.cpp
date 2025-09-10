// Fill out your copyright notice in the Description page of Project Settings.


#include "BoolAndFloatExample.h"

void ABoolAndFloatExample::BeginPlay()
{
	Super::BeginPlay();

	int32 MaxMP = 16624;
	int32 CurrentMP = 4800;

	UE_LOG(LogTemp, Warning, TEXT("MP : %d / %d"), CurrentMP, MaxMP);

	// bool (Boolean):
//     '참' 또는 '거짓' 두 가지 상태만 저장하는 자료형입니다.
//     주로 조건문(if), 논리 연산, 상태를 저장할 때 사용합니다.
//     'true' (참) 또는 'false' (거짓) 값을 가집니다.

	bool blsFalse = false;	
	bool blsTrue = true;	

	UE_LOG(LogTemp, Warning, TEXT("bIsFalse : %d"), blsFalse);
	UE_LOG(LogTemp, Warning, TEXT("bIsTrue : %d"), blsTrue);

	float AtackSpeed = 3.14159f;
	// float (Floating-point number):
//     소수점이 있는 숫자를 저장하는 자료형입니다.
//     정수형(int)과 달리 정확한 소수점 계산이 필요할 때 사용됩니다.
//     일반적으로 소수점 7자리까지의 정밀도를 가집니다.
	//     숫자 뒤에 'f'를 붙여 float임을 명시해주는 것이 좋습니다.

	double AtackSpeed2 = 3.141592653589793;

}
