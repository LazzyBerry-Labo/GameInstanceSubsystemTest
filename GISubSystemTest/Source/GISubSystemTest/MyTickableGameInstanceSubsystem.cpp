// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTickableGameInstanceSubsystem.h"

void UMyTickableGameInstanceSubsystem::Tick(float DeltaTime)
{
    UE_LOG(LogTemp, Log, TEXT("DeltaTime=%f"), DeltaTime);
}
