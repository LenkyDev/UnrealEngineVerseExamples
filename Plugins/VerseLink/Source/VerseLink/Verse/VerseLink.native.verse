using { /Verse.org/Native }
using { /Verse.org/SpatialMath }

@doc("Exposed C++ Native Function")
ExposedFunction<native><public>(VerseString: string)<transacts><predicts>:void

@doc("Returns `Logic` without modification.")
    Logic<native><public>(Value: logic):logic

@doc("Returns `String` without modification.")
String<native><public>(Value: string):string
    
@doc("Returns `Message` without modification.")
Message<native><public>(Value: message):message
    
@doc("Returns `Int` without modification.")
Int<native><public>(Value: int):int
    
@doc("Returns `Float` without modification.")
Float<native><public>(Value: float):float
    
@doc("Returns `Vector3` without modification.")
Vector3<native><public>(Value: vector3):vector3