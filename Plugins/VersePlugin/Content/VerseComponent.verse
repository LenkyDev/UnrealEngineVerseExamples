using { /Verse.org/Native }
using { /Verse.org/SceneGraph }
using { /Verse.org/Simulation }
using { /Verse.org/SpatialMath }
using { /Verse.org } # Or using { /Verse.org/VerseLink }

VerseComponent<public> := class<final_super>(component) {
    @editable VerseString:string = "Hi!";

    OnSimulate<override>()<suspends>:void = {
        VerseLink.ExposedFunction(VerseString);

        Print(ToDiagnostic(VerseLink.Logic(true)));
        Print(VerseLink.String("AAAAAAAA"));
        Print(VerseLink.Message(message { DefaultText := "Message" }));
        Print("{VerseLink.Int(64)}");
        Print("{VerseLink.Float(256.0)}");
        Print("{VerseLink.Vector3(vector3 { Forward := 16.0 })}");
    };
};