// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkyCreator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkyCreatorWeatherPreset;
struct FLinearColor;
struct FSkyCreatorBackgroundCloudSettings;
struct FSkyCreatorExponentialHeightFogSettings;
struct FSkyCreatorMoonLightSettings;
struct FSkyCreatorPostProcessSettings;
struct FSkyCreatorSkyAtmosphereSettings;
struct FSkyCreatorSkyLightSettings;
struct FSkyCreatorStarMapSettings;
struct FSkyCreatorSunLightSettings;
struct FSkyCreatorVolumetricCloudSettings;
struct FSkyCreatorWeatherFXSettings;
struct FSkyCreatorWeatherMaterialFXSettings;
struct FSkyCreatorWeatherSettings;
struct FSkyCreatorWindSettings;
#ifdef SKYCREATORPLUGIN_SkyCreator_generated_h
#error "SkyCreator.generated.h already included, missing '#pragma once' in SkyCreator.h"
#endif
#define SKYCREATORPLUGIN_SkyCreator_generated_h

#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindLightningPosition); \
	DECLARE_FUNCTION(execGetBackgroundCloudSettings); \
	DECLARE_FUNCTION(execGetCloudDensityAtPosition); \
	DECLARE_FUNCTION(execGetExponentialHeightFogSettings); \
	DECLARE_FUNCTION(execGetLastLightningPosition); \
	DECLARE_FUNCTION(execGetMoonLightSettings); \
	DECLARE_FUNCTION(execGetMoonPhase); \
	DECLARE_FUNCTION(execGetMoonPosition); \
	DECLARE_FUNCTION(execGetPostProcessSettings); \
	DECLARE_FUNCTION(execGetSkyAtmosphereSettings); \
	DECLARE_FUNCTION(execGetSkyLightSettings); \
	DECLARE_FUNCTION(execGetStarMapRotation); \
	DECLARE_FUNCTION(execGetStarMapSettings); \
	DECLARE_FUNCTION(execGetSunLightSettings); \
	DECLARE_FUNCTION(execGetSunPosition); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVolumetricCloudSettings); \
	DECLARE_FUNCTION(execGetWeatherFXSettings); \
	DECLARE_FUNCTION(execGetWeatherMaterialFXSettings); \
	DECLARE_FUNCTION(execGetWeatherSettings); \
	DECLARE_FUNCTION(execGetWindSettings); \
	DECLARE_FUNCTION(execLerpBackgroundCloudSettings); \
	DECLARE_FUNCTION(execLerpExponentialHeightFogSettings); \
	DECLARE_FUNCTION(execLerpMoonLightSettings); \
	DECLARE_FUNCTION(execLerpPostProcessSettings); \
	DECLARE_FUNCTION(execLerpPuddlesAmount); \
	DECLARE_FUNCTION(execLerpSkyAtmosphereSettings); \
	DECLARE_FUNCTION(execLerpSkyLightSettings); \
	DECLARE_FUNCTION(execLerpSnowAmount); \
	DECLARE_FUNCTION(execLerpStarMapSettings); \
	DECLARE_FUNCTION(execLerpSunLightSettings); \
	DECLARE_FUNCTION(execLerpVolumetricCloudSettings); \
	DECLARE_FUNCTION(execLerpWeatherFXSettings); \
	DECLARE_FUNCTION(execLerpWeatherMaterialFXSettings); \
	DECLARE_FUNCTION(execLerpWeatherSettings); \
	DECLARE_FUNCTION(execLerpWetnessAmount); \
	DECLARE_FUNCTION(execLerpWindIndependentSettings); \
	DECLARE_FUNCTION(execLerpWindSettings); \
	DECLARE_FUNCTION(execOnRep_UpdateTime); \
	DECLARE_FUNCTION(execOnRep_UpdateWeather); \
	DECLARE_FUNCTION(execRealtimeTimeOfDay); \
	DECLARE_FUNCTION(execSetBackgroundCloudSettings); \
	DECLARE_FUNCTION(execSetbDaylightSavingTime); \
	DECLARE_FUNCTION(execSetCloudMapOffset); \
	DECLARE_FUNCTION(execSetDay); \
	DECLARE_FUNCTION(execSetEditorTimeOfDay); \
	DECLARE_FUNCTION(execSetEditorWeatherPreset); \
	DECLARE_FUNCTION(execSetEditorWeatherSettings); \
	DECLARE_FUNCTION(execSetExponentialHeightFogSettings); \
	DECLARE_FUNCTION(execSetLatitude); \
	DECLARE_FUNCTION(execSetLayerBottomAltitude); \
	DECLARE_FUNCTION(execSetLayerHeight); \
	DECLARE_FUNCTION(execSetLongitude); \
	DECLARE_FUNCTION(execSetMonth); \
	DECLARE_FUNCTION(execSetMoonAtmosphereDiskColorScale); \
	DECLARE_FUNCTION(execSetMoonAzimuth); \
	DECLARE_FUNCTION(execSetMoonDiskSize); \
	DECLARE_FUNCTION(execSetMoonElevation); \
	DECLARE_FUNCTION(execSetMoonIntensity); \
	DECLARE_FUNCTION(execSetMoonLightSettings); \
	DECLARE_FUNCTION(execSetMoonPhase); \
	DECLARE_FUNCTION(execSetMoonriseTime); \
	DECLARE_FUNCTION(execSetMoonRotation); \
	DECLARE_FUNCTION(execSetMoonsetTime); \
	DECLARE_FUNCTION(execSetMoonSimplePositionSettings); \
	DECLARE_FUNCTION(execSetPostProcessSettings); \
	DECLARE_FUNCTION(execSetRealPositionSettings); \
	DECLARE_FUNCTION(execSetSkyAtmosphereSettings); \
	DECLARE_FUNCTION(execSetSkyLightSettings); \
	DECLARE_FUNCTION(execSetStarMapAdditionalRotation); \
	DECLARE_FUNCTION(execSetStarMapSettings); \
	DECLARE_FUNCTION(execSetSunAtmosphereDiskColorScale); \
	DECLARE_FUNCTION(execSetSunAzimuth); \
	DECLARE_FUNCTION(execSetSunDawnOffsetTime); \
	DECLARE_FUNCTION(execSetSunDiskSize); \
	DECLARE_FUNCTION(execSetSunDuskOffsetTime); \
	DECLARE_FUNCTION(execSetSunElevation); \
	DECLARE_FUNCTION(execSetSunIntensity); \
	DECLARE_FUNCTION(execSetSunLightSettings); \
	DECLARE_FUNCTION(execSetSunMinAngleAtDawnDusk); \
	DECLARE_FUNCTION(execSetSunriseTime); \
	DECLARE_FUNCTION(execSetSunsetTime); \
	DECLARE_FUNCTION(execSetSunSimplePositionSettings); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execSetTimeZone); \
	DECLARE_FUNCTION(execSetVolumetricCloudSettings); \
	DECLARE_FUNCTION(execSetWeatherFXSettings); \
	DECLARE_FUNCTION(execSetWeatherMaterialFXSettings); \
	DECLARE_FUNCTION(execSetWeatherSettings); \
	DECLARE_FUNCTION(execSetWindIndependentSettings); \
	DECLARE_FUNCTION(execSetWindSettings); \
	DECLARE_FUNCTION(execSetYear); \
	DECLARE_FUNCTION(execSpawnLightningStrike); \
	DECLARE_FUNCTION(execUpdateSettingsSequencer);


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindLightningPosition); \
	DECLARE_FUNCTION(execGetBackgroundCloudSettings); \
	DECLARE_FUNCTION(execGetCloudDensityAtPosition); \
	DECLARE_FUNCTION(execGetExponentialHeightFogSettings); \
	DECLARE_FUNCTION(execGetLastLightningPosition); \
	DECLARE_FUNCTION(execGetMoonLightSettings); \
	DECLARE_FUNCTION(execGetMoonPhase); \
	DECLARE_FUNCTION(execGetMoonPosition); \
	DECLARE_FUNCTION(execGetPostProcessSettings); \
	DECLARE_FUNCTION(execGetSkyAtmosphereSettings); \
	DECLARE_FUNCTION(execGetSkyLightSettings); \
	DECLARE_FUNCTION(execGetStarMapRotation); \
	DECLARE_FUNCTION(execGetStarMapSettings); \
	DECLARE_FUNCTION(execGetSunLightSettings); \
	DECLARE_FUNCTION(execGetSunPosition); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVolumetricCloudSettings); \
	DECLARE_FUNCTION(execGetWeatherFXSettings); \
	DECLARE_FUNCTION(execGetWeatherMaterialFXSettings); \
	DECLARE_FUNCTION(execGetWeatherSettings); \
	DECLARE_FUNCTION(execGetWindSettings); \
	DECLARE_FUNCTION(execLerpBackgroundCloudSettings); \
	DECLARE_FUNCTION(execLerpExponentialHeightFogSettings); \
	DECLARE_FUNCTION(execLerpMoonLightSettings); \
	DECLARE_FUNCTION(execLerpPostProcessSettings); \
	DECLARE_FUNCTION(execLerpPuddlesAmount); \
	DECLARE_FUNCTION(execLerpSkyAtmosphereSettings); \
	DECLARE_FUNCTION(execLerpSkyLightSettings); \
	DECLARE_FUNCTION(execLerpSnowAmount); \
	DECLARE_FUNCTION(execLerpStarMapSettings); \
	DECLARE_FUNCTION(execLerpSunLightSettings); \
	DECLARE_FUNCTION(execLerpVolumetricCloudSettings); \
	DECLARE_FUNCTION(execLerpWeatherFXSettings); \
	DECLARE_FUNCTION(execLerpWeatherMaterialFXSettings); \
	DECLARE_FUNCTION(execLerpWeatherSettings); \
	DECLARE_FUNCTION(execLerpWetnessAmount); \
	DECLARE_FUNCTION(execLerpWindIndependentSettings); \
	DECLARE_FUNCTION(execLerpWindSettings); \
	DECLARE_FUNCTION(execOnRep_UpdateTime); \
	DECLARE_FUNCTION(execOnRep_UpdateWeather); \
	DECLARE_FUNCTION(execRealtimeTimeOfDay); \
	DECLARE_FUNCTION(execSetBackgroundCloudSettings); \
	DECLARE_FUNCTION(execSetbDaylightSavingTime); \
	DECLARE_FUNCTION(execSetCloudMapOffset); \
	DECLARE_FUNCTION(execSetDay); \
	DECLARE_FUNCTION(execSetEditorTimeOfDay); \
	DECLARE_FUNCTION(execSetEditorWeatherPreset); \
	DECLARE_FUNCTION(execSetEditorWeatherSettings); \
	DECLARE_FUNCTION(execSetExponentialHeightFogSettings); \
	DECLARE_FUNCTION(execSetLatitude); \
	DECLARE_FUNCTION(execSetLayerBottomAltitude); \
	DECLARE_FUNCTION(execSetLayerHeight); \
	DECLARE_FUNCTION(execSetLongitude); \
	DECLARE_FUNCTION(execSetMonth); \
	DECLARE_FUNCTION(execSetMoonAtmosphereDiskColorScale); \
	DECLARE_FUNCTION(execSetMoonAzimuth); \
	DECLARE_FUNCTION(execSetMoonDiskSize); \
	DECLARE_FUNCTION(execSetMoonElevation); \
	DECLARE_FUNCTION(execSetMoonIntensity); \
	DECLARE_FUNCTION(execSetMoonLightSettings); \
	DECLARE_FUNCTION(execSetMoonPhase); \
	DECLARE_FUNCTION(execSetMoonriseTime); \
	DECLARE_FUNCTION(execSetMoonRotation); \
	DECLARE_FUNCTION(execSetMoonsetTime); \
	DECLARE_FUNCTION(execSetMoonSimplePositionSettings); \
	DECLARE_FUNCTION(execSetPostProcessSettings); \
	DECLARE_FUNCTION(execSetRealPositionSettings); \
	DECLARE_FUNCTION(execSetSkyAtmosphereSettings); \
	DECLARE_FUNCTION(execSetSkyLightSettings); \
	DECLARE_FUNCTION(execSetStarMapAdditionalRotation); \
	DECLARE_FUNCTION(execSetStarMapSettings); \
	DECLARE_FUNCTION(execSetSunAtmosphereDiskColorScale); \
	DECLARE_FUNCTION(execSetSunAzimuth); \
	DECLARE_FUNCTION(execSetSunDawnOffsetTime); \
	DECLARE_FUNCTION(execSetSunDiskSize); \
	DECLARE_FUNCTION(execSetSunDuskOffsetTime); \
	DECLARE_FUNCTION(execSetSunElevation); \
	DECLARE_FUNCTION(execSetSunIntensity); \
	DECLARE_FUNCTION(execSetSunLightSettings); \
	DECLARE_FUNCTION(execSetSunMinAngleAtDawnDusk); \
	DECLARE_FUNCTION(execSetSunriseTime); \
	DECLARE_FUNCTION(execSetSunsetTime); \
	DECLARE_FUNCTION(execSetSunSimplePositionSettings); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execSetTimeZone); \
	DECLARE_FUNCTION(execSetVolumetricCloudSettings); \
	DECLARE_FUNCTION(execSetWeatherFXSettings); \
	DECLARE_FUNCTION(execSetWeatherMaterialFXSettings); \
	DECLARE_FUNCTION(execSetWeatherSettings); \
	DECLARE_FUNCTION(execSetWindIndependentSettings); \
	DECLARE_FUNCTION(execSetWindSettings); \
	DECLARE_FUNCTION(execSetYear); \
	DECLARE_FUNCTION(execSpawnLightningStrike); \
	DECLARE_FUNCTION(execUpdateSettingsSequencer);


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_ACCESSORS
#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASkyCreator(); \
	friend struct Z_Construct_UClass_ASkyCreator_Statics; \
public: \
	DECLARE_CLASS(ASkyCreator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyCreatorPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASkyCreator) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TimeOfDay=NETFIELD_REP_START, \
		WeatherSettings, \
		NETFIELD_REP_END=WeatherSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_INCLASS \
private: \
	static void StaticRegisterNativesASkyCreator(); \
	friend struct Z_Construct_UClass_ASkyCreator_Statics; \
public: \
	DECLARE_CLASS(ASkyCreator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SkyCreatorPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASkyCreator) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TimeOfDay=NETFIELD_REP_START, \
		WeatherSettings, \
		NETFIELD_REP_END=WeatherSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASkyCreator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyCreator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkyCreator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyCreator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkyCreator(ASkyCreator&&); \
	NO_API ASkyCreator(const ASkyCreator&); \
public: \
	NO_API virtual ~ASkyCreator();


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkyCreator(ASkyCreator&&); \
	NO_API ASkyCreator(const ASkyCreator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkyCreator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyCreator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASkyCreator) \
	NO_API virtual ~ASkyCreator();


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_58_PROLOG
#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_ACCESSORS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_INCLASS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_ACCESSORS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYCREATORPLUGIN_API UClass* StaticClass<class ASkyCreator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
