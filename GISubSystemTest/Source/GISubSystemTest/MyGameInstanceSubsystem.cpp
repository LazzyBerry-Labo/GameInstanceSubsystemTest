// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"

void UMyGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    UE_LOG(LogTemp, Log, TEXT("UMyGameInstanceSubsystem::Initialize()"));
}

void UMyGameInstanceSubsystem::Deinitialize()
{
    UE_LOG(LogTemp, Log, TEXT("UMyGameInstanceSubsystem::Deinitialize()"));
}
