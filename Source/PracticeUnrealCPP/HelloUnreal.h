// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HelloUnreal.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICEUNREALCPP_API AHelloUnreal : public AGameModeBase
{
	GENERATED_BODY()

// 게임 월드에 배치된 오브젝트가 시작될 때, 단 한 번 자동으로 호출되는 중요한 함수입니다.

// protected:
//     이 함수는 이 클래스 내부와 이 클래스를 상속받은 자식 클래스에서만 접근할 수 있습니다.
//     외부에서 함부로 이 함수를 호출하는 것을 막아 안전하게 사용하기 위한 설정입니다.

// virtual:
//     이 함수가 부모 클래스의 함수를 '재정의(Override)'할 수 있다는 것을 의미합니다.
//     언리얼 엔진의 기본 클래스(AActor 등)에 있는 BeginPlay()를,
//     우리가 만든 클래스에서 원하는 대로 동작을 바꿔서 사용할 수 있게 해줍니다.

// void BeginPlay():
//     함수의 이름입니다. 반환하는 값이 없다는 뜻의 'void'가 앞에 붙어 있습니다.

// override:
//     이 함수가 부모 클래스의 가상(virtual) 함수를 정확히 재정의하고 있음을
//     컴파일러에게 알려주는 키워드입니다.
//     오타 등으로 인한 실수를 미리 잡아내어 코드의 안정성을 높여줍니다.

protected:
	virtual void BeginPlay() override;
	
	// Visual Studio에서 'Alt + Enter'는 '빠른 작업 및 리팩터링' 기능을 실행하는 단축키입니다.
	// 이 기능은 코드의 맥락을 분석해서 개발자가 필요로 할 만한 작업을 제안하고,
	// 선택한 작업을 자동으로 실행해줍니다.
};
