// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class UnrealEngineVerseTarget : TargetRules
{
	public UnrealEngineVerseTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V9;

		ExtraModuleNames.AddRange( new string[] { "UnrealEngineVerse" } );
	}
}
