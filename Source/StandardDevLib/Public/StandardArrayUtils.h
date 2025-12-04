// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StandardArrayUtils.generated.h"

/**
 * 
 */
UCLASS()
class STANDARDDEVLIB_API UStandardArrayUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Returns the union of two arrays.
	 * @tparam T Type of the array elements
	 * @param ArrayA The first array
	 * @param ArrayB The second array
	 * @return The union of the two arrays
	 */
	template <typename T>
	static TArray<T> UnionArrays(const TArray<T>& ArrayA, const TArray<T>& ArrayB)
	{
		TArray<T> Result = ArrayA;
		for (const T& Item : ArrayB)
		{
			if (!Result.Contains(Item))
			{
				Result.Add(Item);
			}
		}
		return Result;
	}

	/**
	 * Returns the intersection of two arrays.
	 * @tparam T Type of the array elements
	 * @param ArrayA The first array
	 * @param ArrayB The second array
	 * @return The intersection of the two arrays
	 */
	template <typename T>
	static TArray<T> IntersectArrays(const TArray<T>& ArrayA, const TArray<T>& ArrayB)
	{
		TArray<T> Result;
		for (const T& Item : ArrayA)
		{
			if (ArrayB.Contains(Item))
			{
				Result.Add(Item);
			}
		}
		return Result;
	}

	/**
	 * Returns the difference of two arrays (elements in ArrayA not in ArrayB).
	 * @tparam T Type of the array elements
	 * @param ArrayA The first array
	 * @param ArrayB The second array
	 * @return The difference of the two arrays
	 */
	template <typename T>
	static TArray<T> DifferenceArrays(const TArray<T>& ArrayA, const TArray<T>& ArrayB)
	{
		TArray<T> Result;
		for (const T& Item : ArrayA)
		{
			if (!ArrayB.Contains(Item))
			{
				Result.Add(Item);
			}
		}
		return Result;
	}
};
