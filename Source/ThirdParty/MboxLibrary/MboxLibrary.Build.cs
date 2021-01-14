// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class MboxLibrary : ModuleRules
{
    public MboxLibrary(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            // Add the import library
            PublicLibraryPaths.Add(Path.Combine(ModuleDirectory, "x64", "Release"));
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "LC_SIM_CUE_DLL_64.lib"));

            // Delay-load the DLL, so we can load it from the right place first
            PublicDelayLoadDLLs.Add("LC_SIM_CUE_DLL_64.dll");
            PublicDelayLoadDLLs.Add("DRIVE_SIM_DLL_64.dll");

            // Ensure that the DLL is staged along with the executable
            RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/MboxLibrary/Win64/LC_SIM_CUE_DLL_64.dll");
            RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/MboxLibrary/Win64/DRIVE_SIM_DLL_64.dll");

            CopyFileToProjectBinariesPath(Path.Combine(ModuleDirectory, "x64", "Release", "LC_SIM_CUE_DLL_64.dll"), Target);
            CopyFileToProjectBinariesPath(Path.Combine(ModuleDirectory, "x64", "Release", "DRIVE_SIM_DLL_64.dll"), Target);
            CopyFileToProjectBinariesPath(Path.Combine(ModuleDirectory, "x64", "Release", "LC_SIM_CUE_DLL_64.lib"),Target);
        }
    }
    private string GetProjectDirectory
    {
        get
        {
            return Path.GetFullPath(
                    Path.Combine(ModuleDirectory, "../../../../../")
                );
        }
    }
    private void CopyFileToProjectBinariesPath(string Filepath, ReadOnlyTargetRules Target)
    {
        string BinariesDirectory = Path.Combine(GetProjectDirectory, "Binaries", Target.Platform.ToString());
        string FileName = Path.GetFileName(Filepath);
        if (!Directory.Exists(BinariesDirectory))
        {
            Directory.CreateDirectory(BinariesDirectory);
        }

        if (!File.Exists(Path.Combine(BinariesDirectory, FileName)))
        {
            File.Copy(Filepath, Path.Combine(BinariesDirectory, FileName), true);
        }

        RuntimeDependencies.Add(Path.Combine(BinariesDirectory, FileName));
    }
}
