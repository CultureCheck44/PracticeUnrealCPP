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

// ���� ���忡 ��ġ�� ������Ʈ�� ���۵� ��, �� �� �� �ڵ����� ȣ��Ǵ� �߿��� �Լ��Դϴ�.

// protected:
//     �� �Լ��� �� Ŭ���� ���ο� �� Ŭ������ ��ӹ��� �ڽ� Ŭ���������� ������ �� �ֽ��ϴ�.
//     �ܺο��� �Ժη� �� �Լ��� ȣ���ϴ� ���� ���� �����ϰ� ����ϱ� ���� �����Դϴ�.

// virtual:
//     �� �Լ��� �θ� Ŭ������ �Լ��� '������(Override)'�� �� �ִٴ� ���� �ǹ��մϴ�.
//     �𸮾� ������ �⺻ Ŭ����(AActor ��)�� �ִ� BeginPlay()��,
//     �츮�� ���� Ŭ�������� ���ϴ� ��� ������ �ٲ㼭 ����� �� �ְ� ���ݴϴ�.

// void BeginPlay():
//     �Լ��� �̸��Դϴ�. ��ȯ�ϴ� ���� ���ٴ� ���� 'void'�� �տ� �پ� �ֽ��ϴ�.

// override:
//     �� �Լ��� �θ� Ŭ������ ����(virtual) �Լ��� ��Ȯ�� �������ϰ� ������
//     �����Ϸ����� �˷��ִ� Ű�����Դϴ�.
//     ��Ÿ ������ ���� �Ǽ��� �̸� ��Ƴ��� �ڵ��� �������� �����ݴϴ�.

protected:
	virtual void BeginPlay() override;
	
	// Visual Studio���� 'Alt + Enter'�� '���� �۾� �� �����͸�' ����� �����ϴ� ����Ű�Դϴ�.
	// �� ����� �ڵ��� �ƶ��� �м��ؼ� �����ڰ� �ʿ�� �� ���� �۾��� �����ϰ�,
	// ������ �۾��� �ڵ����� �������ݴϴ�.
};
