//By Punal Manalan 2025

#pragma once

#ifndef DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Struct_Collection
#define DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Struct_Collection
#endif // !DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Struct_Collection

#include "CoreMinimal.h"
//#include "GameplayEffect.h"
////#include "GameplayEffectExtension.h"
//#include "Abilities/GameplayAbility.h"
//#ifndef DEFINED_HEADER_SOME_HEADER_MARCO_IDENTIFIER
//#include "../SOME_HEADER.h"
//#endif // !DEFINED_HEADER_SOME_HEADER_MARCO_IDENTIFIER
#include "P_Punal_DynamicAbilitySystem_Struct_Collection.generated.h"

USTRUCT(BlueprintType)
struct FStruct_PDAS_Attribute : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==
	
	//Punal Manalan,
	//NOTE: 
	//Base and Current float Value for an Attribute

	//Punal Manalan, NOTE: Base Value of Attribute in float
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Attribute")
	float Base = 0.0f;

	//Punal Manalan, NOTE: Current Value of Attribute in float
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Attribute")
	float Current = 0.0f;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};