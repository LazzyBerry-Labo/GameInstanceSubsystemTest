// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GISubsystemTestActor.generated.h"

//GameInstanceSubSystemを呼び出すテスト用Actor
UCLASS()
class GISUBSYSTEMTEST_API AGISubsystemTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGISubsystemTestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//ゲームインスタンスサブシステムの呼び出しテスト
	void CallMyGISubSystem();
};
