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

USTRUCT(BlueprintType)
struct FStruct_PDAS_Attribute_Named : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Attribute Name and Attribute Value

	//Punal Manalan, NOTE: Attribute Name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Attribute")
	FString Name = "Default";

	//Punal Manalan, NOTE: Attribute Value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Attribute")
	FStruct_PDAS_Attribute Attribute;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};

USTRUCT(BlueprintType)
struct FStruct_PDAS_Attributes_Map_By_Name
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Map of ttributes Map by Name(FString)

	//Punal Manalan, NOTE: Attributes Map by Name(FString)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Attribute")
	TMap<FString,FStruct_PDAS_Attribute Attribute> Attributes;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};