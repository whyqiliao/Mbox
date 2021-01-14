// Fill out your copyright notice in the Description page of Project Settings.

#include "lcsimcueobject.h"

DEFINE_LOG_CATEGORY(LogSIMCUE);
Ulcsimcueobject::~Ulcsimcueobject()
{

}

Ulcsimcueobject* Ulcsimcueobject::getlcsimcueobjectObject()
{
	return _lcsimcueobjectObecjt;
}

Ulcsimcueobject* Ulcsimcueobject::_lcsimcueobjectObecjt;

int Ulcsimcueobject::ParseBinaryStrtoDecimal(FString binaryStr)
{
	int size = strlen(TCHAR_TO_ANSI(*binaryStr));
	int parseBinary = 0;
	for (int i = 0; i < size; ++i)
	{
		if (binaryStr[i] == '1')
		{
			parseBinary += pow(2.0, size - i - 1);
		}
	}
	return parseBinary;
}

FString Ulcsimcueobject::DecimalToHex(int num, int bytecount)
{
	FString result;

	/*long long temp = num / 16;
	int left = num % 16;*/
	switch (bytecount)
	{
	default:
		result = FString::Printf(TEXT("%04X"), num);
		/*if (temp > 0)
			result += DecimalToHex(temp, byteCount);
		if (left < 10)
			result += (left + '0');
		else
			result += ('A' + left - 10);*/
		break;
	case 1:
		result = FString::Printf(TEXT("%02X"), num);
		break;
	case 2:
		result = FString::Printf(TEXT("%04X"), num);
		break;
	case 3:
		result = FString::Printf(TEXT("%06X"), num);
		break;
	case 4:
		result = FString::Printf(TEXT("%08X"), num);
		break;
	}
	return result;
}
//平台类型选择	0x00：3+1轴平台；0x01：6轴平台；
void Ulcsimcueobject::Choose_PlatformType(int PlatformType)
{
	if (DLL_Choose_PlatformType == NULL)
	{
		UE_LOG(LogSIMCUE, Error, TEXT("Fail to export dll function Choose_PlatformType!"));
		return;
	}
	int retcode = DLL_Choose_PlatformType(PlatformType);
	switch (retcode)
	{
	case 0:
		UE_LOG(LogSIMCUE,Log,TEXT("Selected 3+1 axes"));
		break;
	case 1:
		UE_LOG(LogSIMCUE, Log, TEXT("Selected 6 axes"));
	}
}
//打开UDP端口
void Ulcsimcueobject::OpenMboxUdpPort()
{
	if (DLL_Public_OpenMboxUdpPort == NULL)
	{
		UE_LOG(LogSIMCUE, Error, TEXT("Fail to export dll function OpenMboxUdpPort!"));
		return;
	}
	int retcode = DLL_Public_OpenMboxUdpPort();
	ReturnValue(retcode);
}
//平台运动到中间位置
void Ulcsimcueobject::GoMiddlePlatform(int gomiddletime_Ms)
{
	if (DLL_Public_GoMiddlePlatform == NULL)
	{
		UE_LOG(LogSIMCUE, Error, TEXT("Fail to export dll function GoMiddlePlatform!"));
		return;
	}

	if (gomiddletime_Ms < 1000)
	{
		int retcode = DLL_Public_GoMiddlePlatform(3000);
		ReturnValue(retcode);
		return;
	}
	int retcode = DLL_Public_GoMiddlePlatform((long)gomiddletime_Ms);
	ReturnValue(retcode);
}
//关闭UDP端口
void Ulcsimcueobject::CloseMboxUdpPort()
{
	if (DLL_Public_CloseMboxUdpPort == NULL)
	{
		UE_LOG(LogSIMCUE, Error, TEXT("Fail to export dll function CloseMboxUdpPort!"));
		return;
	}
	int retcode = DLL_Public_CloseMboxUdpPort();
	ReturnValue(retcode);
}

