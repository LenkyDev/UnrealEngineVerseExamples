using UnrealBuildTool;

public class VerseLink : ModuleRules
{
    public VerseLink(ReadOnlyTargetRules Target) : base(Target)
    {
        SetupVerse("/Verse.org/VerseLink", VerseScope.PublicAPI);

        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        bRequiresImplementModule = true;

        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...
			}
            );


        PrivateIncludePaths.AddRange(
            new string[] {
				// ... add other private include paths required here ...
			}
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
				// ... add other public dependencies that you statically link with here ...
			}
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Solaris",
                "Verse",
                "VerseNative",
                "VersePredicts",
                "VerseSpatialMath"
				// ... add private dependencies that you statically link with here ...	
			}
            );
    }
}
