// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

#pragma once

// ReSharper disable CppUEBlueprintCallableFunctionUnused
// ReSharper disable CppUE4CodingStandardNamingViolationWarning

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StandardBlueprintUtils.generated.h"

/**
 * This is standard blueprint utility class that contains various utility functions for use in blueprints.
 */
UCLASS()
class STANDARDDEVLIB_API UStandardBlueprintUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Determines if the game is running in Play In Editor (PIE) mode.
	 * @param World 
	 * @return 
	 */
	UFUNCTION(
		BlueprintPure,
		Category = "Standard Development Library|Engine",
		DisplayName = "Is Playing in Editor"
	)
	static bool IsRunningInPIE(const UWorld* World);

	/**
	 * Determines if the game is running in Play In Editor (PIE) mode using a widget.
	 * @param Widget 
	 * @return 
	 */
	UFUNCTION(
		BlueprintPure,
		Category = "Standard Development Library|Engine",
		DisplayName = "Is Playing in Editor (Widget)"
	)
	static bool IsRunningInPIEWidget(const UUserWidget* Widget);
};
