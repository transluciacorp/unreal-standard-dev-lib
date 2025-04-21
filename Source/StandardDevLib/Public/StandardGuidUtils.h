// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StandardGuidUtils.generated.h"

/**
 * Standard Guid Utilities.
 */
UCLASS()
class STANDARDDEVLIB_API UStandardGuidUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * View the guid data.
	 * This is not print to string, but preview each of the guid context data.
	 * @param InGuid The guid to preview.
	 * @return The string showing the guid context data.
	 */
	static FString ViewGuidData(const FGuid& InGuid);
	/**
	 * Create a guid from the byte array.
	 * @param InBytes The byte array to create the guid from.
	 * @return The created guid.
	 */
	static FGuid CreateGuidFrom128Bytes(const TArray<uint8>& InBytes);
	/**
	 * Create a guid from the 32 bytes.
	 * @param InValue The 32 bytes to create the guid from.
	 * @return The created guid.
	 */
	static FGuid CreateGuidFrom32Bytes(const uint32 InValue);
	/**
	 * Create a guid from the 16 bytes.
	 * @param InValue The 16 bytes to create the guid from.
	 * @return The created guid.
	 */
	static FGuid CreateGuidFrom16Bytes(const uint16 InValue);
	/**
	 * Preview the guid data.
	 * This is not print to string, but preview each of the guid context data.
	 * @param InGuid The guid to preview.
	 * @return The string showing the guid context data.
	 */

	UFUNCTION(
		BlueprintPure,
		Category = "Standard Development Library|Guid",
		DisplayName = "View Guid Data"
	)
	static FString ViewGuidData_Blueprint(const FGuid& InGuid);
};
