// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FishTank/Public/UAC_TeleportActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUAC_TeleportActor() {}
// Cross Module References
	FISHTANK_API UClass* Z_Construct_UClass_UUAC_TeleportActor_NoRegister();
	FISHTANK_API UClass* Z_Construct_UClass_UUAC_TeleportActor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FishTank();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void UUAC_TeleportActor::StaticRegisterNativesUUAC_TeleportActor()
	{
	}
	UClass* Z_Construct_UClass_UUAC_TeleportActor_NoRegister()
	{
		return UUAC_TeleportActor::StaticClass();
	}
	struct Z_Construct_UClass_UUAC_TeleportActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_col_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_col;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUAC_TeleportActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FishTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUAC_TeleportActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UAC_TeleportActor.h" },
		{ "ModuleRelativePath", "Public/UAC_TeleportActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_maxX_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// X and Y bounds of level\n" },
		{ "ModuleRelativePath", "Public/UAC_TeleportActor.h" },
		{ "ToolTip", "X and Y bounds of level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_maxX = { "maxX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUAC_TeleportActor, maxX), METADATA_PARAMS(Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_maxX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_maxX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_maxY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UAC_TeleportActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_maxY = { "maxY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUAC_TeleportActor, maxY), METADATA_PARAMS(Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_maxY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_maxY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_col_MetaData[] = {
		{ "Category", "Colliders" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UAC_TeleportActor.h" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUAC_TeleportActor, col), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_col_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_col_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_parent_MetaData[] = {
		{ "Category", "Colliders" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UAC_TeleportActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUAC_TeleportActor, parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUAC_TeleportActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_maxX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_maxY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUAC_TeleportActor_Statics::NewProp_parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUAC_TeleportActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUAC_TeleportActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUAC_TeleportActor_Statics::ClassParams = {
		&UUAC_TeleportActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUAC_TeleportActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUAC_TeleportActor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUAC_TeleportActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUAC_TeleportActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUAC_TeleportActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUAC_TeleportActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUAC_TeleportActor, 2180749532);
	template<> FISHTANK_API UClass* StaticClass<UUAC_TeleportActor>()
	{
		return UUAC_TeleportActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUAC_TeleportActor(Z_Construct_UClass_UUAC_TeleportActor, &UUAC_TeleportActor::StaticClass, TEXT("/Script/FishTank"), TEXT("UUAC_TeleportActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUAC_TeleportActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
