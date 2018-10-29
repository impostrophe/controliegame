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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMy_AIS_EnvQueryTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMy_AIS_EnvQueryTest_Statics::ClassParams = {
		&UMy_AIS_EnvQueryTest::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UMy_AIS_EnvQueryTest, 1114200595);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMy_AIS_EnvQueryTest(Z_Construct_UClass_UMy_AIS_EnvQueryTest, &UMy_AIS_EnvQueryTest::StaticClass, TEXT("/Script/ControliePractice"), TEXT("UMy_AIS_EnvQueryTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMy_AIS_EnvQueryTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
