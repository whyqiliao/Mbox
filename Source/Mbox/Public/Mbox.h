// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FMboxModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	/**
	 * 单例模式对模块进行访问，非常方便
	 * 注意不要在shutdown生命周期进行访问，这个时候很可能模块已经卸载了
	 * @return 返回模块单例
	 */

	static inline FMboxModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FMboxModule>("Mbox");
	}

	/**
	 * 检查模块是否已经加载
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("Mbox");
	}

	/** Handle to the test dll we will load */
	void*	LibraryHandle;
};
