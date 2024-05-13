// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_Adapter/Bounce_Ball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBounce_Ball() {}
// Cross Module References
	GALAGA_USFX_ADAPTER_API UClass* Z_Construct_UClass_UBounce_Ball_NoRegister();
	GALAGA_USFX_ADAPTER_API UClass* Z_Construct_UClass_UBounce_Ball();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_Adapter();
// End Cross Module References
	void UBounce_Ball::StaticRegisterNativesUBounce_Ball()
	{
	}
	UClass* Z_Construct_UClass_UBounce_Ball_NoRegister()
	{
		return UBounce_Ball::StaticClass();
	}
	struct Z_Construct_UClass_UBounce_Ball_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBounce_Ball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_Adapter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBounce_Ball_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bounce_Ball.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBounce_Ball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBounce_Ball>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBounce_Ball_Statics::ClassParams = {
		&UBounce_Ball::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBounce_Ball_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBounce_Ball_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBounce_Ball()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBounce_Ball_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBounce_Ball, 1188319802);
	template<> GALAGA_USFX_ADAPTER_API UClass* StaticClass<UBounce_Ball>()
	{
		return UBounce_Ball::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBounce_Ball(Z_Construct_UClass_UBounce_Ball, &UBounce_Ball::StaticClass, TEXT("/Script/Galaga_USFX_Adapter"), TEXT("UBounce_Ball"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBounce_Ball);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
