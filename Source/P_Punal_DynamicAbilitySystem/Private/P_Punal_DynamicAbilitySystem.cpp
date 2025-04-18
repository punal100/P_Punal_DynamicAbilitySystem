// By Punal Manalan 2025

#include "P_Punal_DynamicAbilitySystem.h"
//#include "GameplayTagsManager.h"

#define LOCTEXT_NAMESPACE "FP_Punal_DynamicAbilitySystem"

void FP_Punal_DynamicAbilitySystem::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	//UGameplayTagsManager::Get().AddTagIniSearchPath(FPaths::ProjectPluginsDir() / TEXT("P_Punal_DynamicAbilitySystem/Config/Tags"));
}

void FP_Punal_DynamicAbilitySystem::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FP_Punal_DynamicAbilitySystem, P_Punal_DynamicAbilitySystem)