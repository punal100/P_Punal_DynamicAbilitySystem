//By Punal Manalan 2025

#pragma once

#ifndef DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Enum_Collection
#define DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Enum_Collection
#endif // !DEFINED_HEADER_P_Punal_DynamicAbilitySystem_Enum_Collection

#include "CoreMinimal.h"
//#ifndef DEFINED_HEADER_SOME_HEADER_MARCO_IDENTIFIER
//#include "../SOME_HEADER.h"
//#endif // !DEFINED_HEADER_SOME_HEADER_MARCO_IDENTIFIER
#include "P_Punal_DynamicAbilitySystem_Enum_Collection.generated.h"

UENUM(BlueprintType)
enum class EEnum_PDAS_Math_Operation : uint8
{
    Add       UMETA(DisplayName = "Add"),
    Subtract  UMETA(DisplayName = "Subtract"),
    Multiply  UMETA(DisplayName = "Multiply"),
    Divide    UMETA(DisplayName = "Divide")
};

UENUM(BlueprintType)
enum class EEnum_PDAS_Math_Calculation : uint8
{
    Absolute    UMETA(DisplayName = "Absolute"),
    Scale       UMETA(DisplayName = "Scale"),
};

UENUM(BlueprintType)
enum class EEnum_PDAS_AOE_Location_Start_Type : uint8
{
    Caster         UMETA(DisplayName = "Caster"),
    Target         UMETA(DisplayName = "Target"),
    Location       UMETA(DisplayName = "Location"),
};

UENUM(BlueprintType)
enum class EEnum_PDAS_AOE_Location_Move_Type : uint8
{
    Caster         UMETA(DisplayName = "Caster"),
    Target         UMETA(DisplayName = "Target"),
    Location       UMETA(DisplayName = "Location"),
};

UENUM(BlueprintType)
enum class EEnum_PDAS_AOE_Location_End_Type : uint8
{
    Caster         UMETA(DisplayName = "Caster"),
    Target         UMETA(DisplayName = "Target"),
    Location       UMETA(DisplayName = "Location"),
};