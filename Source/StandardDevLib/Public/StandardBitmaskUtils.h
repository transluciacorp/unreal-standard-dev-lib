// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StandardBitmaskUtils.generated.h"

/**
 * This is a standard utility class for bitmask operations in Unreal Engine.
 */
UCLASS()
class STANDARDDEVLIB_API UStandardBitmaskUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Checks if a specific flag is set in a bitmask represented by an integer.
	 * @param Flags The bitmask integer to check against.
	 * @param Flag The specific flag to check, represented as an integer.
	 * @return True if the flag is set, false otherwise.
	 */
	UFUNCTION(
		BlueprintPure,
		Category = "Standard Development Library|Bitmask",
		DisplayName = "Has Flag (Bitmask Integer & Byte)"
	)
	static bool HasFlag(const int32 Flags, const uint8 Flag);
};
