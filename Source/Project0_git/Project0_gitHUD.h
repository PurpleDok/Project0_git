// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Project0_gitHUD.generated.h"

UCLASS()
class AProject0_gitHUD : public AHUD
{
	GENERATED_BODY()

public:
	AProject0_gitHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

