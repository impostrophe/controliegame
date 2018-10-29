// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControliePractice/MyActorStatItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorStatItem() {}
// Cross Module References
	CONTROLIEPRACTICE_API UClass* Z_Construct_UClass_AMyActorStatItem_NoRegister();
	CONTROLIEPRACTICE_API UClass* Z_Construct_UClass_AMyActorStatItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ControliePractice();
// End Cross Module References
	void AMyActorStatItem::StaticRegisterNativesAMyActorStatItem()
	{
	}
	UClass* Z_Construct_UClass_AMyActorStatItem_NoRegister()
	{
		return AMyActorStatItem::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorStatItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatRestore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatRestore;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StatRestore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryStatIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrimaryStatIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorStatItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ControliePractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorStatItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorStatItem.h" },
		{ "ModuleRelativePath", "MyActorStatItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_StatRestore_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyActorStatItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_StatRestore = { UE4CodeGen_Private::EPropertyClass::Array, "StatRestore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyActorStatItem, StatRestore), METADATA_PARAMS(Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_StatRestore_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_StatRestore_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_StatRestore_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "StatRestore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_PrimaryStatIndex_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyActorStatItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_PrimaryStatIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PrimaryStatIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyActorStatItem, PrimaryStatIndex), METADATA_PARAMS(Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_PrimaryStatIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_PrimaryStatIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorStatItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_StatRestore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_StatRestore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorStatItem_Statics::NewProp_PrimaryStatIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorStatItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorStatItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActorStatItem_Statics::ClassParams = {
		&AMyActorStatItem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMyActorStatItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyActorStatItem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyActorStatItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyActorStatItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActorStatItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActorStatItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActorStatItem, 954322572);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActorStatItem(Z_Construct_UClass_AMyActorStatItem, &AMyActorStatItem::StaticClass, TEXT("/Script/ControliePractice"), TEXT("AMyActorStatItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorStatItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
