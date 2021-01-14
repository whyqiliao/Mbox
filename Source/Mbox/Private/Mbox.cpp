// Copyright Epic Games, Inc. All Rights Reserved.

#include "Mbox.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FMboxModule"

void FMboxModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FString ProjectBinariesDir = FPaths::Combine(*FPaths::ProjectDir(), TEXT("Binaries/Win64/LC_SIM_CUE_DLL_64.dll"));
	LibraryHandle = !ProjectBinariesDir.IsEmpty() ? FPlatformProcess::GetDllHandle(*ProjectBinariesDir) : nullptr;

	if (LibraryHandle)
	{
		// Call the test function in the third party library that opens a message box
		//简易获取我们插件的信息并打印出来显示，这里为显示版本
		//TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(FString("GMSSL"));
		//const FPluginDescriptor& PluginDescriptor = Plugin->GetDescriptor();
		//UE_LOG(LogTemp, Log, TEXT("Mbox Started v%s"), *PluginDescriptor.VersionName);
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load LC_SIM_CUE_DLL_64.dll !"));
	}
}

void FMboxModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if(LibraryHandle)
	{
		// Free the dll handle
		FPlatformProcess::FreeDllHandle(LibraryHandle);
		LibraryHandle = nullptr;
	}
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMboxModule, Mbox)
