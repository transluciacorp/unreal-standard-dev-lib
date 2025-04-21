// Copyright 2025 Translucia & Lumin8 all rights reserved.
// Developer: Thanut Panichyotai (https://github.com/luvikung)

// ReSharper disable UseCollectionExpression
// ReSharper disable RedundantExplicitArrayCreation
// ReSharper disable InconsistentNaming
// ReSharper disable InvertIf
// ReSharper disable SuggestVarOrType_BuiltInTypes

using UnrealBuildTool;

public class StandardDevLib : ModuleRules
{
	public StandardDevLib(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"CoreUObject",
			"Engine",
			"UMG",
		});
	}
}