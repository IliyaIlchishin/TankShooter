// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankgedon/TankPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	TANKGEDON_API UClass* Z_Construct_UClass_ATankPlayerController();
	TANKGEDON_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tankgedon();
// End Cross Module References
	void ATankPlayerController::StaticRegisterNativesATankPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankPlayerController);
	UClass* Z_Construct_UClass_ATankPlayerController_NoRegister()
	{
		return ATankPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATankPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankgedon,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TankPlayerController.h" },
		{ "ModuleRelativePath", "TankPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankPlayerController_Statics::ClassParams = {
		&ATankPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATankPlayerController()
	{
		if (!Z_Registration_Info_UClass_ATankPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankPlayerController.OuterSingleton, Z_Construct_UClass_ATankPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankPlayerController.OuterSingleton;
	}
	template<> TANKGEDON_API UClass* StaticClass<ATankPlayerController>()
	{
		return ATankPlayerController::StaticClass();
	}
	ATankPlayerController::ATankPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
	ATankPlayerController::~ATankPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Projects_TankShooter_Tankgedon_Source_Tankgedon_TankPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TankShooter_Tankgedon_Source_Tankgedon_TankPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankPlayerController, ATankPlayerController::StaticClass, TEXT("ATankPlayerController"), &Z_Registration_Info_UClass_ATankPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankPlayerController), 17559228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TankShooter_Tankgedon_Source_Tankgedon_TankPlayerController_h_3233859951(TEXT("/Script/Tankgedon"),
		Z_CompiledInDeferFile_FID_Projects_TankShooter_Tankgedon_Source_Tankgedon_TankPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TankShooter_Tankgedon_Source_Tankgedon_TankPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
