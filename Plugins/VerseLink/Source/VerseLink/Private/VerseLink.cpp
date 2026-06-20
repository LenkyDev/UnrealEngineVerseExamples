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
		void ExposedFunction(verse::string const& VerseString)
		{
			if (verse::FContentScopeGuard::IsActive()
				&& VersePredicts().IsNonVkEditClientScope(verse::FContentScopeGuard::GetActiveScope()))
			{
				return;
			}

			if (IVerseLinkModule* VerseModule = FModuleManager::GetModulePtr<IVerseLinkModule>("VerseLink"))
			{
				VerseModule->ExposedFunction(VerseString);
			}
		}
	}
}