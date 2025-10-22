// Copyright Epic Games, Inc. All Rights Reserved.

#include "HealthSystemBPLibrary.h"
#include "HealthSystem.h"

UHealthSystemBPLibrary::UHealthSystemBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UHealthSystemBPLibrary::ApplyDamage(float CurrentHealth, float Damage)
{
	if (Damage >= CurrentHealth)
	{
		return 0;
	}
	float Health = CurrentHealth - Damage;
	return Health;
}

float UHealthSystemBPLibrary::Heal(float CurrentHealth, float HealAmount, float MaxHealth)
{
	if (HealAmount + CurrentHealth >= MaxHealth)
	{
		return MaxHealth;
	}
	float Health = CurrentHealth + HealAmount;
	return Health;
}

bool UHealthSystemBPLibrary::IsDead(float CurrentHealth)
{
	return CurrentHealth <= 0;
}
