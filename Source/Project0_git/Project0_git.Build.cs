// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project0_git : ModuleRules
{
	public Project0_git(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
