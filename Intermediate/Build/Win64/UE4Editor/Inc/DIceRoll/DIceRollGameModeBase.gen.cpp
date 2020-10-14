// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DIceRoll/DIceRollGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDIceRollGameModeBase() {}
// Cross Module References
	DICEROLL_API UClass* Z_Construct_UClass_ADIceRollGameModeBase_NoRegister();
	DICEROLL_API UClass* Z_Construct_UClass_ADIceRollGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DIceRoll();
// End Cross Module References
	void ADIceRollGameModeBase::StaticRegisterNativesADIceRollGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADIceRollGameModeBase_NoRegister()
	{
		return ADIceRollGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADIceRollGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADIceRollGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DIceRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADIceRollGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DIceRollGameModeBase.h" },
		{ "ModuleRelativePath", "DIceRollGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADIceRollGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADIceRollGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADIceRollGameModeBase_Statics::ClassParams = {
		&ADIceRollGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADIceRollGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADIceRollGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADIceRollGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADIceRollGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADIceRollGameModeBase, 1178628286);
	template<> DICEROLL_API UClass* StaticClass<ADIceRollGameModeBase>()
	{
		return ADIceRollGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADIceRollGameModeBase(Z_Construct_UClass_ADIceRollGameModeBase, &ADIceRollGameModeBase::StaticClass, TEXT("/Script/DIceRoll"), TEXT("ADIceRollGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADIceRollGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
