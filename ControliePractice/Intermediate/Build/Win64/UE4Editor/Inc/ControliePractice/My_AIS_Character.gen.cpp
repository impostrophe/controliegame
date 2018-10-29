// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControliePractice/My_AIS_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_AIS_Character() {}
// Cross Module References
	CONTROLIEPRACTICE_API UClass* Z_Construct_UClass_AMy_AIS_Character_NoRegister();
	CONTROLIEPRACTICE_API UClass* Z_Construct_UClass_AMy_AIS_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ControliePractice();
// End Cross Module References
	void AMy_AIS_Character::StaticRegisterNativesAMy_AIS_Character()
	{
	}
	UClass* Z_Construct_UClass_AMy_AIS_Character_NoRegister()
	{
		return AMy_AIS_Character::StaticClass();
	}
	struct Z_Construct_UClass_AMy_AIS_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatDesirability_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatDesirability;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatDesirability_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMy_AIS_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ControliePractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMy_AIS_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "My_AIS_Character.h" },
		{ "ModuleRelativePath", "My_AIS_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMy_AIS_Character_Statics::NewProp_StatDesirability_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "My_AIS_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMy_AIS_Character_Statics::NewProp_StatDesirability = { UE4CodeGen_Private::EPropertyClass::Array, "StatDesirability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMy_AIS_Character, StatDesirability), METADATA_PARAMS(Z_Construct_UClass_AMy_AIS_Character_Statics::NewProp_StatDesirability_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMy_AIS_Character_Statics::NewProp_StatDesirability_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMy_AIS_Character_Statics::NewProp_StatDesirability_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "StatDesirability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMy_AIS_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMy_AIS_Character_Statics::NewProp_StatDesirability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMy_AIS_Character_Statics::NewProp_StatDesirability_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMy_AIS_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMy_AIS_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMy_AIS_Character_Statics::ClassParams = {
		&AMy_AIS_Character::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMy_AIS_Character_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMy_AIS_Character_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMy_AIS_Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMy_AIS_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMy_AIS_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMy_AIS_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMy_AIS_Character, 4026349003);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMy_AIS_Character(Z_Construct_UClass_AMy_AIS_Character, &AMy_AIS_Character::StaticClass, TEXT("/Script/ControliePractice"), TEXT("AMy_AIS_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMy_AIS_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
