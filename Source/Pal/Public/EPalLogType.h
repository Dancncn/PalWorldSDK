#pragma once
#include "CoreMinimal.h"
#include "EPalLogType.generated.h"

UENUM(BlueprintType)
enum class EPalLogType : uint8 {
    None,
    CaptureSuccess,
    CaptureFailed_LowBallLevel,
    CaptureFailed_HighHP,
    CaptureFailed_BounceBall,
    CaptureFailed_OutOfBall,
    CaptureFailed_TowerBoss,
    CaptureFailed_PlayerPal,
    StartInvaderMarch,
    EndInvaderMarch_Win,
    EndInvaderMarch_Timeout,
    DropPal,
    OtomoLowHealth_Phase1,
    OtomoLowHealth_Phase2,
    OtomoLowHealth_Phase3,
    OtomoEatFood,
    OtomoPalDown,
    OtomoPalDeath,
    OtomoPalEffectiveAttack,
    OtomoPalDefeatEnemy,
    GetItem,
    ShippingItem,
    FullInventoryNotice,
    StartWorldDataAutoSave,
    SuccessedWorldDataAutoSave,
    FailedWorldDataAutoSave,
    StartPlayerDataAutoSave,
    SuccessedPlayerDataAutoSave,
    FailedPlayerDataAutoSave,
    WorkerPalSanityLowWarning,
    WorkerPalComplateItemConvert,
    WorkerPalComplateBuild,
    WorkerPalStartBuild,
    WorkerPalStartRepair,
    WorkerPalStartWork,
    WorkerPalStartWork_CollectResource,
    WorkerPalStartWork_ProductResource_Deforest,
    WorkerPalStartWork_ProductResource_Mining,
    WorkerEvent_DestroyBuilding,
    WorkerEvent_DodgeWork,
    WorkerEvent_DodgeWork_Short,
    WorkerEvent_DodgeWork_Sleep,
    WorkerEvent_EatTooMuch,
    WorkerEvent_Escape,
    WorkerEvent_FightWithFriend,
    WorkerEvent_OverworkDeath,
    WorkerEvent_Sick,
    WorkerEvent_Trantrum,
    WorkerEvent_TurnFoodBox,
    BaseCampTask_Progress_BuildObject,
    BaseCampTask_Complete,
    VisitorSpawn,
    VisitorArrived,
    VisitorReturn,
    OverWeightInventory,
    SkillTargetNotFound,
    SkillNotAvailable,
    SkillExecute,
    SkillExecuteInBaseCamp,
    SkillExecuteHealing,
    SurvivorExp,
    PartnerSkillExecute_Berserk,
    PartnerSkillExecute_NightRunner,
    ObtainNote,
    OutdoorBedNortice,
};

