// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

#include "StandardGuidUtils.h"

FString UStandardGuidUtils::ViewGuidData(const FGuid& InGuid)
{
	return FString::Printf(TEXT("A: %08x, B: %08x, C: %08x, D: %08x"), InGuid.A, InGuid.B, InGuid.C, InGuid.D);
}

FGuid UStandardGuidUtils::CreateGuidFrom128Bytes(const TArray<uint8>& InBytes)
{
	checkf(InBytes.Num() == 16, TEXT("Input bytes must be 16 bytes long."));
	FGuid NewGuid;
	if (InBytes.Num() == 16)
	{
		NewGuid.A = (InBytes[15] << 24) | (InBytes[14] << 16) | (InBytes[13] << 8) | (InBytes[12] << 0);
		NewGuid.B = (InBytes[11] << 24) | (InBytes[10] << 16) | (InBytes[9] << 8) | (InBytes[8] << 0);
		NewGuid.C = (InBytes[7] << 24) | (InBytes[6] << 16) | (InBytes[5] << 8) | (InBytes[4] << 0);
		NewGuid.D = (InBytes[3] << 24) | (InBytes[2] << 16) | (InBytes[1] << 8) | (InBytes[0] << 0);
	}
	return NewGuid;
}

FGuid UStandardGuidUtils::CreateGuidFrom32Bytes(const uint32 InValue)
{
	FGuid NewGuid;
	NewGuid.A = InValue;
	return NewGuid;
}

FGuid UStandardGuidUtils::CreateGuidFrom16Bytes(const uint16 InValue)
{
	FGuid NewGuid;
	NewGuid.A = InValue;
	return NewGuid;
}

FString UStandardGuidUtils::ViewGuidData_Blueprint(const FGuid& InGuid)
{
	return ViewGuidData(InGuid);
}
