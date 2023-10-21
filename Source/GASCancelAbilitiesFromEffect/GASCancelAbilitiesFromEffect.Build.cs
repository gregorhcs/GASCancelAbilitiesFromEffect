// Copyright 2023 Gregor Sönnichsen. All Rights Reserved.

using UnrealBuildTool;

public class GASCancelAbilitiesFromEffect : ModuleRules
{
	public GASCancelAbilitiesFromEffect(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
			new[]
			{
				"Core",
				"CoreUObject",
				"Engine",
			});
		
		PrivateDependencyModuleNames.AddRange(
			new[]
			{
				"GameplayAbilities", 
				"GameplayTags"
			});
	}
}
