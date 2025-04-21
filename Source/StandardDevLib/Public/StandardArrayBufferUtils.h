// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StandardArrayBufferUtils.generated.h"

/**
 * Standard Array Utilities.
 */
UCLASS()
class STANDARDDEVLIB_API UStandardArrayBufferUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Converts an array buffer to a hex string.
	 * @param InBuffer The input array buffer.
	 * @return The hex string representation of the array buffer.
	 */
	static FString ArrayBufferToHexString(const TArray<uint8>& InBuffer);
	/**
	 * Converts an array buffer to a hex string.
	 * @param InBuffer The input array buffer.
	 * @param Separator The separator to use between hex values (default is empty).
	 * @return The hex string representation of the array buffer.
	 */
	static FString ArrayBufferToHexString(const TArray<uint8>& InBuffer, const FString& Separator);

	/**
	 * Converts a byte array to a specific type using little-endian format.
	 * @param InData The input byte array.
	 * @param StartIndex The starting index in the byte array.
	 * @param EndIndex The ending index in the byte array.
	 * @return The converted value of type T.
	 */
	template <typename T>
	static T GetBytesAsTypeLittleEndian(const TArray<uint8>& InData, const int32 StartIndex, const int32 EndIndex);

	/**
	 * Converts a byte array to a specific type using big-endian format.
	 * @param InData The input byte array.
	 * @param StartIndex The starting index in the byte array.
	 * @param EndIndex The ending index in the byte array.
	 * @return The converted value of type T.
	 */
	template <typename T>
	static T GetBytesAsTypeBigEndian(const TArray<uint8>& InData, const int32 StartIndex, const int32 EndIndex);

	/**
	 * Converts an array buffer to a hex string (Blueprint callable).
	 * @param InBuffer The input array buffer.
	 * @return The hex string representation of the array buffer.
	 */
	UFUNCTION(
		BlueprintPure,
		Category = "Standard Development Library|Array",
		DisplayName = "Array Buffer To Hex String",
		Meta = (
			CompactNodeTitle = "To Hex String",
			BlueprintAutocast
		)
	)
	static FString ArrayBufferToHexString_Blueprint(const TArray<uint8>& InBuffer, const FString& Separator);
};

template <typename T>
T UStandardArrayBufferUtils::GetBytesAsTypeLittleEndian(const TArray<uint8>& InData, const int32 StartIndex, const int32 EndIndex)
{
	if (StartIndex < 0 || EndIndex >= InData.Num() || StartIndex > EndIndex)
	{
		// Handle invalid indices
		return T();
	}
	const int32 Size = EndIndex - StartIndex + 1;
	if (Size != sizeof(T))
	{
		// Handle size mismatch
		return T();
	}
	return *reinterpret_cast<const T*>(InData.GetData() + StartIndex);
}

template <typename T>
T UStandardArrayBufferUtils::GetBytesAsTypeBigEndian(const TArray<uint8>& InData, const int32 StartIndex, const int32 EndIndex)
{
	if (StartIndex < 0 || EndIndex >= InData.Num() || StartIndex > EndIndex)
	{
		// Handle invalid indices
		return T();
	}
	const int32 Size = EndIndex - StartIndex + 1;
	if (Size != sizeof(T))
	{
		// Handle size mismatch
		return T();
	}
	T Value = 0;
	for (int32 i = 0; i < Size; ++i)
	{
		Value = (Value << 8) | InData[StartIndex + i];
	}
	return Value;
}
