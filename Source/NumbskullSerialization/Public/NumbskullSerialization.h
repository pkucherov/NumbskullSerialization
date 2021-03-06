// Copyright 2019-2020 James Kelly, Michael Burdge

#pragma once

#include "Modules/ModuleManager.h"

class NUMBSKULLSERIALIZATION_API FNumbskullSerializationModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
