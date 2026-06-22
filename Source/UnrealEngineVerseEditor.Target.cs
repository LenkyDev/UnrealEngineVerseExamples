// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class UnrealEngineVerseEditorTarget : TargetRules
{
	public UnrealEngineVerseEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V9;

		ExtraModuleNames.AddRange( new string[] { "UnrealEngineVerse" } );
	}
}
