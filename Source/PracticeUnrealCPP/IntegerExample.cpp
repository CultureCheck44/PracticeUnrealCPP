// Fill out your copyright notice in the Description page of Project Settings.


#include "IntegerExample.h"

void AIntegerExample::BeginPlay()
{
	Super::BeginPlay();

	// 변수
	// 변할 수 있는 수
	// [타입] [이름] = [초기값]

	// 정수형 변수
	// -3, -2, -1, 0, 1, 2, 3
	int8 A = 127; // 변수를 선언하면서 초기화
	A = -128; // 변수에 -128를 복사해서 덮어 씌운거
	int16 B = 32767;
	B = -32768;
	int32 C = 2147483647; // 21억 옛날 메이플 풀 돈
	C = -2147483648;
	int64 D = MAX_int64;
	D = MIN_int64;

	uint8 AA = MAX_uint8;
	uint16 AB = MAX_uint16;
	uint32 AC = MAX_uint32;
	uint64 AD = MAX_uint64;

	// 선언한 변수 언리얼에서 출력
	// 정수형 숫자를 출력할 때는 %d 를 사용해서 출력해야된다.
	// 그 뒤에 매개변수에는 %d 자리에 들어 갈 변수를 넣어주면 된다.
	// int64 출력은 "%lld"
	UE_LOG(LogTemp, Warning, TEXT("%d"), A);
	UE_LOG(LogTemp, Warning, TEXT("%d"), B);
	UE_LOG(LogTemp, Warning, TEXT("%d"), C);
	UE_LOG(LogTemp, Warning, TEXT("%lld"), D);

	// 언사인드 형식은 출력시 %u 를 사용
	UE_LOG(LogTemp, Warning, TEXT("%u"), AA);
	UE_LOG(LogTemp, Warning, TEXT("%u"), AB);
	UE_LOG(LogTemp, Warning, TEXT("%u"), AC);
	UE_LOG(LogTemp, Warning, TEXT("%llu"), AD);


	// int32 타입, 이름은 CurrentYear 로 선언을 하고, 값을 현재 년도로 초기화하세요.
	// CurrentYear를 출력하시기 바랍니다.

	int32 CurrentYear = 2025;
	UE_LOG(LogTemp, Warning, TEXT("%d"), CurrentYear);
	int32 CurrentMonth = 9;
	UE_LOG(LogTemp, Warning, TEXT("%d 년 %d 월"), CurrentYear, CurrentMonth);

	// int32 타입, 이름은 CurrentDay 로 선언하고, 값을 현재 일자를 넣으세요.
	// 현재 년 현재 월 현재 일 이렇게 출력하세요.
	// 출력 예 : 2025년 9월 9일

	int32 CurrentDay = 9;
	UE_LOG(LogTemp, Warning, TEXT("%d 년 %d 월 %d 일"), CurrentYear, CurrentMonth, CurrentDay);

	// 변수를 재정의 할 때는
	// [변수의 이름] = [재정의 값];
	CurrentYear = 2030;
	UE_LOG(LogTemp, Warning, TEXT("%d 년 %d 월 %d 일"), CurrentYear, CurrentMonth, CurrentDay);
}