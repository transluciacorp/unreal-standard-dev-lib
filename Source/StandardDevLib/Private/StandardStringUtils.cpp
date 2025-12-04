// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

#include "StandardStringUtils.h"

FString FStandardStringUtils::AlphabeticUppercaseCharacterSet = TEXT("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
FString FStandardStringUtils::AlphabeticLowercaseCharacterSet = TEXT("abcdefghijklmnopqrstuvwxyz");
FString FStandardStringUtils::NumericCharacterSet = TEXT("0123456789");
FString FStandardStringUtils::HexadecimalUppercaseCharacterSet = TEXT("ABCDEF");
FString FStandardStringUtils::HexadecimalLowercaseCharacterSet = TEXT("abcdef");

FString FStandardStringUtils::AlphaNumericCharacterSet = AlphabeticUppercaseCharacterSet + AlphabeticLowercaseCharacterSet + NumericCharacterSet;
FString FStandardStringUtils::HexadecimalNumericCharacterSet = HexadecimalLowercaseCharacterSet + NumericCharacterSet;
FString FStandardStringUtils::HexadecimalNumericUppercaseCharacterSet = HexadecimalUppercaseCharacterSet + NumericCharacterSet;

FString FStandardStringUtils::GetRandomString(const int32 Length, const FString& CharacterSet)
{
	checkf(Length > 0, TEXT("Length must be greater than 0"));
	checkf(!CharacterSet.IsEmpty(), TEXT("CharacterSet must not be empty"));
	FString Result;
	Result.Reserve(Length);
	for (int32 CurrentLength = 0; CurrentLength < Length; ++CurrentLength)
	{
		const int32 Index = FMath::RandRange(0, CharacterSet.Len() - 1);
		Result.AppendChar(CharacterSet[Index]);
	}
	return Result;
}
