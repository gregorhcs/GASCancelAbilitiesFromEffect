// Copyright 2023 Gregor Sönnichsen. All Rights Reserved.

#include "CancelAbilityTagsEffectComponent.h"

#include "AbilitySystemComponent.h"
#include "GameplayEffect.h"

void UCancelAbilityTagsEffectComponent::OnGameplayEffectApplied(
	FActiveGameplayEffectsContainer& ActiveGEContainer,
	FGameplayEffectSpec& GESpec,
	FPredictionKey& PredictionKey) const
{
	Super::OnGameplayEffectApplied(ActiveGEContainer, GESpec, PredictionKey);
	
	ActiveGEContainer.Owner->CancelAbilities(&WithTags, &WithoutTags, nullptr);
}
