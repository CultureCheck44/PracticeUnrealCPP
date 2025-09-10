// Fill out your copyright notice in the Description page of Project Settings.


#include "ArithmeticOperations.h"

void AArithmeticOperations::BeginPlay()
{
	Super::BeginPlay();

	int32 A = 1;
	int32 B = 2;
	// ���� �����ڴ� ������ ���� �Ҵ��ϴ� �� ���˴ϴ�.
	// �����ʿ� �ִ� ���� ���� ������ �����մϴ�.

	UE_LOG(LogTemp, Warning, TEXT("AValue : %d"), A);
	UE_LOG(LogTemp, Warning, TEXT("BValue : %d"), B);

	A = B; // A�� ���� 2�Դϴ�.

	UE_LOG(LogTemp, Warning, TEXT("AValue : %d"), A);

	A = B = 3; // B�� 3�� �ǰ�, A�� 3�� �˴ϴ�.
	UE_LOG(LogTemp, Warning, TEXT("AValue : %d BValue : %d"), A, B);

	// ��Ģ����
	//A + 3; // �߸��� ���� ( ���׿� ������ ���� )
	//UE_LOG(LogTemp, Warning, TEXT("AValue : %d"), A);

	A = A + 3; // A�� ���� 6�Դϴ�. (����)
	UE_LOG(LogTemp, Warning, TEXT("AValue : %d"), A);
	B = A - 3; // B�� ���� 3�Դϴ�. (����)
	UE_LOG(LogTemp, Warning, TEXT("B = A - 3 BValue : %d AValue : %d"), B, A);


	B = B * 3; // B�� ���� 9�Դϴ�. (����)
	UE_LOG(LogTemp, Warning, TEXT("B = B * 3 BValue : %d"), B);

	B = B / 3; // B�� ���� 3�Դϴ�. (������)
	UE_LOG(LogTemp, Warning, TEXT("B = B / 3 BValue : %d"), B);

	float C = (float)B / 2.0f; // B�� 1.5�Դϴ�. (������ �� float ����ȯ)
	UE_LOG(LogTemp, Warning, TEXT("B = B / 2 CValue : %f"), C);

	A = A % 4; // A�� ���� 2�Դϴ�. (������)
	UE_LOG(LogTemp, Warning, TEXT("A = A %% 4 AValue : %d"), A);

	// ���� ���� ������
	int32 D = 10;
	D +=5; // D�� ���� 15�Դϴ�.
	UE_LOG(LogTemp, Warning, TEXT(" DValue : %d"), D);

	D -= 3; // D�� ���� 12�Դϴ�.
	UE_LOG(LogTemp, Warning, TEXT(" DValue : %d"), D);

	D *= 2; // D�� ���� 24�Դϴ�.
	UE_LOG(LogTemp, Warning, TEXT(" DValue : %d"), D);

	D /= 4; // D�� ���� 6�Դϴ�.
	UE_LOG(LogTemp, Warning, TEXT(" DValue : %d"), D);

	D %= 4; // D�� ���� 2�Դϴ�.
	UE_LOG(LogTemp, Warning, TEXT(" DValue : %d"), D);


	// ���� ������
	// ������ ������ �ִ�.

	int32 E = 1;
	UE_LOG(LogTemp, Warning, TEXT(" EValue : %d"), E)

	int32 F = E++; // F�� 1, E�� 2�� �˴ϴ�. (���� ������)
	 F = E--; // F�� 2, E�� 1�� �˴ϴ�. (���� ������)
	 F = E--; // F�� 1, E�� 0�� �˴ϴ�. (���� ������)
	UE_LOG(LogTemp, Warning, TEXT(" EValue : %d"), E)
		UE_LOG(LogTemp, Warning, TEXT(" Falue : %d"), F)

		// ������ �켱���� () ����

	int32 NumberA = 100;
	int32 NumberB = 5;
	UE_LOG(LogTemp, Warning, TEXT("A : %d"), NumberA)
		UE_LOG(LogTemp, Warning, TEXT(" B : %d"), NumberB)

		int32 Result = NumberA + NumberB ; 
	UE_LOG(LogTemp, Warning, TEXT(" Result : %d"), Result)
		Result = NumberA - NumberB;
	UE_LOG(LogTemp, Warning, TEXT(" Result : %d"), Result)
		Result = NumberA * NumberB;
	UE_LOG(LogTemp, Warning, TEXT(" Result : %d"), Result)
		Result = NumberA / NumberB;
	UE_LOG(LogTemp, Warning, TEXT(" Result : %d"), Result)
		Result = NumberA % NumberB;
	UE_LOG(LogTemp, Warning, TEXT(" Result : %d"), Result)

}
