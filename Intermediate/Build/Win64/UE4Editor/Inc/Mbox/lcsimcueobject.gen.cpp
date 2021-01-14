// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mbox/Public/lcsimcueobject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelcsimcueobject() {}
// Cross Module References
	MBOX_API UClass* Z_Construct_UClass_Ulcsimcueobject_NoRegister();
	MBOX_API UClass* Z_Construct_UClass_Ulcsimcueobject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mbox();
	MBOX_API UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA();
	MBOX_API UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA();
	MBOX_API UScriptStruct* Z_Construct_UScriptStruct_FMboxFXStruct();
// End Cross Module References
	DEFINE_FUNCTION(Ulcsimcueobject::execCloseMboxUdpPort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseMboxUdpPort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ulcsimcueobject::execChoose_PlatformTypeAndInit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlatformType);
		P_GET_STRUCT(FUE_DOF6_SYS_PARA,Z_Param_dof6_sys_para);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Choose_PlatformTypeAndInit(Z_Param_PlatformType,Z_Param_dof6_sys_para);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ulcsimcueobject::execGoMiddlePlatform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_gomiddletime_Ms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoMiddlePlatform(Z_Param_gomiddletime_Ms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ulcsimcueobject::execCue2Inverse_Solution)
	{
		P_GET_STRUCT(FUE_DOF6_GAME_PARA,Z_Param_dof6_game_para);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cue2Inverse_Solution(Z_Param_dof6_game_para);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ulcsimcueobject::execWriteFXControl)
	{
		P_GET_STRUCT(FMboxFXStruct,Z_Param_FXState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteFXControl(Z_Param_FXState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ulcsimcueobject::execDecimalToHex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_num);
		P_GET_PROPERTY(FIntProperty,Z_Param_bytecount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=Ulcsimcueobject::DecimalToHex(Z_Param_num,Z_Param_bytecount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ulcsimcueobject::execParseBinaryStrtoDecimal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_binaryStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=Ulcsimcueobject::ParseBinaryStrtoDecimal(Z_Param_binaryStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ulcsimcueobject::execgetlcsimcueobjectObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(Ulcsimcueobject**)Z_Param__Result=Ulcsimcueobject::getlcsimcueobjectObject();
		P_NATIVE_END;
	}
	void Ulcsimcueobject::StaticRegisterNativesUlcsimcueobject()
	{
		UClass* Class = Ulcsimcueobject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Choose_PlatformTypeAndInit", &Ulcsimcueobject::execChoose_PlatformTypeAndInit },
			{ "CloseMboxUdpPort", &Ulcsimcueobject::execCloseMboxUdpPort },
			{ "Cue2Inverse_Solution", &Ulcsimcueobject::execCue2Inverse_Solution },
			{ "DecimalToHex", &Ulcsimcueobject::execDecimalToHex },
			{ "getlcsimcueobjectObject", &Ulcsimcueobject::execgetlcsimcueobjectObject },
			{ "GoMiddlePlatform", &Ulcsimcueobject::execGoMiddlePlatform },
			{ "ParseBinaryStrtoDecimal", &Ulcsimcueobject::execParseBinaryStrtoDecimal },
			{ "WriteFXControl", &Ulcsimcueobject::execWriteFXControl },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics
	{
		struct lcsimcueobject_eventChoose_PlatformTypeAndInit_Parms
		{
			int32 PlatformType;
			FUE_DOF6_SYS_PARA dof6_sys_para;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dof6_sys_para;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlatformType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::NewProp_dof6_sys_para = { "dof6_sys_para", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventChoose_PlatformTypeAndInit_Parms, dof6_sys_para), Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventChoose_PlatformTypeAndInit_Parms, PlatformType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::NewProp_dof6_sys_para,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::NewProp_PlatformType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcsimcueobject|Axes" },
		{ "ModuleRelativePath", "Public/lcsimcueobject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ulcsimcueobject, nullptr, "Choose_PlatformTypeAndInit", nullptr, nullptr, sizeof(lcsimcueobject_eventChoose_PlatformTypeAndInit_Parms), Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ulcsimcueobject_CloseMboxUdpPort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ulcsimcueobject_CloseMboxUdpPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcsimcueobject|Axes" },
		{ "ModuleRelativePath", "Public/lcsimcueobject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ulcsimcueobject_CloseMboxUdpPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ulcsimcueobject, nullptr, "CloseMboxUdpPort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ulcsimcueobject_CloseMboxUdpPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_CloseMboxUdpPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ulcsimcueobject_CloseMboxUdpPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ulcsimcueobject_CloseMboxUdpPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics
	{
		struct lcsimcueobject_eventCue2Inverse_Solution_Parms
		{
			FUE_DOF6_GAME_PARA dof6_game_para;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dof6_game_para;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics::NewProp_dof6_game_para = { "dof6_game_para", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventCue2Inverse_Solution_Parms, dof6_game_para), Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics::NewProp_dof6_game_para,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcsimcueobject|Axes" },
		{ "ModuleRelativePath", "Public/lcsimcueobject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ulcsimcueobject, nullptr, "Cue2Inverse_Solution", nullptr, nullptr, sizeof(lcsimcueobject_eventCue2Inverse_Solution_Parms), Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics
	{
		struct lcsimcueobject_eventDecimalToHex_Parms
		{
			int32 num;
			int32 bytecount;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bytecount;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventDecimalToHex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::NewProp_bytecount = { "bytecount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventDecimalToHex_Parms, bytecount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventDecimalToHex_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::NewProp_bytecount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::NewProp_num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcsimcueobject|UE" },
		{ "ModuleRelativePath", "Public/lcsimcueobject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ulcsimcueobject, nullptr, "DecimalToHex", nullptr, nullptr, sizeof(lcsimcueobject_eventDecimalToHex_Parms), Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics
	{
		struct lcsimcueobject_eventgetlcsimcueobjectObject_Parms
		{
			Ulcsimcueobject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventgetlcsimcueobjectObject_Parms, ReturnValue), Z_Construct_UClass_Ulcsimcueobject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcsimcueobject|UE" },
		{ "ModuleRelativePath", "Public/lcsimcueobject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ulcsimcueobject, nullptr, "getlcsimcueobjectObject", nullptr, nullptr, sizeof(lcsimcueobject_eventgetlcsimcueobjectObject_Parms), Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics
	{
		struct lcsimcueobject_eventGoMiddlePlatform_Parms
		{
			int32 gomiddletime_Ms;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_gomiddletime_Ms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics::NewProp_gomiddletime_Ms = { "gomiddletime_Ms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventGoMiddlePlatform_Parms, gomiddletime_Ms), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics::NewProp_gomiddletime_Ms,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcsimcueobject|Axes" },
		{ "ModuleRelativePath", "Public/lcsimcueobject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ulcsimcueobject, nullptr, "GoMiddlePlatform", nullptr, nullptr, sizeof(lcsimcueobject_eventGoMiddlePlatform_Parms), Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics
	{
		struct lcsimcueobject_eventParseBinaryStrtoDecimal_Parms
		{
			FString binaryStr;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_binaryStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventParseBinaryStrtoDecimal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::NewProp_binaryStr = { "binaryStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventParseBinaryStrtoDecimal_Parms, binaryStr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::NewProp_binaryStr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcsimcueobject|UE" },
		{ "ModuleRelativePath", "Public/lcsimcueobject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ulcsimcueobject, nullptr, "ParseBinaryStrtoDecimal", nullptr, nullptr, sizeof(lcsimcueobject_eventParseBinaryStrtoDecimal_Parms), Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics
	{
		struct lcsimcueobject_eventWriteFXControl_Parms
		{
			FMboxFXStruct FXState;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FXState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics::NewProp_FXState = { "FXState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcsimcueobject_eventWriteFXControl_Parms, FXState), Z_Construct_UScriptStruct_FMboxFXStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics::NewProp_FXState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcsimcueobject|Axes" },
		{ "ModuleRelativePath", "Public/lcsimcueobject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ulcsimcueobject, nullptr, "WriteFXControl", nullptr, nullptr, sizeof(lcsimcueobject_eventWriteFXControl_Parms), Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Ulcsimcueobject_NoRegister()
	{
		return Ulcsimcueobject::StaticClass();
	}
	struct Z_Construct_UClass_Ulcsimcueobject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ulcsimcueobject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Ulcsimcueobject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Ulcsimcueobject_Choose_PlatformTypeAndInit, "Choose_PlatformTypeAndInit" }, // 3679864800
		{ &Z_Construct_UFunction_Ulcsimcueobject_CloseMboxUdpPort, "CloseMboxUdpPort" }, // 1466057731
		{ &Z_Construct_UFunction_Ulcsimcueobject_Cue2Inverse_Solution, "Cue2Inverse_Solution" }, // 2383626092
		{ &Z_Construct_UFunction_Ulcsimcueobject_DecimalToHex, "DecimalToHex" }, // 710451368
		{ &Z_Construct_UFunction_Ulcsimcueobject_getlcsimcueobjectObject, "getlcsimcueobjectObject" }, // 543665502
		{ &Z_Construct_UFunction_Ulcsimcueobject_GoMiddlePlatform, "GoMiddlePlatform" }, // 2293208867
		{ &Z_Construct_UFunction_Ulcsimcueobject_ParseBinaryStrtoDecimal, "ParseBinaryStrtoDecimal" }, // 1348837271
		{ &Z_Construct_UFunction_Ulcsimcueobject_WriteFXControl, "WriteFXControl" }, // 731048086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ulcsimcueobject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "lcsimcueobject.h" },
		{ "ModuleRelativePath", "Public/lcsimcueobject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ulcsimcueobject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ulcsimcueobject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ulcsimcueobject_Statics::ClassParams = {
		&Ulcsimcueobject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_Ulcsimcueobject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ulcsimcueobject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ulcsimcueobject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ulcsimcueobject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ulcsimcueobject, 2969686871);
	template<> MBOX_API UClass* StaticClass<Ulcsimcueobject>()
	{
		return Ulcsimcueobject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ulcsimcueobject(Z_Construct_UClass_Ulcsimcueobject, &Ulcsimcueobject::StaticClass, TEXT("/Script/Mbox"), TEXT("Ulcsimcueobject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ulcsimcueobject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
