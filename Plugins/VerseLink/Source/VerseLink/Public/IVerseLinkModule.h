#pragma once

#include "Modules/ModuleInterface.h"
#include "VerseString.h"
#include <SpatialMath/Vector3.h>
#include <Localization/VerseMessage.h>
#include <string>

#define UE_API VERSELINK_API

class IVerseLinkModule : public IModuleInterface
{
public:
	static UE_API IVerseLinkModule& Get();
	
	virtual void ExposedFunction(verse::string const& VerseString) = 0;
	
	virtual bool Logic(bool Value) = 0;
	virtual verse::string String(const verse::string& Value) = 0;
	virtual TNonNullPtr<verse::message> Message(TNonNullPtr<verse::message> Value) = 0;
	virtual int64 Int(int64 Value) = 0;
	virtual double Float(double Value) = 0;
	virtual void Vector3(const FVVector3& InValue, FVVector3& OutValue) = 0;
};

#undef UE_API