//体感参数复位
void Ulcsimcueobject::CueModule_Reset()
{
	if (DLL_DOF6_Public_CueModule_Reset == NULL)
	{
		UE_LOG(LogSIMCUE, Error, TEXT("Fail to export dll function CueModule_Reset!"));
		return;
	}
	int retcode = DLL_DOF6_Public_CueModule_Reset();
	ReturnValue(retcode);
}
//平台运动到零位
void Ulcsimcueobject::GoZeroPlatform(int GoZeroTimeMs)
{
	if (DLL_Public_GoMiddlePlatform == NULL)
	{
		UE_LOG(LogSIMCUE, Error, TEXT("Fail to export dll function GoZeroPlatform!"));
		return;
	}
	if (GoZeroTimeMs < 1000)
	{
		int retcode = DLL_Public_GoMiddlePlatform(3000);
		ReturnValue(retcode);
		return;
	}
	int retcode = DLL_Public_GoMiddlePlatform((long)GoZeroTimeMs);
	ReturnValue(retcode);
}
//结构体参数传递
void Ulcsimcueobject::UserCueParaTranfer(FUE_DOF6_SYS_PARA dof6_sys_para)
{
	if (DLL_DOF6_Public_UserCueParaTranfer == NULL)
	{
		UE_LOG(LogSIMCUE, Error, TEXT("Fail to export dll function UserCueParaTranfer!"));
		return;
	}
	int retcode = DLL_DOF6_Public_UserCueParaTranfer(&dof6_sys_para);
	ReturnValue(retcode);
}
//平台机械结构计算
void Ulcsimcueobject::MechModule_InitCalc()
{
	if (DLL_DOF6_Public_MechModule_InitCalc == NULL)
	{
		UE_LOG(LogSIMCUE, Error, TEXT("Fail to export dll function MechModule_InitCalc!"));
		return;
	}
	int retcode = DLL_DOF6_Public_MechModule_InitCalc();
	ReturnValue(retcode);
}
//采用8位二进制控制6个特效开关，最右的两个二进制位保留为0，每个二进制位所对应的特效参考特效信号及接线说明文档，如00000000全关，转为整形是0，11111100全开，转为整形是252,00000100为开3号引脚，转为整形是4，文档中对应的是开烟雾发生器
void Ulcsimcueobject::WriteFXControl(int FXCode)
{
	_dof6_sys_para.UdpPortPara.I16BaseDoutCode=(short)FXCode;
	CueModule_Reset();
	UserCueParaTranfer(_dof6_sys_para);
	MechModule_InitCalc();
	Cue2Inverse_Solution(_dof6_game_para);
}

void Ulcsimcueobject::WriteFXControl(FMboxFXStruct FXState)
{
	FString Binarystr;
	Binarystr+=FString::FromInt(int(FXState.Fire));
	Binarystr+= FString::FromInt(int(FXState.FlowFire));
	Binarystr+= FString::FromInt(int(FXState.Lightning));
	Binarystr+= FString::FromInt(int(FXState.Rain));
	Binarystr+= FString::FromInt(int(FXState.Wind));
	Binarystr+= FString::FromInt(int(FXState.Smoke));
	Binarystr+= FString::FromInt(int(FXState.place2));
	Binarystr+= FString::FromInt(int(FXState.place1));
	WriteFXControl(ParseBinaryStrtoDecimal(Binarystr));
}

//计算运动数据并下发给六自由度平台
void Ulcsimcueobject::Cue2Inverse_Solution(FUE_DOF6_GAME_PARA dof6_game_para)
{
	
	switch (_platformType)
	{

	case 0:
		//需要除以重力加速度
		dof6_game_para.F32ReciveXAcceG = 0.f;
		dof6_game_para.F32ReciveYAcceG = dof6_game_para.F32ReciveYAcceG / 9.8f;
		dof6_game_para.F32ReciveZAcceG = 0.f;
		break;
	case 1:
		//需要除以重力加速度
		dof6_game_para.F32ReciveXAcceG = dof6_game_para.F32ReciveXAcceG / 9.8f;
		dof6_game_para.F32ReciveYAcceG = dof6_game_para.F32ReciveYAcceG / 9.8f;
		dof6_game_para.F32ReciveZAcceG = dof6_game_para.F32ReciveZAcceG / 9.8f;
		break;
	}
	_dof6_game_para=dof6_game_para;
	int retcode = DLL_DOF6_Public_Cue2Inverse_Solution(&_dof6_game_para);
	ReturnValue(retcode);
}

void Ulcsimcueobject::Choose_PlatformTypeAndInit(int PlatformType, FUE_DOF6_SYS_PARA dof6_sys_para)
{
	_platformType = PlatformType;
	_dof6_sys_para = dof6_sys_para;
	switch (_platformType)
	{
	default:
		UE_LOG(LogSIMCUE, Error, TEXT("Wrong platform type!!! Please enter 0(3axes)/1(6axes)/2(10axes)"));
		break;
	case 0:
		Choose_PlatformType(_platformType);
		UE_LOG(LogSIMCUE, Log, TEXT("Selected 3/3+1 axes platform"));
		break;
	case 1:
		Choose_PlatformType(_platformType);
		UE_LOG(LogSIMCUE, Log, TEXT("Selected 6 axes platform"));
		break;
	}
	CueModule_Reset();
	UserCueParaTranfer(_dof6_sys_para);
	MechModule_InitCalc();
	CloseMboxUdpPort();
	OpenMboxUdpPort();
}

