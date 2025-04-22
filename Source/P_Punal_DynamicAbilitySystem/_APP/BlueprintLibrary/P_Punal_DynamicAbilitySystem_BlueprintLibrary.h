// By Punal Manalan 2025

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../Struct/P_Punal_DynamicAbilitySystem_Struct_Collection.h"

#include "P_Punal_DynamicAbilitySystem_BlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class P_PUNAL_DYNAMICABILITYSYSTEM_API UP_Punal_DynamicAbilitySystem_BlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	//~ ~
	//#+ Functions #+
	//#++ Functions-Struct #++
	//#==

	//Punal Manalan, NOTE: Get Test
	UFUNCTION(BlueprintCallable, Category = "_APP|BlueprintLibrary|PDAS|Test")
		static void Punal_PDAS_Test();
	//#==
	//#-- Functions-Struct #--
	//#- Functions #-
	//~ ~
};
