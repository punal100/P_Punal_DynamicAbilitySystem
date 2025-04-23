//By Punal Manalan 2025

#pragma once

#ifndef DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Struct_Collection
#define DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Struct_Collection
#endif // !DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Struct_Collection

#include "CoreMinimal.h"
#ifndef DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Enum_Collection
#include "../Enum/P_Punal_DynamicAbilitySystem_Enum_Collection.h"
#endif // !DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Enum_Collection
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
struct FStruct_PDAS_Attribute_With_Modifier : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Attribute Modifiers and Attribute Value

	//Punal Manalan, NOTE: Attribute Name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Attribute")
	EEnum_PDAS_Math_Operation Operation_Modifier = EEnum_PDAS_Math_Operation::Add;

	//Punal Manalan, NOTE: Attribute Name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Attribute")
	EEnum_PDAS_Math_Calculation Calculation_Modifier = EEnum_PDAS_Math_Calculation::Absolute;

	//Punal Manalan, NOTE: Attribute Value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Attribute")
	FStruct_PDAS_Attribute Attribute;

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
struct FStruct_PDAS_Attribute_With_Modifier_Named : public FTableRowBase
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
	FStruct_PDAS_Attribute_With_Modifier Attribute;

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
struct P_PUNAL_DYNAMICABILITYSYSTEM_API FStruct_PDAS_Attribute_With_Modifiers_Map_By_Name : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Map of Attributes with Modifier Map by Name(FString)

	//Punal Manalan, NOTE: Attributes with Modifier Map by Name(FString)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Attribute")
	TMap<FString, FStruct_PDAS_Attribute_With_Modifier> Attributes;

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
	FString Usable_Check_By_Script = "{}";

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
	FStruct_PDAS_Attribute_With_Modifiers_Map_By_Name Cost_By_Stats;

	//Punal Manalan, NOTE: Ability Cost by Script, Usually JSON Script
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FString Cost_By_Script = "{}";

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};

USTRUCT(BlueprintType)
struct FStruct_PDAS_Effect : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Effect

	//Punal Manalan, NOTE: Required Eligibility in order for this Effect to be Applied
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	FStruct_PDAS_Use_Eligibility Required_Eligibility;

	//Punal Manalan, NOTE: Eligibility by Stats, Same as Cost but Only Check if Required Stats are there
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	FStruct_PDAS_Attribute_With_Modifiers_Map_By_Name Eligibility_By_Stats;

	//Punal Manalan, NOTE: Effect by Stats
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	FStruct_PDAS_Attributes_Map_By_Name Effect_By_Stats;

	//Punal Manalan, NOTE: Effect by Script, Usually JSON Script
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	FString Effect_By_Script = "{}";

	//Punal Manalan, NOTE: Tags Applied By Effect(Tags Exists Until This Effect Exists)
	TArray<FString> Tags_To_Apply;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};

USTRUCT(BlueprintType)
struct FStruct_PDAS_Effect_Targeting_Collections : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Multiple Effect Types

	//Punal Manalan, NOTE: Required Eligibility in order for this Effect to be Applied
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	FStruct_PDAS_Effect Self_Effect;

	//Punal Manalan, NOTE: Required Eligibility in order for this Effect to be Applied
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	FStruct_PDAS_Effect AOE_Effect;//Punal Manalan, TODO: Add AOE Parameters for this

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};

USTRUCT(BlueprintType)
struct FStruct_PDAS_Instant_Effect : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Instant Effect

	//Punal Manalan, NOTE: Effect to Apply
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	FStruct_PDAS_Effect_Types Effect;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};

USTRUCT(BlueprintType)
struct FStruct_PDAS_Periodic_Effect : public FTableRowBase
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Variables #+
	//#++ Variables-Base #++
	//#==

	//Punal Manalan,
	//NOTE: 
	//Contains Periodic Effect

	//Punal Manalan, NOTE: Effect to Apply
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	FStruct_PDAS_Effect_Types Effect;

	//Punal Manalan, NOTE: Maximum Amount of times this Effect can be Applied
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	int Tick_Count = 4;

	//Punal Manalan, NOTE: Interval in MilliSeconds Before each time this is Applied
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	float Tick_Interval = 1000;

	//Punal Manalan, NOTE: Should Apply this Effect on Start, When this Effect is Initially Applied.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	bool Apply_First_Tick_On_Initial = true;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};

USTRUCT(BlueprintType)
struct FStruct_PDAS_Effect_Application_Collection : public FTableRowBase
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	FStruct_PDAS_Instant_Effect Instant_Effect;

	//Punal Manalan, NOTE: Required Eligibility in order for this Effect to be Applied
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Effect")
	FStruct_PDAS_Periodic_Effect Periodic_Effect;

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
	FStruct_PDAS_Instant_Ability_Effect Caster_Instant_Effect;

	//Punal Manalan, NOTE: Ability Instant Effects on the Caster(Owner)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FStruct_PDAS_Periodic_Ability_Effect Caster_Duration_Effect;

	//Punal Manalan, NOTE: Ability Instant Effects on the Target(If Any Selected, Otherwise Ignored)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FStruct_PDAS_Instant_Ability_Effect Target_Instant_Effect;

	//Punal Manalan, NOTE: Ability Instant Effects on the Target(If Any Selected, Otherwise Ignored)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_APP|Struct|PDAS|Ability")
	FStruct_PDAS_Periodic_Ability_Effect Target_Duration_Effect;

	//#==
	//#-- Variables-Base #--
	//#- Variables #-
	//~ ~
};