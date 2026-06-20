#include "IVerseLinkModule.h"
#include "Modules/ModuleManager.h"
#include "VerseLogging.h"

class FVerseLinkModule : public IVerseLinkModule
{
public:
	virtual void StartupModule() override {}
	virtual void ShutdownModule() override {}
	
	virtual void ExposedFunction(verse::string const& VerseString) override
	{
		VERSE_LOG(Log, TEXT("String received from Verse: %s"), UTF8_TO_TCHAR(*VerseString));
	}
};
IVerseLinkModule& IVerseLinkModule::Get()
{
	IVerseLinkModule* VerseModule;
	UE_AUTORTFM_OPEN{ VerseModule = &FModuleManager::LoadModuleChecked<FVerseLinkModule>(TEXT("VerseLink")); };
	return *VerseModule;
}

IMPLEMENT_MODULE(FVerseLinkModule, VerseLink)