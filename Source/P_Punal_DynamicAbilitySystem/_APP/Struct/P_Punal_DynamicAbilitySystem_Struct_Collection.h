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
struct FStruct_PDAS_Attributes_Map_By_Name : public FTableRowBase
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
	TMap<FString,FStruct_PDAS_Attribute> Attributes;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};

USTRUCT(BlueprintType)
struct FStruct_PDAS_Use_Eligibility : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains List of Conditions used to Check, if Eligible to use.

	//Punal Manalan, NOTE: Script to Check if usable, This Script is Run First, Usually JSON Script
	//For Example This is Usable, but in Certain Parts of Map it Can not Be, or If Different Team
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Condition")
	FString Ability_Usable_Check_By_Script = "{}";

	//Punal Manalan, NOTE: If These Tags are Present Then Blocking Tags Check is Fully Ignored.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Condition")
	TArray<FString> Bypass_Blocking_Tags;

	//Punal Manalan, NOTE: Tags Blocking this.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Condition")
	TArray<FString> Blocking_Tags;

	//Punal Manalan, NOTE: If Blocking Tags are Bypassed then, Instead of Required_Tags, Bypass_Required_Tags will be used.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Condition")
	TArray<FString> Bypass_Required_Tags;

	//Punal Manalan, NOTE: Tags Required by this.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Condition")
	TArray<FString> Required_Tags;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};

USTRUCT(BlueprintType)
struct FStruct_PDAS_Ability_Cost : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Ability Cost

	//Punal Manalan, NOTE: Required Eligibility in order to Use this Ability
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FStruct_PDAS_Use_Eligibility Required_Eligibility;

	//Punal Manalan, NOTE: Ability Cost by Stats
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FStruct_PDAS_Attributes_Map_By_Name Cost_By_Stats;

	//Punal Manalan, NOTE: Ability Cost by Script, Usually JSON Script
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FString Cost_By_Script = "{}";

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};

USTRUCT(BlueprintType)
struct FStruct_PDAS_Ability_Effect : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Ability Effect

	//Punal Manalan, NOTE: Required Eligibility in order for this Effect to be Applied
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FStruct_PDAS_Use_Eligibility Required_Eligibility;

	//Punal Manalan, NOTE: Ability Effect by Stats
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FStruct_PDAS_Attributes_Map_By_Name Effect_By_Stats;

	//Punal Manalan, NOTE: Ability Effect by Script, Usually JSON Script
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FString Effect_By_Script = "{}";

	//Punal Manalan, NOTE: Ability Tags Applied By Effect(Tags Exists Until This Effect Exists)
	TArray<FString> Tags_To_Apply;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};

USTRUCT(BlueprintType)
struct FStruct_PDAS_Ability : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Ability Cost and Ability Effects

	//Punal Manalan, NOTE: Ability Cost by Stats
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FStruct_PDAS_Ability_Cost Ability_Cost;

	//Punal Manalan, NOTE: Ability Instant Effects on the Caster(Owner)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FStruct_PDAS_Ability_Effect Caster_Instant_Effect;

	//Punal Manalan, NOTE: Ability Instant Effects on the Caster(Owner)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FStruct_PDAS_Ability_Effect Caster_Duration_Effect;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};