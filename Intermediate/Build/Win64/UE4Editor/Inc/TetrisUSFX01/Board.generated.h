// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETRISUSFX01_Board_generated_h
#error "Board.generated.h already included, missing '#pragma once' in Board.h"
#endif
#define TETRISUSFX01_Board_generated_h

#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_SPARSE_DATA
#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_RPC_WRAPPERS
#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoard(); \
	friend struct Z_Construct_UClass_ABoard_Statics; \
public: \
	DECLARE_CLASS(ABoard, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), NO_API) \
	DECLARE_SERIALIZER(ABoard)


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABoard(); \
	friend struct Z_Construct_UClass_ABoard_Statics; \
public: \
	DECLARE_CLASS(ABoard, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), NO_API) \
	DECLARE_SERIALIZER(ABoard)


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoard(ABoard&&); \
	NO_API ABoard(const ABoard&); \
public:


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoard(ABoard&&); \
	NO_API ABoard(const ABoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoard)


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BloqueBrillante() { return STRUCT_OFFSET(ABoard, BloqueBrillante); } \
	FORCEINLINE static uint32 __PPO__BloqueDorado() { return STRUCT_OFFSET(ABoard, BloqueDorado); } \
	FORCEINLINE static uint32 __PPO__BloqueMetalico() { return STRUCT_OFFSET(ABoard, BloqueMetalico); } \
	FORCEINLINE static uint32 __PPO__BloqueHielo() { return STRUCT_OFFSET(ABoard, BloqueHielo); } \
	FORCEINLINE static uint32 __PPO__BloquePiedra() { return STRUCT_OFFSET(ABoard, BloquePiedra); } \
	FORCEINLINE static uint32 __PPO__BloqueMulticolor() { return STRUCT_OFFSET(ABoard, BloqueMulticolor); } \
	FORCEINLINE static uint32 __PPO__PiezaDirector() { return STRUCT_OFFSET(ABoard, PiezaDirector); }


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_12_PROLOG
#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_PRIVATE_PROPERTY_OFFSET \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_SPARSE_DATA \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_RPC_WRAPPERS \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_INCLASS \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_PRIVATE_PROPERTY_OFFSET \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_SPARSE_DATA \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_INCLASS_NO_PURE_DECLS \
	TetrisUSFX01_master_Source_TetrisUSFX01_Board_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETRISUSFX01_API UClass* StaticClass<class ABoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TetrisUSFX01_master_Source_TetrisUSFX01_Board_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
