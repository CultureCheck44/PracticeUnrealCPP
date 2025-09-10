// Fill out your copyright notice in the Description page of Project Settings.


#include "HelloUnreal.h"

void AHelloUnreal::BeginPlay()
{
	Super::BeginPlay();
		
	UE_LOG(LogTemp, Warning, TEXT("윤성"));

	// 이 코드는 'AHelloUnreal' 클래스에 속한 'BeginPlay()' 함수를 정의한 것입니다.
	// 이 함수는 게임이 시작될 때 단 한 번 자동으로 호출됩니다.

	// Super::BeginPlay();
	//     부모 클래스의 BeginPlay() 함수를 먼저 실행하여,
	//     엔진이 필요로 하는 기본적인 초기화 작업을 수행합니다.
	//     이는 언리얼 엔진에서 상속을 사용할 때 필수적입니다.

	// UE_LOG(LogTemp, Warning, TEXT("Hello Unreal!"));
	//     '아웃풋 로그' 창에 디버그 메시지를 출력하는 코드입니다.
	//     이 코드는 게임 시작 시 "Hello Unreal!"이라는 경고(Warning) 메시지를
	//     노란색으로 표시합니다. Error(오류)나 Display(일반 정보) 등 -> 빨간색
	//     개발자가 특정 시점에 코드가 잘 실행되었는지 확인하는 데 사용됩니다.

	//영문이름 출력

	//인코딩을 맞춰야 한글이 보인다
	

}
