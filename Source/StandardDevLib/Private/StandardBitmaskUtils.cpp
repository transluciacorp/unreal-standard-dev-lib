// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

#include "StandardBitmaskUtils.h"

bool UStandardBitmaskUtils::HasFlag(const int32 Flags, const uint8 Flag)
{
	return ((1 << Flag) & Flags) != 0;
}
