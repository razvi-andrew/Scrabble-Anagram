// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scrabble_Last_Hope/Scrabble_Last_HopeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrabble_Last_HopeGameModeBase() {}
// Cross Module References
	SCRABBLE_LAST_HOPE_API UClass* Z_Construct_UClass_AScrabble_Last_HopeGameModeBase_NoRegister();
	SCRABBLE_LAST_HOPE_API UClass* Z_Construct_UClass_AScrabble_Last_HopeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Scrabble_Last_Hope();
// End Cross Module References
	void AScrabble_Last_HopeGameModeBase::StaticRegisterNativesAScrabble_Last_HopeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AScrabble_Last_HopeGameModeBase_NoRegister()
	{
		return AScrabble_Last_HopeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AScrabble_Last_HopeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScrabble_Last_HopeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Scrabble_Last_Hope,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScrabble_Last_HopeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Scrabble_Last_HopeGameModeBase.h" },
		{ "ModuleRelativePath", "Scrabble_Last_HopeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScrabble_Last_HopeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScrabble_Last_HopeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScrabble_Last_HopeGameModeBase_Statics::ClassParams = {
		&AScrabble_Last_HopeGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AScrabble_Last_HopeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScrabble_Last_HopeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScrabble_Last_HopeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScrabble_Last_HopeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScrabble_Last_HopeGameModeBase, 1399028563);
	template<> SCRABBLE_LAST_HOPE_API UClass* StaticClass<AScrabble_Last_HopeGameModeBase>()
	{
		return AScrabble_Last_HopeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScrabble_Last_HopeGameModeBase(Z_Construct_UClass_AScrabble_Last_HopeGameModeBase, &AScrabble_Last_HopeGameModeBase::StaticClass, TEXT("/Script/Scrabble_Last_Hope"), TEXT("AScrabble_Last_HopeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScrabble_Last_HopeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
