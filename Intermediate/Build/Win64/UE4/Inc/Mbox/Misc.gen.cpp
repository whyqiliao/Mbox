// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mbox/Public/Misc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMisc() {}
// Cross Module References
	MBOX_API UEnum* Z_Construct_UEnum_Mbox_EFUNCATIONRETVALUE();
	UPackage* Z_Construct_UPackage__Script_Mbox();
	MBOX_API UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA();
	MBOX_API UScriptStruct* Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA();
	MBOX_API UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA();
	MBOX_API UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA();
	MBOX_API UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA();
	MBOX_API UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA();
	MBOX_API UScriptStruct* Z_Construct_UScriptStruct_FMboxFXStruct();
// End Cross Module References
	static UEnum* EFUNCATIONRETVALUE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Mbox_EFUNCATIONRETVALUE, Z_Construct_UPackage__Script_Mbox(), TEXT("EFUNCATIONRETVALUE"));
		}
		return Singleton;
	}
	template<> MBOX_API UEnum* StaticEnum<EFUNCATIONRETVALUE>()
	{
		return EFUNCATIONRETVALUE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFUNCATIONRETVALUE(EFUNCATIONRETVALUE_StaticEnum, TEXT("/Script/Mbox"), TEXT("EFUNCATIONRETVALUE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Mbox_EFUNCATIONRETVALUE_Hash() { return 3302519605U; }
	UEnum* Z_Construct_UEnum_Mbox_EFUNCATIONRETVALUE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Mbox();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFUNCATIONRETVALUE"), 0, Get_Z_Construct_UEnum_Mbox_EFUNCATIONRETVALUE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CALL_SUCCESS", (int64)CALL_SUCCESS },
				{ "OPEN_SOFTDOG_ERROR", (int64)OPEN_SOFTDOG_ERROR },
				{ "ID_SOFTDOG_ERROR", (int64)ID_SOFTDOG_ERROR },
				{ "HAMC_SOFTDOG_ERROR", (int64)HAMC_SOFTDOG_ERROR },
				{ "TIME_SOFTDOG_ERROR", (int64)TIME_SOFTDOG_ERROR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CALL_SUCCESS.DisplayName", "\xe5\x87\xbd\xe6\x95\xb0\xe8\xb0\x83\xe7\x94\xa8\xe6\x88\x90\xe5\x8a\x9f" },
				{ "CALL_SUCCESS.Name", "CALL_SUCCESS" },
				{ "HAMC_SOFTDOG_ERROR.Comment", "// \xe5\x8a\xa0\xe5\xaf\x86\xe7\x8b\x97ID\xe9\xaa\x8c\xe8\xaf\x81\xe9\x94\x99\xe8\xaf\xaf\n" },
				{ "HAMC_SOFTDOG_ERROR.DisplayName", "\xe5\x8a\xa0\xe5\xaf\x86\xe7\x8b\x97HAMC\xe9\xaa\x8c\xe8\xaf\x81\xe9\x94\x99\xe8\xaf\xaf" },
				{ "HAMC_SOFTDOG_ERROR.Name", "HAMC_SOFTDOG_ERROR" },
				{ "HAMC_SOFTDOG_ERROR.ToolTip", "\xe5\x8a\xa0\xe5\xaf\x86\xe7\x8b\x97ID\xe9\xaa\x8c\xe8\xaf\x81\xe9\x94\x99\xe8\xaf\xaf" },
				{ "ID_SOFTDOG_ERROR.Comment", "// \xe5\x8a\xa0\xe5\xaf\x86\xe7\x8b\x97\xe6\x89\x93\xe5\xbc\x80\xe5\xa4\xb1\xe8\xb4\xa5\n" },
				{ "ID_SOFTDOG_ERROR.DisplayName", "\xe5\x8a\xa0\xe5\xaf\x86\xe7\x8b\x97ID\xe9\xaa\x8c\xe8\xaf\x81\xe9\x94\x99\xe8\xaf\xaf" },
				{ "ID_SOFTDOG_ERROR.Name", "ID_SOFTDOG_ERROR" },
				{ "ID_SOFTDOG_ERROR.ToolTip", "\xe5\x8a\xa0\xe5\xaf\x86\xe7\x8b\x97\xe6\x89\x93\xe5\xbc\x80\xe5\xa4\xb1\xe8\xb4\xa5" },
				{ "ModuleRelativePath", "Public/Misc.h" },
				{ "OPEN_SOFTDOG_ERROR.Comment", "// \xe5\x87\xbd\xe6\x95\xb0\xe8\xb0\x83\xe7\x94\xa8\xe6\x88\x90\xe5\x8a\x9f\n" },
				{ "OPEN_SOFTDOG_ERROR.DisplayName", "\xe5\x8a\xa0\xe5\xaf\x86\xe7\x8b\x97\xe6\x89\x93\xe5\xbc\x80\xe5\xa4\xb1\xe8\xb4\xa5" },
				{ "OPEN_SOFTDOG_ERROR.Name", "OPEN_SOFTDOG_ERROR" },
				{ "OPEN_SOFTDOG_ERROR.ToolTip", "\xe5\x87\xbd\xe6\x95\xb0\xe8\xb0\x83\xe7\x94\xa8\xe6\x88\x90\xe5\x8a\x9f" },
				{ "TIME_SOFTDOG_ERROR.Comment", "// \xe5\x8a\xa0\xe5\xaf\x86\xe7\x8b\x97HAMC\xe9\xaa\x8c\xe8\xaf\x81\xe9\x94\x99\xe8\xaf\xaf\n" },
				{ "TIME_SOFTDOG_ERROR.DisplayName", "\xe5\x8a\xa0\xe5\xaf\x86\xe7\x8b\x97\xe6\x97\xb6\xe9\x97\xb4\xe6\xa0\xa1\xe9\xaa\x8c\xe9\x94\x99\xe8\xaf\xaf" },
				{ "TIME_SOFTDOG_ERROR.Name", "TIME_SOFTDOG_ERROR" },
				{ "TIME_SOFTDOG_ERROR.ToolTip", "\xe5\x8a\xa0\xe5\xaf\x86\xe7\x8b\x97HAMC\xe9\xaa\x8c\xe8\xaf\x81\xe9\x94\x99\xe8\xaf\xaf" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Mbox,
				nullptr,
				"EFUNCATIONRETVALUE",
				"EFUNCATIONRETVALUE",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FUE_DOF6_SYS_PARA::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MBOX_API uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA, Z_Construct_UPackage__Script_Mbox(), TEXT("UE_DOF6_SYS_PARA"), sizeof(FUE_DOF6_SYS_PARA), Get_Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Hash());
	}
	return Singleton;
}
template<> MBOX_API UScriptStruct* StaticStruct<FUE_DOF6_SYS_PARA>()
{
	return FUE_DOF6_SYS_PARA::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUE_DOF6_SYS_PARA(FUE_DOF6_SYS_PARA::StaticStruct, TEXT("/Script/Mbox"), TEXT("UE_DOF6_SYS_PARA"), false, nullptr, nullptr);
static struct FScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_SYS_PARA
{
	FScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_SYS_PARA()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UE_DOF6_SYS_PARA")),new UScriptStruct::TCppStructOps<FUE_DOF6_SYS_PARA>);
	}
} ScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_SYS_PARA;
	struct Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UdpPortPara_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UdpPortPara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dof6MechPara_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dof6MechPara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dof6GamePara_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dof6GamePara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZDof6CuePara_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZDof6CuePara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YDof6CuePara_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YDof6CuePara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XDof6CuePara_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XDof6CuePara;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE_DOF6_SYS_PARA>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_UdpPortPara_MetaData[] = {
		{ "Category", "UE_DOF6_SYS_PARA" },
		{ "ModuleRelativePath", "Public/Misc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_UdpPortPara = { "UdpPortPara", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_SYS_PARA, UdpPortPara), Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_UdpPortPara_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_UdpPortPara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_Dof6MechPara_MetaData[] = {
		{ "Category", "UE_DOF6_SYS_PARA" },
		{ "ModuleRelativePath", "Public/Misc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_Dof6MechPara = { "Dof6MechPara", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_SYS_PARA, Dof6MechPara), Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_Dof6MechPara_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_Dof6MechPara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_Dof6GamePara_MetaData[] = {
		{ "Category", "UE_DOF6_SYS_PARA" },
		{ "ModuleRelativePath", "Public/Misc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_Dof6GamePara = { "Dof6GamePara", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_SYS_PARA, Dof6GamePara), Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_Dof6GamePara_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_Dof6GamePara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_ZDof6CuePara_MetaData[] = {
		{ "Category", "UE_DOF6_SYS_PARA" },
		{ "ModuleRelativePath", "Public/Misc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_ZDof6CuePara = { "ZDof6CuePara", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_SYS_PARA, ZDof6CuePara), Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_ZDof6CuePara_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_ZDof6CuePara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_YDof6CuePara_MetaData[] = {
		{ "Category", "UE_DOF6_SYS_PARA" },
		{ "ModuleRelativePath", "Public/Misc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_YDof6CuePara = { "YDof6CuePara", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_SYS_PARA, YDof6CuePara), Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_YDof6CuePara_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_YDof6CuePara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_XDof6CuePara_MetaData[] = {
		{ "Category", "UE_DOF6_SYS_PARA" },
		{ "ModuleRelativePath", "Public/Misc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_XDof6CuePara = { "XDof6CuePara", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_SYS_PARA, XDof6CuePara), Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_XDof6CuePara_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_XDof6CuePara_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_UdpPortPara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_Dof6MechPara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_Dof6GamePara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_ZDof6CuePara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_YDof6CuePara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::NewProp_XDof6CuePara,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mbox,
		nullptr,
		&NewStructOps,
		"UE_DOF6_SYS_PARA",
		sizeof(FUE_DOF6_SYS_PARA),
		alignof(FUE_DOF6_SYS_PARA),
		Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Mbox();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UE_DOF6_SYS_PARA"), sizeof(FUE_DOF6_SYS_PARA), Get_Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_SYS_PARA_Hash() { return 411929287U; }
class UScriptStruct* FUE_UDP_PORT_PARA::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MBOX_API uint32 Get_Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA, Z_Construct_UPackage__Script_Mbox(), TEXT("UE_UDP_PORT_PARA"), sizeof(FUE_UDP_PORT_PARA), Get_Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Hash());
	}
	return Singleton;
}
template<> MBOX_API UScriptStruct* StaticStruct<FUE_UDP_PORT_PARA>()
{
	return FUE_UDP_PORT_PARA::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUE_UDP_PORT_PARA(FUE_UDP_PORT_PARA::StaticStruct, TEXT("/Script/Mbox"), TEXT("UE_UDP_PORT_PARA"), false, nullptr, nullptr);
static struct FScriptStruct_Mbox_StaticRegisterNativesFUE_UDP_PORT_PARA
{
	FScriptStruct_Mbox_StaticRegisterNativesFUE_UDP_PORT_PARA()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UE_UDP_PORT_PARA")),new UScriptStruct::TCppStructOps<FUE_UDP_PORT_PARA>);
	}
} ScriptStruct_Mbox_StaticRegisterNativesFUE_UDP_PORT_PARA;
	struct Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I16BaseDoutCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_I16BaseDoutCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32FlightSamplingPeriods_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32FlightSamplingPeriods;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//UDP\xe7\xab\xaf\xe5\x8f\xa3\xe5\x8f\xb7\xe5\x92\x8c\xe9\x87\x87\xe6\xa0\xb7\xe6\x97\xb6\xe9\x97\xb4\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "UDP\xe7\xab\xaf\xe5\x8f\xa3\xe5\x8f\xb7\xe5\x92\x8c\xe9\x87\x87\xe6\xa0\xb7\xe6\x97\xb6\xe9\x97\xb4" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE_UDP_PORT_PARA>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewProp_I16BaseDoutCode_MetaData[] = {
		{ "Category", "UE_UDP_PORT_PARA" },
		{ "Comment", "//\xe7\x89\xb9\xe6\x95\x88\xe8\xbe\x93\xe5\x87\xba\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x97\xb6\xe5\x85\xa8\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe7\x89\xb9\xe6\x95\x88\xe8\xbe\x93\xe5\x87\xba\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x97\xb6\xe5\x85\xa8\xe5\x85\xb3" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewProp_I16BaseDoutCode = { "I16BaseDoutCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_UDP_PORT_PARA, I16BaseDoutCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewProp_I16BaseDoutCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewProp_I16BaseDoutCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewProp_F32FlightSamplingPeriods_MetaData[] = {
		{ "Category", "UE_UDP_PORT_PARA" },
		{ "Comment", "// \xe9\x87\x87\xe6\xa0\xb7\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe7\xa7\x92\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe9\x87\x87\xe6\xa0\xb7\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe7\xa7\x92" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewProp_F32FlightSamplingPeriods = { "F32FlightSamplingPeriods", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_UDP_PORT_PARA, F32FlightSamplingPeriods), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewProp_F32FlightSamplingPeriods_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewProp_F32FlightSamplingPeriods_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewProp_I16BaseDoutCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::NewProp_F32FlightSamplingPeriods,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mbox,
		nullptr,
		&NewStructOps,
		"UE_UDP_PORT_PARA",
		sizeof(FUE_UDP_PORT_PARA),
		alignof(FUE_UDP_PORT_PARA),
		Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Mbox();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UE_UDP_PORT_PARA"), sizeof(FUE_UDP_PORT_PARA), Get_Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUE_UDP_PORT_PARA_Hash() { return 3953754576U; }
class UScriptStruct* FUE_DOF6_MECH_PARA::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MBOX_API uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA, Z_Construct_UPackage__Script_Mbox(), TEXT("UE_DOF6_MECH_PARA"), sizeof(FUE_DOF6_MECH_PARA), Get_Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Hash());
	}
	return Singleton;
}
template<> MBOX_API UScriptStruct* StaticStruct<FUE_DOF6_MECH_PARA>()
{
	return FUE_DOF6_MECH_PARA::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUE_DOF6_MECH_PARA(FUE_DOF6_MECH_PARA::StaticStruct, TEXT("/Script/Mbox"), TEXT("UE_DOF6_MECH_PARA"), false, nullptr, nullptr);
static struct FScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_MECH_PARA
{
	FScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_MECH_PARA()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UE_DOF6_MECH_PARA")),new UScriptStruct::TCppStructOps<FUE_DOF6_MECH_PARA>);
	}
} ScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_MECH_PARA;
	struct Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32GearSix_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32GearSix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32GearFive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32GearFive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32GearFour_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32GearFour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32GearThree_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32GearThree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32GearTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32GearTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32GearOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32GearOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32MinLongofCylinderMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32MinLongofCylinderMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32LeadDistanceUnitMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32LeadDistanceUnitMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32AccessDistanceUnitMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32AccessDistanceUnitMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32PlatformZMaxMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32PlatformZMaxMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32PlatformYMaxMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32PlatformYMaxMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32PlatformXMaxMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32PlatformXMaxMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32PlatformGammaMaxDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32PlatformGammaMaxDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32PlatformBetaMaxDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32PlatformBetaMaxDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32PlatformAlfaMaxDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32PlatformAlfaMaxDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32XAxisRotAngleDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32XAxisRotAngleDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32MovingDiameterMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32MovingDiameterMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32MovingShortMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32MovingShortMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32StaticDiameterMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32StaticDiameterMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32StaticShortMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32StaticShortMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32HeightToTopMarkMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32HeightToTopMarkMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32HeightOfTriangleHemMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32HeightOfTriangleHemMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32TriangleHemMm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32TriangleHemMm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32ZAcceMaxG_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32ZAcceMaxG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32YAcceMaxG_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32YAcceMaxG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32XAcceMaxG_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32XAcceMaxG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32GammaMaxRad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32GammaMaxRad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32BetaMaxRad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32BetaMaxRad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32AlfaMaxRad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32AlfaMaxRad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\xe8\xbf\x99\xe4\xba\x9b\xe5\x8f\x82\xe6\x95\xb0\xe9\x9c\x80\xe8\xa6\x81\xe6\xa0\xb9\xe6\x8d\xae\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x9a\x84\xe5\xae\x9e\xe9\x99\x85\xe5\x8f\x82\xe6\x95\xb0\xe8\xbf\x9b\xe8\xa1\x8c\xe4\xbf\xae\xe6\x94\xb9\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe4\xbc\x9a\xe5\xaf\xb9\xe5\xb9\xb3\xe5\x8f\xb0\xe9\x80\xa0\xe6\x88\x90\xe6\x8d\x9f\xe5\xae\xb3\xe5\x85\xb3\xe4\xba\x8e\xe7\xbb\x93\xe6\x9e\x84\xe7\x9b\xb8\xe5\x85\xb3\xe5\x8f\x82\xe6\x95\xb0\xe8\xaf\xb7\xe5\x8f\x82\xe8\x80\x83 \xe4\xbd\x93\xe6\x84\x9f\xe7\xae\x97\xe6\xb3\x95\xe5\x8a\xa8\xe6\x80\x81\xe9\x93\xbe\xe6\x8e\xa5\xe5\xba\x93\xe4\xbd\xbf\xe7\x94\xa8\xe6\x89\x8b\xe5\x86\x8c \xe9\x87\x8c\xe9\x9d\xa2\xe5\xaf\xb9\xe5\xb9\xb3\xe5\x8f\xb0\xe7\xbb\x93\xe6\x9e\x84\xe7\x9a\x84\xe8\xaf\xb4\xe6\x98\x8e*///\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe5\xb9\x85\xe5\xba\xa6\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\xe8\xbf\x99\xe4\xba\x9b\xe5\x8f\x82\xe6\x95\xb0\xe9\x9c\x80\xe8\xa6\x81\xe6\xa0\xb9\xe6\x8d\xae\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x9a\x84\xe5\xae\x9e\xe9\x99\x85\xe5\x8f\x82\xe6\x95\xb0\xe8\xbf\x9b\xe8\xa1\x8c\xe4\xbf\xae\xe6\x94\xb9\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe4\xbc\x9a\xe5\xaf\xb9\xe5\xb9\xb3\xe5\x8f\xb0\xe9\x80\xa0\xe6\x88\x90\xe6\x8d\x9f\xe5\xae\xb3\xe5\x85\xb3\xe4\xba\x8e\xe7\xbb\x93\xe6\x9e\x84\xe7\x9b\xb8\xe5\x85\xb3\xe5\x8f\x82\xe6\x95\xb0\xe8\xaf\xb7\xe5\x8f\x82\xe8\x80\x83 \xe4\xbd\x93\xe6\x84\x9f\xe7\xae\x97\xe6\xb3\x95\xe5\x8a\xa8\xe6\x80\x81\xe9\x93\xbe\xe6\x8e\xa5\xe5\xba\x93\xe4\xbd\xbf\xe7\x94\xa8\xe6\x89\x8b\xe5\x86\x8c \xe9\x87\x8c\xe9\x9d\xa2\xe5\xaf\xb9\xe5\xb9\xb3\xe5\x8f\xb0\xe7\xbb\x93\xe6\x9e\x84\xe7\x9a\x84\xe8\xaf\xb4\xe6\x98\x8e//\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe5\xb9\x85\xe5\xba\xa6" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE_DOF6_MECH_PARA>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearSix_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* 6\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "6\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearSix = { "F32GearSix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32GearSix), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearSix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearSix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearFive_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* 5\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "5\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearFive = { "F32GearFive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32GearFive), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearFive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearFive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearFour_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* 4\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "4\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearFour = { "F32GearFour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32GearFour), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearFour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearFour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearThree_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* 3\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "3\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearThree = { "F32GearThree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32GearThree), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearThree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearTwo_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* 2\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "2\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearTwo = { "F32GearTwo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32GearTwo), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearOne_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* 1\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "1\xe5\x8f\xb7\xe8\xbd\xb4\xe7\x94\xb5\xe5\xad\x90\xe9\xbd\xbf\xe8\xbd\xae\xe6\xaf\x94" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearOne = { "F32GearOne", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32GearOne), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MinLongofCylinderMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe7\x94\xb5\xe5\x8a\xa8\xe7\xbc\xb8\xe7\x9a\x84\xe6\x9c\x80\xe5\xb0\x8f\xe9\x95\xbf\xe5\xba\xa6\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe7\x94\xb5\xe5\x8a\xa8\xe7\xbc\xb8\xe7\x9a\x84\xe6\x9c\x80\xe5\xb0\x8f\xe9\x95\xbf\xe5\xba\xa6\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MinLongofCylinderMm = { "F32MinLongofCylinderMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32MinLongofCylinderMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MinLongofCylinderMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MinLongofCylinderMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32LeadDistanceUnitMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe7\x94\xb5\xe5\x8a\xa8\xe7\xbc\xb8\xe7\x9a\x84\xe5\xaf\xbc\xe7\xa8\x8b\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe7\x94\xb5\xe5\x8a\xa8\xe7\xbc\xb8\xe7\x9a\x84\xe5\xaf\xbc\xe7\xa8\x8b\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32LeadDistanceUnitMm = { "F32LeadDistanceUnitMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32LeadDistanceUnitMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32LeadDistanceUnitMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32LeadDistanceUnitMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32AccessDistanceUnitMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe7\x94\xb5\xe5\x8a\xa8\xe7\xbc\xb8\xe7\x9a\x84\xe8\xa1\x8c\xe7\xa8\x8b\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe7\x94\xb5\xe5\x8a\xa8\xe7\xbc\xb8\xe7\x9a\x84\xe8\xa1\x8c\xe7\xa8\x8b\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32AccessDistanceUnitMm = { "F32AccessDistanceUnitMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32AccessDistanceUnitMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32AccessDistanceUnitMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32AccessDistanceUnitMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformZMaxMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* Z\xe5\xb9\xb3\xe7\xa7\xbb\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "Z\xe5\xb9\xb3\xe7\xa7\xbb\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformZMaxMm = { "F32PlatformZMaxMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32PlatformZMaxMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformZMaxMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformZMaxMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformYMaxMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* Y\xe5\xb9\xb3\xe7\xa7\xbb\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "Y\xe5\xb9\xb3\xe7\xa7\xbb\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformYMaxMm = { "F32PlatformYMaxMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32PlatformYMaxMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformYMaxMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformYMaxMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformXMaxMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* X\xe5\xb9\xb3\xe7\xa7\xbb\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "X\xe5\xb9\xb3\xe7\xa7\xbb\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformXMaxMm = { "F32PlatformXMaxMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32PlatformXMaxMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformXMaxMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformXMaxMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformGammaMaxDeg_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* Gamma\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xba\xa6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "Gamma\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformGammaMaxDeg = { "F32PlatformGammaMaxDeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32PlatformGammaMaxDeg), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformGammaMaxDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformGammaMaxDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformBetaMaxDeg_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* Beta\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xba\xa6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "Beta\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformBetaMaxDeg = { "F32PlatformBetaMaxDeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32PlatformBetaMaxDeg), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformBetaMaxDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformBetaMaxDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformAlfaMaxDeg_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* Alfa\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xba\xa6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "Alfa\xe6\x9c\x80\xe5\xa4\xa7\xe8\xbf\x90\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformAlfaMaxDeg = { "F32PlatformAlfaMaxDeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32PlatformAlfaMaxDeg), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformAlfaMaxDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformAlfaMaxDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32XAxisRotAngleDeg_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe5\x9d\x90\xe6\xa0\x87\xe6\x97\x8b\xe8\xbd\xac\xe8\xa7\x92\xe5\xba\xa6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x9d\x90\xe6\xa0\x87\xe6\x97\x8b\xe8\xbd\xac\xe8\xa7\x92\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32XAxisRotAngleDeg = { "F32XAxisRotAngleDeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32XAxisRotAngleDeg), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32XAxisRotAngleDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32XAxisRotAngleDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MovingDiameterMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe4\xb8\x8a\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x9b\xb4\xe5\xbe\x84\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe4\xb8\x8a\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x9b\xb4\xe5\xbe\x84\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MovingDiameterMm = { "F32MovingDiameterMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32MovingDiameterMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MovingDiameterMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MovingDiameterMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MovingShortMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe4\xb8\x8a\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x9f\xad\xe8\xbe\xb9\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe4\xb8\x8a\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x9f\xad\xe8\xbe\xb9\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MovingShortMm = { "F32MovingShortMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32MovingShortMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MovingShortMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MovingShortMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32StaticDiameterMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe4\xb8\x8b\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x9b\xb4\xe5\xbe\x84\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe4\xb8\x8b\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x9b\xb4\xe5\xbe\x84\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32StaticDiameterMm = { "F32StaticDiameterMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32StaticDiameterMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32StaticDiameterMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32StaticDiameterMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32StaticShortMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe4\xb8\x8b\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x9f\xad\xe8\xbe\xb9\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe4\xb8\x8b\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x9f\xad\xe8\xbe\xb9\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32StaticShortMm = { "F32StaticShortMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32StaticShortMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32StaticShortMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32StaticShortMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32HeightToTopMarkMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe4\xb8\x89\xe8\xa7\x92\xe5\xbd\xa2\xe9\xa1\xb6\xe7\x82\xb9\xe5\x88\xb0\xe5\xba\xa7\xe6\xa4\x85\xe4\xb8\xad\xe5\xbf\x83\xe7\x82\xb9\xe7\x9a\x84\xe8\xb7\x9d\xe7\xa6\xbb\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe4\xb8\x89\xe8\xa7\x92\xe5\xbd\xa2\xe9\xa1\xb6\xe7\x82\xb9\xe5\x88\xb0\xe5\xba\xa7\xe6\xa4\x85\xe4\xb8\xad\xe5\xbf\x83\xe7\x82\xb9\xe7\x9a\x84\xe8\xb7\x9d\xe7\xa6\xbb\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32HeightToTopMarkMm = { "F32HeightToTopMarkMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32HeightToTopMarkMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32HeightToTopMarkMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32HeightToTopMarkMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32HeightOfTriangleHemMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe4\xb8\x89\xe8\xa7\x92\xe5\xbd\xa2\xe5\xba\x95\xe8\xbe\xb9\xe9\xab\x98\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe4\xb8\x89\xe8\xa7\x92\xe5\xbd\xa2\xe5\xba\x95\xe8\xbe\xb9\xe9\xab\x98\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32HeightOfTriangleHemMm = { "F32HeightOfTriangleHemMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32HeightOfTriangleHemMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32HeightOfTriangleHemMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32HeightOfTriangleHemMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32TriangleHemMm_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe4\xb8\x89\xe8\xa7\x92\xe5\xbd\xa2\xe5\xba\x95\xe8\xbe\xb9\xe9\x95\xbf\xe5\xba\xa6\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe4\xb8\x89\xe8\xa7\x92\xe5\xbd\xa2\xe5\xba\x95\xe8\xbe\xb9\xe9\x95\xbf\xe5\xba\xa6\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe6\xaf\xab\xe7\xb1\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32TriangleHemMm = { "F32TriangleHemMm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32TriangleHemMm), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32TriangleHemMm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32TriangleHemMm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32ZAcceMaxG_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32ZAcceMaxG = { "F32ZAcceMaxG", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32ZAcceMaxG), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32ZAcceMaxG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32ZAcceMaxG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32YAcceMaxG_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe9\x80\x9f\xe5\xba\xa6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe9\x80\x9f\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32YAcceMaxG = { "F32YAcceMaxG", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32YAcceMaxG), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32YAcceMaxG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32YAcceMaxG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32XAcceMaxG_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32XAcceMaxG = { "F32XAcceMaxG", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32XAcceMaxG), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32XAcceMaxG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32XAcceMaxG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GammaMaxRad_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GammaMaxRad = { "F32GammaMaxRad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32GammaMaxRad), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GammaMaxRad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GammaMaxRad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32BetaMaxRad_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32BetaMaxRad = { "F32BetaMaxRad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32BetaMaxRad), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32BetaMaxRad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32BetaMaxRad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32AlfaMaxRad_MetaData[] = {
		{ "Category", "UE_DOF6_MECH_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32AlfaMaxRad = { "F32AlfaMaxRad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_MECH_PARA, F32AlfaMaxRad), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32AlfaMaxRad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32AlfaMaxRad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearSix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearFive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearFour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearThree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GearOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MinLongofCylinderMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32LeadDistanceUnitMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32AccessDistanceUnitMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformZMaxMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformYMaxMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformXMaxMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformGammaMaxDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformBetaMaxDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32PlatformAlfaMaxDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32XAxisRotAngleDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MovingDiameterMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32MovingShortMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32StaticDiameterMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32StaticShortMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32HeightToTopMarkMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32HeightOfTriangleHemMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32TriangleHemMm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32ZAcceMaxG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32YAcceMaxG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32XAcceMaxG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32GammaMaxRad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32BetaMaxRad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::NewProp_F32AlfaMaxRad,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mbox,
		nullptr,
		&NewStructOps,
		"UE_DOF6_MECH_PARA",
		sizeof(FUE_DOF6_MECH_PARA),
		alignof(FUE_DOF6_MECH_PARA),
		Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Mbox();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UE_DOF6_MECH_PARA"), sizeof(FUE_DOF6_MECH_PARA), Get_Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_MECH_PARA_Hash() { return 359769573U; }
class UScriptStruct* FUE_DOF6_GAME_PARA::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MBOX_API uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA, Z_Construct_UPackage__Script_Mbox(), TEXT("UE_DOF6_GAME_PARA"), sizeof(FUE_DOF6_GAME_PARA), Get_Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Hash());
	}
	return Singleton;
}
template<> MBOX_API UScriptStruct* StaticStruct<FUE_DOF6_GAME_PARA>()
{
	return FUE_DOF6_GAME_PARA::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUE_DOF6_GAME_PARA(FUE_DOF6_GAME_PARA::StaticStruct, TEXT("/Script/Mbox"), TEXT("UE_DOF6_GAME_PARA"), false, nullptr, nullptr);
static struct FScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_GAME_PARA
{
	FScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_GAME_PARA()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UE_DOF6_GAME_PARA")),new UScriptStruct::TCppStructOps<FUE_DOF6_GAME_PARA>);
	}
} ScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_GAME_PARA;
	struct Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32ReciveZAcceG_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32ReciveZAcceG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32ReciveYAcceG_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32ReciveYAcceG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32ReciveXAcceG_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32ReciveXAcceG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32ReciveGammaRad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32ReciveGammaRad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32ReciveBetaRad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32ReciveBetaRad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32ReciveAlfaRad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32ReciveAlfaRad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe5\xae\x9e\xe6\x97\xb6\xe7\x9a\x84\xe8\xbf\x90\xe5\x8a\xa8\xe5\x80\xbc\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe5\xae\x9e\xe6\x97\xb6\xe7\x9a\x84\xe8\xbf\x90\xe5\x8a\xa8\xe5\x80\xbc" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE_DOF6_GAME_PARA>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveZAcceG_MetaData[] = {
		{ "Category", "UE_DOF6_GAME_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6*/" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveZAcceG = { "F32ReciveZAcceG", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_GAME_PARA, F32ReciveZAcceG), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveZAcceG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveZAcceG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveYAcceG_MetaData[] = {
		{ "Category", "UE_DOF6_GAME_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6*/" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveYAcceG = { "F32ReciveYAcceG", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_GAME_PARA, F32ReciveYAcceG), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveYAcceG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveYAcceG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveXAcceG_MetaData[] = {
		{ "Category", "UE_DOF6_GAME_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6*/" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe9\x87\x8d\xe5\x8a\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveXAcceG = { "F32ReciveXAcceG", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_GAME_PARA, F32ReciveXAcceG), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveXAcceG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveXAcceG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveGammaRad_MetaData[] = {
		{ "Category", "UE_DOF6_GAME_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6*/" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveGammaRad = { "F32ReciveGammaRad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_GAME_PARA, F32ReciveGammaRad), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveGammaRad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveGammaRad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveBetaRad_MetaData[] = {
		{ "Category", "UE_DOF6_GAME_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6*/" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveBetaRad = { "F32ReciveBetaRad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_GAME_PARA, F32ReciveBetaRad), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveBetaRad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveBetaRad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveAlfaRad_MetaData[] = {
		{ "Category", "UE_DOF6_GAME_PARA" },
		{ "Comment", "/* \xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6*/" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe5\xbc\xa7\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveAlfaRad = { "F32ReciveAlfaRad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_GAME_PARA, F32ReciveAlfaRad), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveAlfaRad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveAlfaRad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveZAcceG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveYAcceG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveXAcceG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveGammaRad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveBetaRad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::NewProp_F32ReciveAlfaRad,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mbox,
		nullptr,
		&NewStructOps,
		"UE_DOF6_GAME_PARA",
		sizeof(FUE_DOF6_GAME_PARA),
		alignof(FUE_DOF6_GAME_PARA),
		Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Mbox();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UE_DOF6_GAME_PARA"), sizeof(FUE_DOF6_GAME_PARA), Get_Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_GAME_PARA_Hash() { return 2119319387U; }
class UScriptStruct* FUE_DOF6_POSTION_PARA::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MBOX_API uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA, Z_Construct_UPackage__Script_Mbox(), TEXT("UE_DOF6_POSTION_PARA"), sizeof(FUE_DOF6_POSTION_PARA), Get_Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Hash());
	}
	return Singleton;
}
template<> MBOX_API UScriptStruct* StaticStruct<FUE_DOF6_POSTION_PARA>()
{
	return FUE_DOF6_POSTION_PARA::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUE_DOF6_POSTION_PARA(FUE_DOF6_POSTION_PARA::StaticStruct, TEXT("/Script/Mbox"), TEXT("UE_DOF6_POSTION_PARA"), false, nullptr, nullptr);
static struct FScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_POSTION_PARA
{
	FScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_POSTION_PARA()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UE_DOF6_POSTION_PARA")),new UScriptStruct::TCppStructOps<FUE_DOF6_POSTION_PARA>);
	}
} ScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_POSTION_PARA;
	struct Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I32PlayWpos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_I32PlayWpos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I32PlayVpos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_I32PlayVpos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I32PlayUpos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_I32PlayUpos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I32PlayZpos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_I32PlayZpos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I32PlayYpos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_I32PlayYpos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I32PlayXpos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_I32PlayXpos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe5\x8f\xa0\xe5\x8a\xa0\xe7\x9a\x84\xe5\x85\xad\xe4\xb8\xaa\xe8\xbd\xb4\xe7\x89\xb9\xe6\x95\x88\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8f\xa0\xe5\x8a\xa0\xe7\x9a\x84\xe5\x85\xad\xe4\xb8\xaa\xe8\xbd\xb4\xe7\x89\xb9\xe6\x95\x88\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE_DOF6_POSTION_PARA>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayWpos_MetaData[] = {
		{ "Category", "UE_DOF6_POSTION_PARA" },
		{ "Comment", "//W\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "W\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayWpos = { "I32PlayWpos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_POSTION_PARA, I32PlayWpos), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayWpos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayWpos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayVpos_MetaData[] = {
		{ "Category", "UE_DOF6_POSTION_PARA" },
		{ "Comment", "//V\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "V\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayVpos = { "I32PlayVpos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_POSTION_PARA, I32PlayVpos), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayVpos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayVpos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayUpos_MetaData[] = {
		{ "Category", "UE_DOF6_POSTION_PARA" },
		{ "Comment", "//U\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "U\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayUpos = { "I32PlayUpos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_POSTION_PARA, I32PlayUpos), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayUpos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayUpos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayZpos_MetaData[] = {
		{ "Category", "UE_DOF6_POSTION_PARA" },
		{ "Comment", "//Z\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "Z\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayZpos = { "I32PlayZpos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_POSTION_PARA, I32PlayZpos), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayZpos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayZpos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayYpos_MetaData[] = {
		{ "Category", "UE_DOF6_POSTION_PARA" },
		{ "Comment", "//Y\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "Y\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayYpos = { "I32PlayYpos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_POSTION_PARA, I32PlayYpos), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayYpos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayYpos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayXpos_MetaData[] = {
		{ "Category", "UE_DOF6_POSTION_PARA" },
		{ "Comment", "//X\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "X\xe8\xbd\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayXpos = { "I32PlayXpos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_POSTION_PARA, I32PlayXpos), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayXpos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayXpos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayWpos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayVpos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayUpos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayZpos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayYpos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::NewProp_I32PlayXpos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mbox,
		nullptr,
		&NewStructOps,
		"UE_DOF6_POSTION_PARA",
		sizeof(FUE_DOF6_POSTION_PARA),
		alignof(FUE_DOF6_POSTION_PARA),
		Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Mbox();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UE_DOF6_POSTION_PARA"), sizeof(FUE_DOF6_POSTION_PARA), Get_Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_POSTION_PARA_Hash() { return 2871048648U; }
class UScriptStruct* FUE_DOF6_CUE_PARA::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MBOX_API uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA, Z_Construct_UPackage__Script_Mbox(), TEXT("UE_DOF6_CUE_PARA"), sizeof(FUE_DOF6_CUE_PARA), Get_Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Hash());
	}
	return Singleton;
}
template<> MBOX_API UScriptStruct* StaticStruct<FUE_DOF6_CUE_PARA>()
{
	return FUE_DOF6_CUE_PARA::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUE_DOF6_CUE_PARA(FUE_DOF6_CUE_PARA::StaticStruct, TEXT("/Script/Mbox"), TEXT("UE_DOF6_CUE_PARA"), false, nullptr, nullptr);
static struct FScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_CUE_PARA
{
	FScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_CUE_PARA()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UE_DOF6_CUE_PARA")),new UScriptStruct::TCppStructOps<FUE_DOF6_CUE_PARA>);
	}
} ScriptStruct_Mbox_StaticRegisterNativesFUE_DOF6_CUE_PARA;
	struct Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32K8_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32K8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32K7_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32K7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32K6_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32K6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32K5_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32K5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32K4_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32K4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32K3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32K3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32K2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32K2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32K1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32K1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32C8_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32C8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32C7_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32C7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32C6_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32C6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32C5_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32C5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32C4_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32C4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32C3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32C3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32C2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32C2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32C1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32C1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32T8_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32T8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32T7_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32T7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32T6_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32T6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32T5_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32T5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32T4_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32T4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32T3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32T3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32T2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32T2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F32T1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_F32T1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\xe8\xbf\x99\xe4\xba\x9b\xe5\x8f\x82\xe6\x95\xb0\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x9a\x82\xe7\x94\xa8\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xef\xbc\x81*/" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\xe8\xbf\x99\xe4\xba\x9b\xe5\x8f\x82\xe6\x95\xb0\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x9a\x82\xe7\x94\xa8\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xef\xbc\x81" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE_DOF6_CUE_PARA>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K8_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""8 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""8" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K8 = { "F32K8", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32K8), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K7_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""7 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""7" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K7 = { "F32K7", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32K7), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K7_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K6_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""6 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K6 = { "F32K6", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32K6), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K5_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""5 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K5 = { "F32K5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32K5), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K4_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""4 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""4" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K4 = { "F32K4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32K4), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K3_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""3 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K3 = { "F32K3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32K3), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K2_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""2 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K2 = { "F32K2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32K2), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K1_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""1 */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\xaf\x94\xe4\xbe\x8b\xe5\x9b\xa0\xe5\xad\x90""1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K1 = { "F32K1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32K1), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C8_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""8   */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""8" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C8 = { "F32C8", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32C8), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C7_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""7   */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""7" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C7 = { "F32C7", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32C7), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C7_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C6_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""6   */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C6 = { "F32C6", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32C6), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C5_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""5   */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C5 = { "F32C5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32C5), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C4_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""4   */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""4" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C4 = { "F32C4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32C4), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C3_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""3   */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C3 = { "F32C3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32C3), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C2_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""2   */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C2 = { "F32C2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32C2), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C1_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""1   */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc""1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C1 = { "F32C1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32C1), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T8_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T8  */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T8" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T8 = { "F32T8", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32T8), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T7_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T7  */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T7" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T7 = { "F32T7", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32T7), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T7_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T6_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T6  */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T6 = { "F32T6", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32T6), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T5_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T5  */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T5 = { "F32T5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32T5), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T4_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/*  \xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T4  */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T4" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T4 = { "F32T4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32T4), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T3_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe6\x97\xb6\xe9\x97\xb4 T3  */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4 T3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T3 = { "F32T3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32T3), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T2_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T2   */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T2 = { "F32T2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32T2), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T1_MetaData[] = {
		{ "Category", "UE_DOF6_CUE_PARA" },
		{ "Comment", "/* \xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T1  */" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4\xe5\x9b\xa0\xe5\xad\x90 T1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T1 = { "F32T1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE_DOF6_CUE_PARA, F32T1), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32K1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32C1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::NewProp_F32T1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mbox,
		nullptr,
		&NewStructOps,
		"UE_DOF6_CUE_PARA",
		sizeof(FUE_DOF6_CUE_PARA),
		alignof(FUE_DOF6_CUE_PARA),
		Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Mbox();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UE_DOF6_CUE_PARA"), sizeof(FUE_DOF6_CUE_PARA), Get_Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUE_DOF6_CUE_PARA_Hash() { return 3516265522U; }
class UScriptStruct* FMboxFXStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MBOX_API uint32 Get_Z_Construct_UScriptStruct_FMboxFXStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMboxFXStruct, Z_Construct_UPackage__Script_Mbox(), TEXT("MboxFXStruct"), sizeof(FMboxFXStruct), Get_Z_Construct_UScriptStruct_FMboxFXStruct_Hash());
	}
	return Singleton;
}
template<> MBOX_API UScriptStruct* StaticStruct<FMboxFXStruct>()
{
	return FMboxFXStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMboxFXStruct(FMboxFXStruct::StaticStruct, TEXT("/Script/Mbox"), TEXT("MboxFXStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Mbox_StaticRegisterNativesFMboxFXStruct
{
	FScriptStruct_Mbox_StaticRegisterNativesFMboxFXStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MboxFXStruct")),new UScriptStruct::TCppStructOps<FMboxFXStruct>);
	}
} ScriptStruct_Mbox_StaticRegisterNativesFMboxFXStruct;
	struct Z_Construct_UScriptStruct_FMboxFXStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fire_MetaData[];
#endif
		static void NewProp_Fire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowFire_MetaData[];
#endif
		static void NewProp_FlowFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FlowFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lightning_MetaData[];
#endif
		static void NewProp_Lightning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Lightning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rain_MetaData[];
#endif
		static void NewProp_Rain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Rain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wind_MetaData[];
#endif
		static void NewProp_Wind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Wind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Smoke_MetaData[];
#endif
		static void NewProp_Smoke_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Smoke;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMboxFXStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMboxFXStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Fire_MetaData[] = {
		{ "Category", "MboxFXStruct" },
		{ "Comment", "//\xe7\x81\xab\xe7\x84\xb0\xe7\x81\xaf\xe5\xbc\x80\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe7\x81\xab\xe7\x84\xb0\xe7\x81\xaf\xe5\xbc\x80\xe5\x85\xb3" },
	};
#endif
	void Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Fire_SetBit(void* Obj)
	{
		((FMboxFXStruct*)Obj)->Fire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Fire = { "Fire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMboxFXStruct), &Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Fire_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Fire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Fire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_FlowFire_MetaData[] = {
		{ "Category", "MboxFXStruct" },
		{ "Comment", "//\xe7\x81\xab\xe5\xb1\xb1\xe7\x81\xaf\xe5\x85\x89\xe5\xbc\x80\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe7\x81\xab\xe5\xb1\xb1\xe7\x81\xaf\xe5\x85\x89\xe5\xbc\x80\xe5\x85\xb3" },
	};
#endif
	void Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_FlowFire_SetBit(void* Obj)
	{
		((FMboxFXStruct*)Obj)->FlowFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_FlowFire = { "FlowFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMboxFXStruct), &Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_FlowFire_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_FlowFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_FlowFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Lightning_MetaData[] = {
		{ "Category", "MboxFXStruct" },
		{ "Comment", "//\xe9\x97\xaa\xe7\x94\xb5\xe5\xbc\x80\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe9\x97\xaa\xe7\x94\xb5\xe5\xbc\x80\xe5\x85\xb3" },
	};
#endif
	void Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Lightning_SetBit(void* Obj)
	{
		((FMboxFXStruct*)Obj)->Lightning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Lightning = { "Lightning", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMboxFXStruct), &Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Lightning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Lightning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Lightning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Rain_MetaData[] = {
		{ "Category", "MboxFXStruct" },
		{ "Comment", "//\xe4\xb8\x8b\xe9\x9b\xa8\xe5\xbc\x80\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe4\xb8\x8b\xe9\x9b\xa8\xe5\xbc\x80\xe5\x85\xb3" },
	};
#endif
	void Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Rain_SetBit(void* Obj)
	{
		((FMboxFXStruct*)Obj)->Rain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Rain = { "Rain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMboxFXStruct), &Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Rain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Rain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Rain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Wind_MetaData[] = {
		{ "Category", "MboxFXStruct" },
		{ "Comment", "//\xe9\xa3\x8e\xe6\x9c\xba\xe5\xbc\x80\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe9\xa3\x8e\xe6\x9c\xba\xe5\xbc\x80\xe5\x85\xb3" },
	};
#endif
	void Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Wind_SetBit(void* Obj)
	{
		((FMboxFXStruct*)Obj)->Wind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Wind = { "Wind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMboxFXStruct), &Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Wind_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Wind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Wind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Smoke_MetaData[] = {
		{ "Category", "MboxFXStruct" },
		{ "Comment", "//\xe7\x83\x9f\xe9\x9b\xbe\xe5\xbc\x80\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/Misc.h" },
		{ "ToolTip", "\xe7\x83\x9f\xe9\x9b\xbe\xe5\xbc\x80\xe5\x85\xb3" },
	};
#endif
	void Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Smoke_SetBit(void* Obj)
	{
		((FMboxFXStruct*)Obj)->Smoke = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Smoke = { "Smoke", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMboxFXStruct), &Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Smoke_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Smoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Smoke_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMboxFXStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Fire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_FlowFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Lightning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Rain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Wind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMboxFXStruct_Statics::NewProp_Smoke,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMboxFXStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mbox,
		nullptr,
		&NewStructOps,
		"MboxFXStruct",
		sizeof(FMboxFXStruct),
		alignof(FMboxFXStruct),
		Z_Construct_UScriptStruct_FMboxFXStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMboxFXStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMboxFXStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMboxFXStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Mbox();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MboxFXStruct"), sizeof(FMboxFXStruct), Get_Z_Construct_UScriptStruct_FMboxFXStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMboxFXStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMboxFXStruct_Hash() { return 368790958U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
