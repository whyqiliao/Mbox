// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mbox.h"
#include "Misc.h"
#include "lcsimcueobject.generated.h"
/**
 *
 */
UCLASS()
class MBOX_API Ulcsimcueobject : public UObject
{
	GENERATED_UCLASS_BODY()

		~Ulcsimcueobject();

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "lcsimcueobject|UE")
		static Ulcsimcueobject* getlcsimcueobjectObject();
	static Ulcsimcueobject* _lcsimcueobjectObecjt;
	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "lcsimcueobject|UE")
		static int ParseBinaryStrtoDecimal(FString binaryStr);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "lcsimcueobject|UE")
		static FString DecimalToHex(int num, int bytecount);

	//UFUNCTION(BlueprintCallable, Category = "lcsimcueobject|Axes")
	void Choose_PlatformType(int PlatformType);
	//UFUNCTION(BlueprintCallable, Category = "lcsimcueobject|Axes")
	void OpenMboxUdpPort();
	//UFUNCTION(BlueprintCallable, Category = "lcsimcueobject|Axes")
	void CueModule_Reset();
	//UFUNCTION(BlueprintCallable, Category = "lcsimcueobject|Axes")
	void GoZeroPlatform(int GoZeroTimeMs);
	//UFUNCTION(BlueprintCallable, Category = "lcsimcueobject|Axes")
	void UserCueParaTranfer(FUE_DOF6_SYS_PARA dof6_sys_para);
	//UFUNCTION(BlueprintCallable, Category = "lcsimcueobject|Axes")
	void MechModule_InitCalc();
	UFUNCTION(BlueprintCallable,Category= "lcsimcueobject|Axes")
		void WriteFXControl(FMboxFXStruct FXState);
	UFUNCTION(BlueprintCallable, Category = "lcsimcueobject|Axes")
		void Cue2Inverse_Solution(FUE_DOF6_GAME_PARA dof6_game_para);
	UFUNCTION(BlueprintCallable, Category = "lcsimcueobject|Axes")
		void GoMiddlePlatform(int gomiddletime_Ms);
	UFUNCTION(BlueprintCallable, Category = "lcsimcueobject|Axes")
		void Choose_PlatformTypeAndInit(int PlatformType, FUE_DOF6_SYS_PARA dof6_sys_para);
	UFUNCTION(BlueprintCallable, Category = "lcsimcueobject|Axes")
		void CloseMboxUdpPort();

private:

	typedef int(*_Choose_PlatformType)(int PlatformType);
	_Choose_PlatformType DLL_Choose_PlatformType = NULL;
	typedef int(*_DOF6_Public_CueModule_Reset)();
	_DOF6_Public_CueModule_Reset DLL_DOF6_Public_CueModule_Reset = NULL;
	typedef int(*_DOF6_Public_UserCueParaTranfer)(FUE_DOF6_SYS_PARA *dof6_sys_para);
	_DOF6_Public_UserCueParaTranfer DLL_DOF6_Public_UserCueParaTranfer = NULL;
	typedef int(*_DOF6_Public_MechModule_InitCalc)();
	_DOF6_Public_MechModule_InitCalc DLL_DOF6_Public_MechModule_InitCalc = NULL;
	typedef int(*_Public_OpenMboxUdpPort)();
	_Public_OpenMboxUdpPort DLL_Public_OpenMboxUdpPort = NULL;
	typedef int(*_DOF6_Public_Cue2Inverse_Solution)(FUE_DOF6_GAME_PARA *dof6_game_para);
	_DOF6_Public_Cue2Inverse_Solution DLL_DOF6_Public_Cue2Inverse_Solution = NULL;
	typedef int(*_Public_ResetPlatform)();
	_Public_ResetPlatform DLL_Public_ResetPlatform = NULL;
	typedef int(*_Public_GoZeroPlatform)(long int GoZeroTimeMs);
	_Public_GoZeroPlatform DLL_Public_GoZeroPlatform = NULL;
	typedef int(*_Public_GoMiddlePlatform)(long int GoMiddleTimeMs);
	_Public_GoMiddlePlatform DLL_Public_GoMiddlePlatform = NULL;
	typedef int(*_Public_GoAbsoluteZeroPlatform)(short Fn00D, FUE_DOF6_GAME_PARA *dof6_game_para, int GoAbsoluteZeroTimeMs);
	_Public_GoAbsoluteZeroPlatform DLL_Public_GoAbsoluteZeroPlatform = NULL;
	typedef int(*_Public_EmergencyStopPlatform)();
	_Public_EmergencyStopPlatform DLL_Public_EmergencyStopPlatform = NULL;
	typedef int(*_Public_CancelEmergencyStopPlatform)();
	_Public_CancelEmergencyStopPlatform DLL_Public_CancelEmergencyStopPlatform = NULL;
	typedef int(*_Public_CloseMboxUdpPort)();
	_Public_CloseMboxUdpPort DLL_Public_CloseMboxUdpPort = NULL;
private:
	FUE_DOF6_SYS_PARA _dof6_sys_para;
	FUE_DOF6_GAME_PARA _dof6_game_para;
	int _platformType;
	void WriteFXControl(int FXCode);
	void ReturnValue(int x);
};