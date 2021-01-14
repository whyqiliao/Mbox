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
	 * ����ģʽ��ģ����з��ʣ��ǳ�����
	 * ע�ⲻҪ��shutdown�������ڽ��з��ʣ����ʱ��ܿ���ģ���Ѿ�ж����
	 * @return ����ģ�鵥��
	 */

	static inline FMboxModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FMboxModule>("Mbox");
	}

	/**
	 * ���ģ���Ƿ��Ѿ�����
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("Mbox");
	}

	/** Handle to the test dll we will load */
	void*	LibraryHandle;
};
