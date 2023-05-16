// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BloqueMetalico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueMetalico() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueMetalico_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueMetalico();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APieza_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPiezaBuilder_NoRegister();
// End Cross Module References
	void ABloqueMetalico::StaticRegisterNativesABloqueMetalico()
	{
	}
	UClass* Z_Construct_UClass_ABloqueMetalico_NoRegister()
	{
		return ABloqueMetalico::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueMetalico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pieza_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pieza;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueMetalico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueMetalico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueMetalico.h" },
		{ "ModuleRelativePath", "BloqueMetalico.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueMetalico_Statics::NewProp_Pieza_MetaData[] = {
		{ "Comment", "//The Lodging Actor\n" },
		{ "ModuleRelativePath", "BloqueMetalico.h" },
		{ "ToolTip", "The Lodging Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueMetalico_Statics::NewProp_Pieza = { "Pieza", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloqueMetalico, Pieza), Z_Construct_UClass_APieza_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloqueMetalico_Statics::NewProp_Pieza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMetalico_Statics::NewProp_Pieza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueMetalico_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueMetalico_Statics::NewProp_Pieza,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueMetalico_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPiezaBuilder_NoRegister, (int32)VTABLE_OFFSET(ABloqueMetalico, IPiezaBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueMetalico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueMetalico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueMetalico_Statics::ClassParams = {
		&ABloqueMetalico::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABloqueMetalico_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMetalico_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloqueMetalico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMetalico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueMetalico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueMetalico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueMetalico, 416287005);
	template<> TETRISUSFX01_API UClass* StaticClass<ABloqueMetalico>()
	{
		return ABloqueMetalico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueMetalico(Z_Construct_UClass_ABloqueMetalico, &ABloqueMetalico::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABloqueMetalico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueMetalico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
