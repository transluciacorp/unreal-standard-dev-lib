// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

#include "StandardArrayBufferUtils.h"

FString UStandardArrayBufferUtils::ArrayBufferToHexString(const TArray<uint8>& InBuffer)
{
	FString Result;
	for (const uint8 Byte : InBuffer)
	{
		Result += FString::Printf(TEXT("%02X"), Byte);
	}
	return Result;
}

FString UStandardArrayBufferUtils::ArrayBufferToHexString(const TArray<uint8>& InBuffer, const FString& Separator)
{
	FString Result;
	for (int32 Index = 0; Index < InBuffer.Num(); Index++)
	{
		if (Index > 0)
		{
			Result += Separator;
		}
		Result += FString::Printf(TEXT("%02X"), InBuffer[Index]);
	}
	return Result;
}

FString UStandardArrayBufferUtils::ArrayBufferToHexString_Blueprint(const TArray<uint8>& InBuffer, const FString& Separator)
{
	if (Separator.IsEmpty())
	{
		return ArrayBufferToHexString(InBuffer);
	}
	return ArrayBufferToHexString(InBuffer, Separator);
}
