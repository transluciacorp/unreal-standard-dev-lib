// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

// ReSharper disable CppUE4CodingStandardNamingViolationWarning

#include "StandardBlueprintUtils.h"

#include "Blueprint/UserWidget.h"

bool UStandardBlueprintUtils::IsRunningInPIE(const UWorld* World)
{
	return World && World->WorldType == EWorldType::PIE;
}

bool UStandardBlueprintUtils::IsRunningInPIEWidget(const UUserWidget* Widget)
{
	if (!Widget)
	{
		return false;
	}
	const UWorld* World = Widget->GetWorld();
	if (!World)
	{
		return false;
	}
	return IsRunningInPIE(World);
}
