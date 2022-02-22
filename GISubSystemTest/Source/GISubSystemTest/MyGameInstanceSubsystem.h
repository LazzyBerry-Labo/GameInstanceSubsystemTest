// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyGameInstanceSubsystem.generated.h"

/**
* GameInstanceSubSystem�̃e�X�g
 * ���O�o�͂�����t�@���N�V��������
 */
UCLASS()
class GISUBSYSTEMTEST_API UMyGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	// ������
    virtual void Initialize(FSubsystemCollectionBase& Collection);

    // ����������
    virtual void Deinitialize();

public:
    // �Ăяo���e�X�g�p
    UFUNCTION(BlueprintCallable)
    void CallTest(){ UE_LOG(LogTemp, Warning, TEXT("Test!")); }
};
