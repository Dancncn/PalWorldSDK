// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UDLSSMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DLSSBLUEPRINT_UDLSSMode_generated_h
#error "UDLSSMode.generated.h already included, missing '#pragma once' in UDLSSMode.h"
#endif
#define DLSSBLUEPRINT_UDLSSMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSMode_h


#define FOREACH_ENUM_UDLSSMODE(op) \
	op(UDLSSMode::Off) \
	op(UDLSSMode::Auto) \
	op(UDLSSMode::DLAA) \
	op(UDLSSMode::UltraQuality) \
	op(UDLSSMode::Quality) \
	op(UDLSSMode::Balanced) \
	op(UDLSSMode::Performance) \
	op(UDLSSMode::UltraPerformance) 

enum class UDLSSMode : uint8;
template<> struct TIsUEnumClass<UDLSSMode> { enum { Value = true }; };
template<> DLSSBLUEPRINT_API UEnum* StaticEnum<UDLSSMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
