
// Fill out your copyright notice in the Description page of Project Settings.


#include "GISubsystemTestActor.h"
#include "MyGameInstanceSubsystem.h"

// Sets default values
AGISubsystemTestActor::AGISubsystemTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGISubsystemTestActor::BeginPlay()
{
	Super::BeginPlay();
	
	CallMyGISubSystem();
}

// Called every frame
void AGISubsystemTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGISubsystemTestActor::CallMyGISubSystem()
{
	//�Q�[���C���X�^���X�T�u�V�X�e����GameInstance�o�R�ŌĂяo����
	UGameInstance* GameInst = GetWorld()->GetGameInstance();
	auto MySub = GameInst->GetSubsystem<UMyGameInstanceSubsystem>();
	MySub->CallTest();
}

