// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Tickable.h"
#include "MyTickableGameInstanceSubsystem.generated.h"

/**
 * GameInstanceSubSystem�̃e�X�g
 * Tick����
 * ���O�o�͂�����t�@���N�V��������
 */
UCLASS()
class GISUBSYSTEMTEST_API UMyTickableGameInstanceSubsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()
	
public:
    // FTickableGameObject����I�[�o�[���C�h
    virtual TStatId GetStatId() const
    { 
        RETURN_QUICK_DECLARE_CYCLE_STAT(UMyTickableGameInstanceSubsyste, STATGROUP_Tickables);
    };

    virtual bool IsTickable() const { return true; }
    virtual void Tick(float DeltaTime);
};
