// Fill out your copyright notice in the Description page of Project Settings.


#include "ArithmeticOperations.h"

void AArithmeticOperations::BeginPlay()
{
	Super::BeginPlay();

	int32 A = 1;
	int32 B = 2;
	// 대입 연산자는 변수에 값을 할당하는 데 사용됩니다.
	// 오른쪽에 있는 값을 왼쪽 변수에 저장합니다.

	UE_LOG(LogTemp, Warning, TEXT("AValue : %d"), A);
	UE_LOG(LogTemp, Warning, TEXT("BValue : %d"), B);

	A = B; // A는 이제 2입니다.

	UE_LOG(LogTemp, Warning, TEXT("AValue : %d"), A);

	A = B = 3; // B는 3이 되고, A도 3이 됩니다.
	UE_LOG(LogTemp, Warning, TEXT("AValue : %d BValue : %d"), A, B);

	// 사칙연산
	//A + 3; // 잘못된 덧셈 ( 좌항에 대입이 없음 )
	//UE_LOG(LogTemp, Warning, TEXT("AValue : %d"), A);

	A = A + 3; // A는 이제 6입니다. (덫셈)
	UE_LOG(LogTemp, Warning, TEXT("AValue : %d"), A);
	B = A - 3; // B는 이제 3입니다. (뺄셈)
	UE_LOG(LogTemp, Warning, TEXT("B = A - 3 BValue : %d AValue : %d"), B, A);


	B = B * 3; // B는 이제 9입니다. (곱셈)
	UE_LOG(LogTemp, Warning, TEXT("B = B * 3 BValue : %d"), B);

	B = B / 3; // B는 이제 3입니다. (나눗셈)
	UE_LOG(LogTemp, Warning, TEXT("B = B / 3 BValue : %d"), B);

	float C = (float)B / 2.0f; // B는 1.5입니다. (나눗셈 후 float 형변환)
	UE_LOG(LogTemp, Warning, TEXT("B = B / 2 CValue : %f"), C);

	A = A % 4; // A는 이제 2입니다. (나머지)
	UE_LOG(LogTemp, Warning, TEXT("A = A %% 4 AValue : %d"), A);

	// 복합 대입 연산자
	int32 D = 10;
	D +=5; // D는 이제 15입니다.
	UE_LOG(LogTemp, Warning, TEXT(" DValue : %d"), D);

	D -= 3; // D는 이제 12입니다.
	UE_LOG(LogTemp, Warning, TEXT(" DValue : %d"), D);

	D *= 2; // D는 이제 24입니다.
	UE_LOG(LogTemp, Warning, TEXT(" DValue : %d"), D);

	D /= 4; // D는 이제 6입니다.
	UE_LOG(LogTemp, Warning, TEXT(" DValue : %d"), D);

	D %= 4; // D는 이제 2입니다.
	UE_LOG(LogTemp, Warning, TEXT(" DValue : %d"), D);


	// 증감 연산자
	// 후위와 전위가 있다.

	int32 E = 1;
	UE_LOG(LogTemp, Warning, TEXT(" EValue : %d"), E)

	int32 F = E++; // F는 1, E는 2가 됩니다. (후위 연산자)
	 F = E--; // F는 2, E는 1이 됩니다. (후위 연산자)
	 F = E--; // F는 1, E는 0이 됩니다. (후위 연산자)
	UE_LOG(LogTemp, Warning, TEXT(" EValue : %d"), E)
		UE_LOG(LogTemp, Warning, TEXT(" Falue : %d"), F)

		// 연산자 우선순위 () 적용

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
