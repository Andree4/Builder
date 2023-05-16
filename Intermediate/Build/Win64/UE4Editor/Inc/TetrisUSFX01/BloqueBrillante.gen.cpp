// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BloqueBrillante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBrillante() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueBrillante_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueBrillante();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APieza_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPiezaBuilder_NoRegister();
// End Cross Module References
	void ABloqueBrillante::StaticRegisterNativesABloqueBrillante()
	{
	}
	UClass* Z_Construct_UClass_ABloqueBrillante_NoRegister()
	{
		return ABloqueBrillante::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueBrillante_Statics
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
	UObject* (*const Z_Construct_UClass_ABloqueBrillante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueBrillante_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueBrillante.h" },
		{ "ModuleRelativePath", "BloqueBrillante.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueBrillante_Statics::NewProp_Pieza_MetaData[] = {
		{ "Comment", "//The Lodging Actor\n" },
		{ "ModuleRelativePath", "BloqueBrillante.h" },
		{ "ToolTip", "The Lodging Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueBrillante_Statics::NewProp_Pieza = { "Pieza", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloqueBrillante, Pieza), Z_Construct_UClass_APieza_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloqueBrillante_Statics::NewProp_Pieza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBrillante_Statics::NewProp_Pieza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueBrillante_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBrillante_Statics::NewProp_Pieza,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueBrillante_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPiezaBuilder_NoRegister, (int32)VTABLE_OFFSET(ABloqueBrillante, IPiezaBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueBrillante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBrillante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBrillante_Statics::ClassParams = {
		&ABloqueBrillante::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABloqueBrillante_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBrillante_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloqueBrillante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBrillante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueBrillante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueBrillante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueBrillante, 364641961);
	template<> TETRISUSFX01_API UClass* StaticClass<ABloqueBrillante>()
	{
		return ABloqueBrillante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueBrillante(Z_Construct_UClass_ABloqueBrillante, &ABloqueBrillante::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABloqueBrillante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBrillante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
