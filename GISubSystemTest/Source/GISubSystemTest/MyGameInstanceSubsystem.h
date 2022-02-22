// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyGameInstanceSubsystem.generated.h"

/**
* GameInstanceSubSystemのテスト
 * ログ出力をするファンクションあり
 */
UCLASS()
class GISUBSYSTEMTEST_API UMyGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	// 初期化
    virtual void Initialize(FSubsystemCollectionBase& Collection);

    // 初期化解除
    virtual void Deinitialize();

public:
    // 呼び出しテスト用
    UFUNCTION(BlueprintCallable)
    void CallTest(){ UE_LOG(LogTemp, Warning, TEXT("Test!")); }
};
