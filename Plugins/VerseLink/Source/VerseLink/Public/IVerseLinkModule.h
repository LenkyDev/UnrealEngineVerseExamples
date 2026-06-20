#pragma once

#include "Modules/ModuleInterface.h"

#define UE_API VERSELINK_API

class IVerseLinkModule : public IModuleInterface
{
public:
	static UE_API IVerseLinkModule& Get();
	
	virtual void ExposedFunction(verse::string const& VerseString) = 0;
};

#undef UE_API