// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishTank/Public/AC_SpinAndBob.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_SpinAndBob() {}
// Cross Module References
	FISHTANK_API UClass* Z_Construct_UClass_UAC_SpinAndBob_NoRegister();
	FISHTANK_API UClass* Z_Construct_UClass_UAC_SpinAndBob();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FishTank();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UAC_SpinAndBob::StaticRegisterNativesUAC_SpinAndBob()
	{
	}
	UClass* Z_Construct_UClass_UAC_SpinAndBob_NoRegister()
	{
		return UAC_SpinAndBob::StaticClass();
	}
	struct Z_Construct_UClass_UAC_SpinAndBob_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bob_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BobSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BobSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAC_SpinAndBob_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FishTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_SpinAndBob_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_SpinAndBob.h" },
		{ "ModuleRelativePath", "Public/AC_SpinAndBob.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_Spin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AC_SpinAndBob.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_Spin = { "Spin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAC_SpinAndBob, Spin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_Spin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_Spin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_Bob_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AC_SpinAndBob.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_Bob = { "Bob", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAC_SpinAndBob, Bob), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_Bob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_Bob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_BobSpeedMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AC_SpinAndBob.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_BobSpeedMultiplier = { "BobSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAC_SpinAndBob, BobSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_BobSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_BobSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_SpinAndBob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_Spin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_Bob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SpinAndBob_Statics::NewProp_BobSpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAC_SpinAndBob_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_SpinAndBob>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAC_SpinAndBob_Statics::ClassParams = {
		&UAC_SpinAndBob::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAC_SpinAndBob_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAC_SpinAndBob_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAC_SpinAndBob_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_SpinAndBob_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAC_SpinAndBob()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAC_SpinAndBob_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAC_SpinAndBob, 1733183376);
	template<> FISHTANK_API UClass* StaticClass<UAC_SpinAndBob>()
	{
		return UAC_SpinAndBob::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAC_SpinAndBob(Z_Construct_UClass_UAC_SpinAndBob, &UAC_SpinAndBob::StaticClass, TEXT("/Script/FishTank"), TEXT("UAC_SpinAndBob"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_SpinAndBob);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
