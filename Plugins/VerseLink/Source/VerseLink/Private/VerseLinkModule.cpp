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

	virtual bool Logic(bool Value) override {
		return Value;
	}
	virtual verse::string String(const verse::string& Value) override {
		return Value;
	}
	virtual TNonNullPtr<verse::message> Message(TNonNullPtr<verse::message> Value) override {
		return Value;
	}
	virtual int64 Int(int64 Value) override {
		return Value;
	}
	virtual double Float(double Value) override {
		return Value;
	}
	virtual void Vector3(const FVVector3& InValue, FVVector3& OutValue) override {
		OutValue = InValue;
	}

};
IVerseLinkModule& IVerseLinkModule::Get()
{
	IVerseLinkModule* VerseModule;
	UE_AUTORTFM_OPEN{ VerseModule = &FModuleManager::LoadModuleChecked<FVerseLinkModule>(TEXT("VerseLink")); };
	return *VerseModule;
}

IMPLEMENT_MODULE(FVerseLinkModule, VerseLink)