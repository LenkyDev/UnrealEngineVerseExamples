using { /Verse.org/Native }
using { /Verse.org/SceneGraph }
using { /Verse.org/Simulation }
using { /Verse.org } # Or using { /Verse.org/VerseLink }

VerseComponent<public> := class<final_super>(component) {
    @editable VerseString:string = "Hi!";

    OnSimulate<override>()<suspends>:void = {
        VerseLink.ExposedFunction(VerseString);
    };
};