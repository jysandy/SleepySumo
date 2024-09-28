// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SleepySumoCharacter.generated.h"

UCLASS(Blueprintable)
class ASleepySumoCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ASleepySumoCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;
};

