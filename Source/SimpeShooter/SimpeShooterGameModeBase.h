// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SimpeShooterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SIMPESHOOTER_API ASimpeShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:
   virtual void PawnKilled(APawn* PawnKilled);
	
};
