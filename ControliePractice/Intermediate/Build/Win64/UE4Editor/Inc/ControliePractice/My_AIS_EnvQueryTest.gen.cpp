// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControliePractice/My_AIS_EnvQueryTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_AIS_EnvQueryTest() {}
// Cross Module References
	CONTROLIEPRACTICE_API UClass* Z_Construct_UClass_UMy_AIS_EnvQueryTest_NoRegister();
	CONTROLIEPRACTICE_API UClass* Z_Construct_UClass_UMy_AIS_EnvQueryTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_ControliePractice();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
// End Cross Module References
	void UMy_AIS_EnvQueryTest::StaticRegisterNativesUMy_AIS_EnvQueryTest()
	{
	}
	UClass* Z_Construct_UClass_UMy_AIS_EnvQueryTest_NoRegister()
	{
		return UMy_AIS_EnvQueryTest::StaticClass();
	}
	struct Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeededStatIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeededStatIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_ControliePractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "My_AIS_EnvQueryTest.h" },
		{ "ModuleRelativePath", "My_AIS_EnvQueryTest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::NewProp_NeededStatIndex_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "My_AIS_EnvQueryTest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::NewProp_NeededStatIndex = { UE4CodeGen_Private::EPropertyClass::Struct, "NeededStatIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000010001, 1, nullptr, STRUCT_OFFSET(UMy_AIS_EnvQueryTest, NeededStatIndex), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::NewProp_NeededStatIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::NewProp_NeededStatIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::NewProp_NeededStatIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMy_AIS_EnvQueryTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::ClassParams = {
		&UMy_AIS_EnvQueryTest::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMy_AIS_EnvQueryTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMy_AIS_EnvQueryTest, 2267485453);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMy_AIS_EnvQueryTest(Z_Construct_UClass_UMy_AIS_EnvQueryTest, &UMy_AIS_EnvQueryTest::StaticClass, TEXT("/Script/ControliePractice"), TEXT("UMy_AIS_EnvQueryTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMy_AIS_EnvQueryTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
