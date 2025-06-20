// Copyright 2024-2025 Lumin8 & Translucia Limited - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StandardStringUtils.generated.h"

/**
 * Utility class for string operations.
 * This class provides static methods for generating random strings and other string-related utilities.
 */
class STANDARDDEVLIB_API FStandardStringUtils
{
public:
	static FString AlphabeticUppercaseCharacterSet;
	static FString AlphabeticLowercaseCharacterSet;
	static FString NumericCharacterSet;
	static FString HexadecimalUppercaseCharacterSet;
	static FString HexadecimalLowercaseCharacterSet;

	static FString AlphaNumericCharacterSet;
	static FString HexadecimalNumericCharacterSet;
	static FString HexadecimalNumericUppercaseCharacterSet;

	static FString GetRandomString(const int32 Length, const FString& CharacterSet);
};

/**
 * Blueprint function library for string operations.
 */
UCLASS()
class STANDARDDEVLIB_API UStringBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(
		BlueprintPure,
		Category = "Translucia|String Operations",
		DisplayName = "Get Random String By Character Set")
	static FString GetRandomString(const int32 Length, const FString& CharacterSet)
	{
		return FStandardStringUtils::GetRandomString(Length, CharacterSet);
	}
};
