// Fill out your copyright notice in the Description page of Project Settings.


#include "BoolAndFloatExample.h"

void ABoolAndFloatExample::BeginPlay()
{
	Super::BeginPlay();

	int32 MaxMP = 16624;
	int32 CurrentMP = 4800;

	UE_LOG(LogTemp, Warning, TEXT("MP : %d / %d"), CurrentMP, MaxMP);

	// bool (Boolean):
//     '��' �Ǵ� '����' �� ���� ���¸� �����ϴ� �ڷ����Դϴ�.
//     �ַ� ���ǹ�(if), �� ����, ���¸� ������ �� ����մϴ�.
//     'true' (��) �Ǵ� 'false' (����) ���� �����ϴ�.

	bool blsFalse = false;	
	bool blsTrue = true;	

	UE_LOG(LogTemp, Warning, TEXT("bIsFalse : %d"), blsFalse);
	UE_LOG(LogTemp, Warning, TEXT("bIsTrue : %d"), blsTrue);

	float AtackSpeed = 3.14159f;
	// float (Floating-point number):
//     �Ҽ����� �ִ� ���ڸ� �����ϴ� �ڷ����Դϴ�.
//     ������(int)�� �޸� ��Ȯ�� �Ҽ��� ����� �ʿ��� �� ���˴ϴ�.
//     �Ϲ������� �Ҽ��� 7�ڸ������� ���е��� �����ϴ�.
	//     ���� �ڿ� 'f'�� �ٿ� float���� ������ִ� ���� �����ϴ�.

	double AtackSpeed2 = 3.141592653589793;

}
