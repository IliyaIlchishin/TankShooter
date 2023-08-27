// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankgedon/TankgedonGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankgedonGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TANKGEDON_API UClass* Z_Construct_UClass_ATankgedonGameModeBase();
	TANKGEDON_API UClass* Z_Construct_UClass_ATankgedonGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tankgedon();
// End Cross Module References
	void ATankgedonGameModeBase::StaticRegisterNativesATankgedonGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankgedonGameModeBase);
	UClass* Z_Construct_UClass_ATankgedonGameModeBase_NoRegister()
	{
		return ATankgedonGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATankgedonGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankgedonGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankgedon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATankgedonGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankgedonGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TankgedonGameModeBase.h" },
		{ "ModuleRelativePath", "TankgedonGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankgedonGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankgedonGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankgedonGameModeBase_Statics::ClassParams = {
		&ATankgedonGameModeBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATankgedonGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATankgedonGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATankgedonGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATankgedonGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankgedonGameModeBase.OuterSingleton, Z_Construct_UClass_ATankgedonGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankgedonGameModeBase.OuterSingleton;
	}
	template<> TANKGEDON_API UClass* StaticClass<ATankgedonGameModeBase>()
	{
		return ATankgedonGameModeBase::StaticClass();
	}
	ATankgedonGameModeBase::ATankgedonGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankgedonGameModeBase);
	ATankgedonGameModeBase::~ATankgedonGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Projects_TankShooter_Tankgedon_Source_Tankgedon_TankgedonGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TankShooter_Tankgedon_Source_Tankgedon_TankgedonGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankgedonGameModeBase, ATankgedonGameModeBase::StaticClass, TEXT("ATankgedonGameModeBase"), &Z_Registration_Info_UClass_ATankgedonGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankgedonGameModeBase), 1070079342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TankShooter_Tankgedon_Source_Tankgedon_TankgedonGameModeBase_h_129290442(TEXT("/Script/Tankgedon"),
		Z_CompiledInDeferFile_FID_Projects_TankShooter_Tankgedon_Source_Tankgedon_TankgedonGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TankShooter_Tankgedon_Source_Tankgedon_TankgedonGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
