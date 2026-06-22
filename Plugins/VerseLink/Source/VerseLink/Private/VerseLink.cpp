#include "VerseString.h"
#include "IVerseLinkModule.h"
#include "Modules/ModuleManager.h"
#include "VerseContentScope.h"
#include "VersePredicts.h"

#include "VerseLink.gen.ipp"

namespace verse
{
	namespace VerseLink
	{
		inline IVerseLinkModule* GetModule()
		{
			return FModuleManager::GetModulePtr<IVerseLinkModule>("VerseLink");
		}

		void ExposedFunction(verse::string const& VerseString)
		{
			if (verse::FContentScopeGuard::IsActive()
				&& VersePredicts().IsNonVkEditClientScope(verse::FContentScopeGuard::GetActiveScope()))
			{
				return;
			}

			if (auto* VerseModule = GetModule())
			{
				return VerseModule->ExposedFunction(VerseString);
			}
		}

		bool Logic(bool Value)
		{
			if (auto* VerseModule = GetModule())
			{
				return VerseModule->Logic(Value);
			}

			return false;
		}
		verse::string String(const verse::string& Value)
		{
			if (auto* VerseModule = GetModule())
			{
				return VerseModule->String(Value);
			}

			return "";
		}
		TNonNullPtr<verse::message> Message(TNonNullPtr<verse::message> Value)
		{
			if (auto* VerseModule = GetModule())
			{
				return VerseModule->Message(Value);
			}

			return Value;
		}
		int64 Int(int64 Value)
		{
			if (auto* VerseModule = GetModule())
			{
				return VerseModule->Int(Value);
			}

			return 0;
		}
		double Float(double Value)
		{
			if (auto* VerseModule = GetModule())
			{
				return VerseModule->Float(Value);
			}

			return 0.0;
		}
		void Vector3(const FVVector3& InValue, FVVector3& OutValue)
		{
			if (auto* VerseModule = GetModule())
			{
				VerseModule->Vector3(InValue, OutValue);
			}
			else {
				OutValue = FVVector3();
			}
		}
	}
}