void Ulcsimcueobject::ReturnValue(int x)
{
	if (x == 20000)
	{
		UE_LOG(LogSIMCUE, Log, TEXT("SIM_CUE execute function success"));
	}
	else
	{
		switch (x)
		{
		default:
			UE_LOG(LogSIMCUE, Error, TEXT("Return value %d"), x);
			break;
		case 0x20000001:
			UE_LOG(LogSIMCUE, Error, TEXT("Encryption dog open failed!"));
			break;
		case 0x20000002:
			UE_LOG(LogSIMCUE, Error, TEXT("Encryption dog ID validation failed!"));
			break;
		case 0x20000003:
			UE_LOG(LogSIMCUE, Error, TEXT("Encryption dog HAMC validation failed!"));
			break;
		case 0x20000004:
			UE_LOG(LogSIMCUE, Error, TEXT("Encryption dog time validation failed!"));
			break;
		}
	}
}

Ulcsimcueobject::Ulcsimcueobject(const FObjectInitializer& objectInitializer) :Super(objectInitializer)
{
	_lcsimcueobjectObecjt = this;

	if (FMboxModule::Get().LibraryHandle)
	{
		//void* dllhandle= FMboxModule::Get().LibraryHandle;
		FString procName_Choose_PlatformType = "LC_Choose_PlatformType";
		DLL_Choose_PlatformType = (_Choose_PlatformType)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_Choose_PlatformType);
		FString procName_DOF6_Public_CueModule_Reset = "LC_DOF6_Public_CueModule_Reset";
		DLL_DOF6_Public_CueModule_Reset = (_DOF6_Public_CueModule_Reset)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_DOF6_Public_CueModule_Reset);
		FString procName_DOF6_Public_UserCueParaTranfer = "LC_DOF6_Public_UserCueParaTranfer";
		DLL_DOF6_Public_UserCueParaTranfer = (_DOF6_Public_UserCueParaTranfer)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_DOF6_Public_UserCueParaTranfer);
		FString procName_DOF6_Public_MechModule_InitCalc = "LC_DOF6_Public_MechModule_InitCalc";
		DLL_DOF6_Public_MechModule_InitCalc = (_DOF6_Public_MechModule_InitCalc)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_DOF6_Public_MechModule_InitCalc);
		FString procName_Public_OpenMboxUdpPort = "LC_Public_OpenMboxUdpPort";
		DLL_Public_OpenMboxUdpPort = (_Public_OpenMboxUdpPort)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_Public_OpenMboxUdpPort);
		FString procName_DOF6_Public_Cue2Inverse_Solution = "LC_DOF6_Public_Cue2Inverse_Solution";
		DLL_DOF6_Public_Cue2Inverse_Solution = (_DOF6_Public_Cue2Inverse_Solution)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_DOF6_Public_Cue2Inverse_Solution);
		FString procName_Public_ResetPlatform = "LC_Public_ResetPlatform";
		DLL_Public_ResetPlatform = (_Public_ResetPlatform)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_Public_ResetPlatform);
		FString procNane_Public_GoZeroPlatform = "LC_Public_GoZeroPlatform";
		DLL_Public_GoZeroPlatform = (_Public_GoZeroPlatform)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procNane_Public_GoZeroPlatform);
		FString procNane_Public_GoMiddlePlatform = "LC_Public_GoMiddlePlatform";
		DLL_Public_GoMiddlePlatform = (_Public_GoMiddlePlatform)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procNane_Public_GoMiddlePlatform);
		FString procName_Public_GoAbsoluteZeroPlatform = "LC_Public_GoAbsoluteZeroPlatform";
		DLL_Public_GoAbsoluteZeroPlatform = (_Public_GoAbsoluteZeroPlatform)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_Public_GoAbsoluteZeroPlatform);
		FString procName_Public_EmergencyStopPlatform = "LC_Public_EmergencyStopPlatform";
		DLL_Public_EmergencyStopPlatform = (_Public_EmergencyStopPlatform)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_Public_EmergencyStopPlatform);
		FString procName_Public_CancelEmergencyStopPlatform = "LC_Public_CancelEmergencyStopPlatform";
		DLL_Public_CancelEmergencyStopPlatform = (_Public_CancelEmergencyStopPlatform)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_Public_CancelEmergencyStopPlatform);
		FString procName_Public_CloseMboxUdpPort = "LC_Public_CloseMboxUdpPort";
		DLL_Public_CloseMboxUdpPort = (_Public_CloseMboxUdpPort)FPlatformProcess::GetDllExport(FMboxModule::Get().LibraryHandle, *procName_Public_CloseMboxUdpPort);
	}
}
