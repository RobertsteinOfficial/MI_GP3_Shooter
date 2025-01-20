// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GP3_ThirdPerson_R : ModuleRules
{
	public GP3_ThirdPerson_R(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
