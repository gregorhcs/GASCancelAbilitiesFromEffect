// Copyright 2023 Gregor Sönnichsen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "GameplayTagContainer.h"

#include "CancelAbilityTagsEffectComponent.generated.h"

class UGameplayAbility;

/**
 * When the owning Effect is applied, cancel all Abilities with @WithTags
 * and without @WithoutTags. Will not cancel the @Ignore instance.
 */
UCLASS()
class GASCANCELABILITIESFROMEFFECT_API UCancelAbilityTagsEffectComponent : public UGameplayEffectComponent
{
	GENERATED_BODY()

protected:
	
	/** Abilities with these tags will be cancelled. */
	UPROPERTY(EditDefaultsOnly, Category = Tags, meta = (DisplayName = "Cancel Abilities w/ Tags"));
	FGameplayTagContainer WithTags;
	
	/** Abilities without these tags will be cancelled. */
	UPROPERTY(EditDefaultsOnly, Category = Tags, meta = (DisplayName = "Cancel Abilities w/o Tags"));
	FGameplayTagContainer WithoutTags;

	// - UGameplayEffectComponent
	virtual void OnGameplayEffectApplied(FActiveGameplayEffectsContainer& ActiveGEContainer,
		FGameplayEffectSpec& GESpec, FPredictionKey& PredictionKey) const override;
	// --
};
