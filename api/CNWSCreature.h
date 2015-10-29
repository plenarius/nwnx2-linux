#ifndef _CNWSCREATURE_H_
#define _CNWSCREATURE_H_
#include "nwndef.h"
#include "CNWSObject.h"
#include "Vector.h"
#include "CExoString.h"
#include "CResRef.h"
#include "CExoArrayList.h"
#include "nwnstructs.h"

class CNWSCreature : public CNWSObject
{
public:
    unsigned long AIActionAnimalEmpathy(CNWSObjectActionNode *);
    unsigned long AIActionAppear(CNWSObjectActionNode *);
    unsigned long AIActionAreaWait(CNWSObjectActionNode *);
    unsigned long AIActionAttackObject(CNWSObjectActionNode *);
    unsigned long AIActionBarter(CNWSObjectActionNode *);
    unsigned long AIActionCastSpell(CNWSObjectActionNode *);
    unsigned long AIActionChangeFacingObject(CNWSObjectActionNode *);
    unsigned long AIActionChangeFacingPoint(CNWSObjectActionNode *);
    unsigned long AIActionCheckForceFollowObject(CNWSObjectActionNode *);
    unsigned long AIActionCheckInterAreaPathfinding(CNWSObjectActionNode *);
    unsigned long AIActionCheckMoveAwayFromLocation(CNWSObjectActionNode *);
    unsigned long AIActionCheckMoveAwayFromObject(CNWSObjectActionNode *);
    unsigned long AIActionCheckMoveToObjectRadius(CNWSObjectActionNode *);
    unsigned long AIActionCheckMoveToObject(CNWSObjectActionNode *);
    unsigned long AIActionCheckMoveToPointRadius(CNWSObjectActionNode *);
    unsigned long AIActionCheckMoveToPoint(CNWSObjectActionNode *);
    unsigned long AIActionCounterSpell(CNWSObjectActionNode *);
    unsigned long AIActionDisappear(CNWSObjectActionNode *);
    unsigned long AIActionDisarmTrap(CNWSObjectActionNode *);
    unsigned long AIActionDrive(CNWSObjectActionNode *);
    unsigned long AIActionDropItem(CNWSObjectActionNode *);
    unsigned long AIActionEncounterCreatureDestroySelf();
    unsigned long AIActionEquipItem(CNWSObjectActionNode *);
    unsigned long AIActionExamineTrap(CNWSObjectActionNode *);
    unsigned long AIActionExamine(CNWSObjectActionNode *);
    unsigned long AIActionFlagTrap(CNWSObjectActionNode *);
    unsigned long AIActionForceFollowObject(CNWSObjectActionNode *);
    unsigned long AIActionHeal(CNWSObjectActionNode *);
    unsigned long AIActionItemCastSpell(CNWSObjectActionNode *);
    unsigned long AIActionJumpToObject(CNWSObjectActionNode *);
    unsigned long AIActionJumpToPoint(CNWSObjectActionNode *);
    unsigned long AIActionMoveToPoint(CNWSObjectActionNode *);
    unsigned long AIActionOrientCamera(CNWSObjectActionNode *);
    unsigned long AIActionPickPocket(CNWSObjectActionNode *);
    unsigned long AIActionPickUpItem(CNWSObjectActionNode *);
    unsigned long AIActionRandomWalk(CNWSObjectActionNode *);
    unsigned long AIActionRecoverTrap(CNWSObjectActionNode *);
    unsigned long AIActionRepositoryMove(CNWSObjectActionNode *);
    unsigned long AIActionRest(CNWSObjectActionNode *);
    unsigned long AIActionSetTrap(CNWSObjectActionNode *);
    unsigned long AIActionSit(CNWSObjectActionNode *);
    unsigned long AIActionTaunt(CNWSObjectActionNode *);
    unsigned long AIActionUnequipItem(CNWSObjectActionNode *);
    unsigned long AIActionWaitForEndOfRound(CNWSObjectActionNode *);
    void AIUpdate();
    int AcquireItem(CNWSItem **, unsigned long, unsigned long, unsigned char, unsigned char, int, int);
    void ActionManager(unsigned long);
    void ActivityManager(unsigned long);
    int AddAnimalEmpathyAction(unsigned long);
    int AddAppearActions(int);
    int AddAreaOfEffect(unsigned long);
    void AddAssociate(unsigned long, unsigned short);
    int AddAttackActions(unsigned long, int, int, int);
    int AddCastSpellActions(unsigned long, int, int, int, int, Vector, unsigned long, int, int, int, unsigned char, int, int, int, unsigned char);
    int AddCounterSpellActions(unsigned long);
    int AddDisappearActions(int, int);
    int AddDriveAction(unsigned short, Vector const &, int, int, int, int);
    int AddDropItemActions(unsigned long, Vector, int);
    int AddEquipItemActions(CNWSItem *, unsigned long, int, int, unsigned long);
    void AddGold(int, int);
    int AddHealActions(unsigned long, unsigned long, int);
    int AddItemCastSpellActions(unsigned long, int, int, Vector, unsigned long, int);
    int AddMoveToPointActionToFront(unsigned short, Vector, unsigned long, unsigned long, int, float, float, int, int, int, int, int, int);
    int AddMoveToPointAction(unsigned short, Vector, unsigned long, unsigned long, int, float, float, int, int, int, int, int, int);
    int AddPathfindingWaitActionToFront(unsigned short);
    int AddPickPocketActions(unsigned long);
    int AddPickUpItemActions(unsigned long, unsigned long, unsigned char, unsigned char);
    int AddRepositoryMoveActions(CNWSItem *, unsigned long, unsigned char, unsigned char);
    int AddSitActions(unsigned long);
    int AddTauntActions(unsigned long);
    void AddToArea(CNWSArea *, float, float, float, int);
    void AddToAssociateList(unsigned long);
    void AddToInvitationsIgnored(unsigned long);
    void AddToInvitationsOffered(unsigned long);
    void AddToPVPList(unsigned long);
    void AddToPersonalReputationList(unsigned long, int, int, float);
    void AddToVisibleList(unsigned long, int, int, unsigned char, int);
    int AddTrapActions(unsigned long, unsigned char, unsigned long, Vector, unsigned long);
    int AddUnequipActions(CNWSItem *, unsigned long, unsigned char, unsigned char, int, int, unsigned long);
    int AddUseTalentAtLocationActions(int, int, Vector, unsigned char, unsigned long, int, unsigned char, unsigned char);
    int AddUseTalentOnObjectActions(int, int, unsigned long, unsigned char, unsigned long, int, unsigned char, unsigned char);
    void AdjustReputation(int, int);
    void ApplyDeathExperience();
    int ApplyDiseasePayload(CGameEffect *, unsigned long, unsigned long);
    void ApplyOnHitAbilityDamage(CNWSObject *, CNWItemProperty *);
    void ApplyOnHitBlindness(CNWSObject *, int);
    void ApplyOnHitCastSpell(CNWSObject *, CNWItemProperty *, CNWSItem *);
    void ApplyOnHitConfusion(CNWSObject *, int);
    void ApplyOnHitDaze(CNWSObject *, int);
    void ApplyOnHitDeafness(CNWSObject *, int);
    void ApplyOnHitDeathAttack(CNWSObject *, int);
    void ApplyOnHitDisease(CNWSObject *, CNWItemProperty *);
    void ApplyOnHitDispelMagic(CNWSObject *, CNWItemProperty *);
    void ApplyOnHitDispelMagic(CNWSObject *, unsigned long);
    int ApplyOnHitDominate(CNWSObject *, int);
    void ApplyOnHitDoom(CNWSObject *, int);
    void ApplyOnHitFear(CNWSObject *, int);
    void ApplyOnHitGreaterDispel(CNWSObject *, unsigned long);
    void ApplyOnHitHold(CNWSObject *, int);
    void ApplyOnHitKnock(CNWSObject *, unsigned long);
    void ApplyOnHitLesserDispel(CNWSObject *, unsigned long);
    void ApplyOnHitLevelDrain(CNWSObject *, CNWItemProperty *);
    void ApplyOnHitMordysDisjunction(CNWSObject *, unsigned long);
    void ApplyOnHitPoison(CNWSObject *, CNWItemProperty *);
    void ApplyOnHitSilence(CNWSObject *, int);
    void ApplyOnHitSlayAlignmentGroup(CNWSObject *, CNWItemProperty *);
    void ApplyOnHitSlayAlignment(CNWSObject *, CNWItemProperty *);
    void ApplyOnHitSlayRacialGroup(CNWSObject *, CNWItemProperty *);
    void ApplyOnHitSleep(CNWSObject *, int);
    void ApplyOnHitSlow(CNWSObject *, int);
    void ApplyOnHitStun(CNWSObject *, int);
    void ApplyOnHitVampiricRegeneration(CNWSObject *, CNWItemProperty *);
    void ApplyOnHitVorpal(CNWSObject *, CNWItemProperty *);
    void ApplyOnHitWounding(CNWSObject *, CNWItemProperty *);
    int ApplyPoisonPayload(CGameEffect *, unsigned long, unsigned long);
    int ApplyWounding(CGameEffect *);
    CNWSCreature * AsNWSCreature();
    void AutoCloseGUIPanels(int);
    void BringAssociatesToNewFaction(int);
    int BroadcastAssociateCommand(int);
    void BroadcastAttackDataToParty(CNWCCMessageData *, CNWSCombatAttackData *, CNWSCreature *);
    void BroadcastAttackOfOpportunity(unsigned long, int);
    void BroadcastBattleCry();
    void BroadcastCombatStateToParty();
    void BroadcastDamageDataToParty(CNWCCMessageData *, CNWSCreature *);
    void BroadcastDeathDataToParty(CNWCCMessageData *, CNWSCreature *);
    void BroadcastFloatyData(CNWCCMessageData *);
    void BroadcastSavingThrowData(CNWCCMessageData *);
    void BroadcastSkillData(CNWCCMessageData *);
    void BroadcastSpellCast(unsigned long, unsigned char, unsigned short);
    void BroadcastVoiceChat(unsigned char);
    void BroadcastWhirlwindAttack(int);
    int BumpFriends(CNWSCreature *, Vector const &, Vector const &);
    unsigned char CalculateDamagePower(CNWSObject *, int);
    float CalculateDeathExperience(int, int);
    int CalculateMaxElementalDamage(CNWSObject *, int);
    int CalculatePersonalReputationAdjustment(unsigned long);
    int CalculateProjectileTimeToTarget(Vector, int);
    int CalculateSpellSaveDC(int);
    unsigned char CanEquipItem(CNWSItem *, unsigned long *, int, int, int, CNWSPlayer *);
    unsigned char CanEquipMiscellaneous(CNWSItem *, unsigned long *, int, int);
    unsigned char CanEquipShield(CNWSItem *, int, int);
    unsigned char CanEquipWeapon(CNWSItem *, unsigned long *, int, int, CNWSPlayer *);
    unsigned char CanUnEquipWeapon(CNWSItem *);
    int CanUseItem(CNWSItem *, int);
    int CancelAction(unsigned short, unsigned short);
    void CancelGoldTransfer(unsigned long);
    void CancelRest(unsigned short);
    void CheckInventoryForPlotItems();
    int CheckItemAlignmentRestrictions(CNWSItem *);
    int CheckItemClassRestrictions(CNWSItem *);
    int CheckItemRaceRestrictions(CNWSItem *);
    void CheckMasterIsValid(unsigned long, unsigned long);
    int CheckProficiencies(CNWSItem *, unsigned long);
    int CheckUseMagicDeviceSkill(CNWSItem *, int);
    int CheckVisibleList(unsigned long);
    void CleanInvitationLists(int);
    void CleanOutPersonalReputationList();
    int ClearAction(CNWSObjectActionNode *, int);
    void ClearActivities(int);
    int ClearAutoMapData();
    void ClearHostileActionsVersus(CNWSCreature *);
    void ClearPersonalReputation(unsigned long);
    void ClearVisibleList();
    void ComputeAIStateOnAction(int, unsigned long);
    void ComputeAIState();
    void ComputeArmourClass(CNWSItem *, int, int);
    void ComputeModifiedMovementRate();
    float ComputeSpellRange(CExoString, unsigned long);
    int ComputeTotalEquippedWeight();
    float ComputeTotalWalkDistance();
    int ComputeTotalWeightCarried();
    void ConvertModeToggleQuickButton(CNWSQuickbarButton *);
    void CopyQuickButtonsFromDM(CNWSPlayer *);
    int CreateDefaultQuickButtonsDM();
    void CreateDefaultQuickButtons_AddFeat(unsigned char &, unsigned short, int);
    int CreateDefaultQuickButtons_CheckItem(CNWSItem *, unsigned long &, unsigned long &, unsigned long &, unsigned long &);
    void CreateDefaultQuickButtons();
    void CutWaypointPath();
    void DMClearScripts(int);
    void DMResetClearedScripts(int);
    int DecrementSpellReadyCount(unsigned long, unsigned char, unsigned char, unsigned char, unsigned char);
    float DesiredAttackRange(unsigned long, int);
    void DestroyEquippedItems();
    void DisplayFloatyDataToSelf(unsigned long);
    void DoCombatStep(unsigned char, int, unsigned long);
    void DoDamage(int);
    int DoListenDetection(CNWSCreature *, int);
    void DoPerceptionUpdateOnCreature(CNWSCreature *, int);
    int DoSpotDetection(CNWSCreature *, int);
    int DoStealthDetection(CNWSCreature *, int, int *, int *, int);
    unsigned long DriveUpdateLocation(int);
    void DumpToLog();
    int EquipItem(unsigned long, CNWSItem *, int, int);
    int EquipMostDamagingAmmunition(unsigned long, CNWSItem *);
    int EquipMostDamagingMeleeWeapon(unsigned long, int, int);
    int EquipMostDamagingRangedWeapon(unsigned long);
    int EquipMostEffectiveArmor();
    int EvaluateLock(CNWSObject *, int);
    void EventHandler(unsigned long, unsigned long, void *, unsigned long, unsigned long);
    void ExternalResolveAttack(unsigned long, int);
    void FailedOpenInformAssociates();
    int ForceMoveToPoint(CNWSForcedAction *);
    int GetAIStateActee();
    int GetAIStateAction();
    int GetAIStateActivities();
    int GetAIState();
    int GetActionQueueList();
    int GetActivityLocked(unsigned long);
    int GetActivity(int);
    int GetAlreadyRemovedFromEncounter();
    int GetAmbientAnimationState();
    int GetAmmunitionAvailable(int);
    int GetAnimalCompanionCreatureType();
    int GetAnimalCompanionId();
    CExoString GetAnimalCompanionName();
    int GetAppearance();
    int GetAreaOfEffectObjects();
    short GetArmorClass();
    unsigned long GetAssociateId(unsigned short, int);
    int GetAssociateList();
    int GetAssociateType();
    int GetAttackResultHit(CNWSCombatAttackData *);
    int GetAttackTarget();
    int GetAttemptedAttackTarget();
    int GetAttemptedSpellTarget();
    int GetAutoMapAreaList();
    int GetAutoMapTileData();
    CNWSBarter * GetBarterInfo(int);
    int GetBlind();
    int GetBlindsightDistance();
    unsigned short GetBodyBagAppearance();
    int GetBodyBagId();
    int GetBodyBag();
    int GetBroadcastedAOOTo();
    int GetCalculateNPCWeight();
    int GetCanSlayAlignment(CNWSObject *, CNWItemProperty *);
    int GetCombatMode();
    int GetCombatRound();
    int GetCombatStateTimer();
    int GetCombatState();
    int GetCounterSpellTarget();
    int GetCreatureReputation(unsigned long, int, int);
    int GetCreatureSize();
    int GetCreatureState();
    int GetCurrentItemContainer();
    int GetCutsceneCameraMode();
    int GetCutsceneCameraMovementRateFactor();
    int GetCutsceneGhost();
    int GetDMCharacter();
    unsigned short GetDamageFlags();
    int GetDecayTime();
    int GetDefensiveCastingMode();
    int GetDesiredAreaId();
    int GetDesiredAreaLocation();
    int GetDesiredAreaUpdateComplete();
    int GetDesiredCombatMode();
    unsigned char GetDetectMode();
    int GetDialogInterruptable();
    CResRef GetDialogResref();
    int GetDisarmable();
    CExoString GetDisplayName();
    unsigned long GetDominatedCreatureId();
    int GetDriveModeMoveFactor();
    int GetDriveMode();
    int GetDropItemAnimationPlayed();
    int GetEffectIcons();
    unsigned long GetEffectSpellId();
    int GetEncounterId();
    int GetEncumbranceState();
    int GetEquipArrayIndex();
    int GetEquippedWeight();
    int GetExternalCombatModeEnabled();
    int GetFacingAndAnimationDone();
    int GetFactionId();
    CNWSFaction * GetFaction();
    int GetFamiliarCreatureType();
    int GetFamiliarId();
    CExoString GetFamiliarName();
    CExoArrayList<CGameEffect *> GetFilteredEffectList(unsigned char);
    CExoLocString & GetFirstName();
    int GetFlanked(CNWSCreature *);
    int GetFlatFooted();
    int GetFootstepType();
    int GetForcedWalk();
    int GetFreeWill();
    unsigned char GetGender();
    int GetGoingToBeAttackedBy();
    int GetGold();
    int GetHasArms();
    int GetHasInvisbilityEffectApplied();
    int GetHasLegs();
    int GetHasted();
    int GetHealAnimationPlayed();
    int GetHenchmanId(int);
    int GetHenchmanIndex(unsigned long);
    int GetInSubAreasArray();
    int GetInTransit();
    int GetInitiativeExpired();
    int GetInitiativeRoll();
    int GetInventory();
    int GetInvisible(CNWSObject *, int);
    int GetInvitedToPartyBy();
    int GetInvitedToParty();
    int GetIsAbleToPossessFamiliar();
    int GetIsCreatureBumpable(CNWSCreature *);
    int GetIsDiseased();
    int GetIsExcited();
    int GetIsImmortal();
    int GetIsInInvitationsIgnored(unsigned long);
    int GetIsInInvitationsOffered(unsigned long);
    int GetIsInMelee();
    int GetIsInUseRange(unsigned long, float, int);
    int GetIsPoisoned();
    int GetIsPolymorphLocked();
    int GetIsPolymorphed();
    int GetIsPolymorphing();
    int GetIsPossessedFamiliar();
    int GetIsWeaponEffective(unsigned long, int);
    int GetItemCastSpellBroadcastAOO();
    int GetItemContainerArrayIndex();
    unsigned long GetItemCount(int);
    int GetItemRepository();
    CNWSJournal * GetJournal();
    int GetJumpedRecently();
    int GetLastAmmunitionWarning();
    int GetLastAssociateCommand();
    int GetLastBlockingDoor();
    int GetLastCounterDomainLevel();
    int GetLastCounterMetaType();
    int GetLastCounterSpellClass();
    int GetLastCounterSpellID();
    int GetLastHideRoll();
    int GetLastItemCastSpellLevel();
    int GetLastItemCastSpell();
    int GetLastListenRoll();
    int GetLastMoveSilentlyRoll();
    CExoLocString & GetLastName();
    int GetLastPerceived();
    int GetLastPerceptionHeard();
    int GetLastPerceptionInaudible();
    int GetLastPerceptionSeen();
    int GetLastPerceptionVanished();
    int GetLastPickupFailed();
    int GetLastSpellCastItem();
    int GetLastSpellProjectileTime();
    int GetLastSpellUnReadied();
    int GetLastSpotRoll();
    int GetLastTrapDetected();
    float GetListenCheckDistance();
    int GetLockAnimationPlayed();
    unsigned long GetLockOrientationToObject();
    int GetLootable();
    int GetMagicalArrowsEquipped();
    int GetMagicalBoltsEquipped();
    int GetMagicalBulletsEquipped();
    int GetMasterId();
    short GetMaxHitPoints(int);
    int GetMode(unsigned char);
    CExoString GetModelType();
    float GetMovementRateFactor();
    unsigned long GetNearestEnemy(float, unsigned long, int, int);
    int GetNoPermDeath();
    int GetNonPolymorphCONBase();
    int GetNonPolymorphDEXBase();
    int GetNonPolymorphSTRBase();
    int GetNumAreas();
    int GetNumAssociatesOfType(unsigned short);
    int GetNumCharSheetViewers();
    int GetNumCounterSpellingCreatures(unsigned long);
    int GetNumInvited();
    int GetOnCreationScriptExecuted();
    int GetOriginalFactionId();
    int GetPVPList();
    int GetPVPPlayerLikesMe(unsigned long);
    int GetPVPReputation(unsigned long);
    int GetPassiveAttackBehaviour();
    int GetPathfindInformation();
    int GetPendingRealization();
    int GetPersonalReputationList();
    int GetPickUpItemAnimationPlayed();
    int GetPlayerCharacter();
    int GetPolymorphSpellId1();
    int GetPolymorphSpellId2();
    int GetPolymorphSpellId3();
    int GetPonyRide();
    CResRef GetPortrait();
    int GetPreDominationFactionId();
    int GetPrePolymorphCON();
    int GetPrePolymorphDEX();
    int GetPrePolymorphSTR();
    int GetPreferredAttackDistance();
    CNWSQuickbarButton * GetQuickbarButton(unsigned char);
    int GetQuickbarInitialized();
    int GetRangeWeaponEquipped();
    int GetRelativeWeaponSize(CNWSItem *);
    int GetRepositoryArrayIndex();
    int GetReputationList();
    float GetRunRate();
    int GetScriptName(int);
    int GetSilent();
    int GetSittingObject();
    int GetSlowed();
    int GetSoundSet();
    int GetSpellIdentifiedList();
    int GetSpellOrHealActionQueued();
    int GetSpellTarget();
    float GetSpotCheckDistance();
    int GetStandardFactionReputation(int);
    CNWSCreatureStats * GetStats();
    int GetStealAnimationPlayed();
    int GetStealAttemptDetected();
    int GetStealthMode();
    int GetSummonedAnimalCompanion();
    int GetSummonedCreatureId();
    int GetSummonedFamiliar();
    int GetTauntAnimationPlayed();
    int GetTaunt();
    int GetTileExplored(unsigned long, int, int);
    int GetTotalEffectBonus(unsigned char, CNWSObject *, int, int, unsigned char, unsigned char, unsigned char, unsigned char, int);
    int GetTotalWeightCarried();
    int GetTrapAnimationPlayed();
    int GetTurnResistanceHD();
    int GetUnarmed();
    int GetUnlockAnimationPlayed();
    int GetUpdateCombatInformation();
    int GetUpdateDisplayName();
    int GetUseMonkAbilities();
    int GetUseRange(unsigned long, Vector &, float &);
    int GetVisibilityList();
    CNWVisibilityNode * GetVisibleListElement(unsigned long);
    int GetVisionType();
    int GetWalkAnimation();
    float GetWalkRate();
    int GetWeaponPower(CNWSObject *, int);
    int GetWeaponScale();
    int HandleSubAreaStateChanges(CExoArrayList<unsigned long> *, CExoArrayList<unsigned long> *, int);
    void InitialisePVPList();
    void InitializeQuickbar();
    int IsAIState(unsigned short);
    int IsHelpless();
    int LearnScroll(unsigned long);
    void LoadAssociateList(CResGFF *, CResStruct *);
    void LoadAutoMapData(CResGFF *, CResStruct *);
    int LoadCreature(CResGFF *, CResStruct *, int, int, int, int);
    int LoadFromTemplate(CResRef, CExoString *);
    void LoadPersonalReputationList(CResGFF *, CResStruct *);
    int LoadPolymorphData(CResGFF *, CResStruct *, int);
    void LoadQuickBarHack(CExoString);
    void LoadQuickButtons(CResGFF *, CResStruct *);
    float MaxAttackRange(unsigned long, int, int);
    void MergeItem(CNWSItem *, CNWSItem *);
    void NotifyAssociateActionToggle(int);
    void PacifyCreature();
    void PacifyCreature(unsigned long);
    void PayToIdentifyItem(unsigned long, unsigned long);
    int Polymorph(int, CGameEffect *, int);
    void PossessCreatureDM(unsigned long, unsigned char);
    void PossessCreature(unsigned long);
    void PossessFamiliar();
    void PostProcess();
    void ProcessMasterDeathForAssociates();
    void ProcessPendingCombatActions();
    void QuickbarButton_RemoveItem(unsigned long);
    void QuickbarButton_RemoveSpell(unsigned long);
    void ReadItemsFromGff(CResGFF *, CResStruct *, int, int);
    void ReadScriptsFromGff(CResGFF *, CResStruct *);
    void RealizeAssociateList();
    void ReceiveAssociateCommand(int);
    void RecomputeAmbientAnimationState();
    void RelayQuickChatCommandToAssociates(unsigned short);
    void RemoveAllAssociates();
    int RemoveAreaOfEffect(unsigned long);
    void RemoveAssociate(unsigned long);
    void RemoveBadEffects();
    int RemoveCharmEffectsByFactionID(int, int);
    int RemoveCharmEffectsByOBJECTID(unsigned long, int);
    void RemoveCombatInvisibilityEffects();
    int RemoveDominationEffect();
    void RemoveDomination();
    void RemoveFromArea(int);
    int RemoveFromAssociateList(unsigned long);
    int RemoveFromInvitationsOffered(unsigned long);
    void RemoveFromPVPList(unsigned long);
    void RemoveFromVisibleList(unsigned long);
    void RemoveGold(int, int);
    int RemoveItemFromRepository(CNWSItem *, int);
    int RemoveItem(CNWSItem *, int, int, int, int);
    void RemoveSleepEffects();
    void RemoveSpellActionFromRound();
    void RemoveWoundingEffects();
    int ReplyToInvitation(int, unsigned long);
    void ReprocessAssociateList();
    int RequestBuy(unsigned long, unsigned long, unsigned long);
    int RequestSell(unsigned long, unsigned long);
    void ResetItemPossessor();
    void ResetPCDominatedScripts();
    void ResetUpdateTimes(unsigned long, unsigned long);
    void ResolveAmmunition(unsigned long);
    void ResolveAttackRoll(CNWSObject *);
    void ResolveAttack(unsigned long, int, int);
    void ResolveCachedSpecialAttacks();
    void ResolveDamageShields(CNWSCreature *);
    void ResolveDamage(CNWSObject *);
    void ResolveDeathAttack(CNWSCreature *);
    int ResolveDefensiveEffects(CNWSObject *, int);
    int ResolveElementalDamage(CNWSObject *);
    void ResolveInitiative();
    void ResolveItemCastSpell(CNWSObject *);
    void ResolveMeleeAnimations(int, int, CNWSObject *, int);
    void ResolveMeleeAttack(CNWSObject *, int, int);
    void ResolveMeleeSpecialAttack(int, int, CNWSObject *, int);
    void ResolveOnHitEffect(CNWSObject *, int, int);
    void ResolveOnHitVisuals(CNWSObject *);
    void ResolvePostMeleeDamage(CNWSObject *);
    void ResolvePostRangedDamage(CNWSObject *);
    void ResolveRangedAnimations(CNWSObject *, int);
    void ResolveRangedAttack(CNWSObject *, int, int);
    void ResolveRangedMiss(CNWSObject *);
    void ResolveRangedSpecialAttack(CNWSObject *, int);
    void ResolveSafeProjectile(unsigned long, int);
    void ResolveSituationalModifiers(CNWSObject *);
    void ResolveSneakAttack(CNWSCreature *);
    void Rest(int, int);
    void RestoreCutsceneVars();
    void RestoreItemPropertiesInRepository(CItemRepository *);
    void RestoreItemProperties();
    int RunEquip(unsigned long, unsigned long, unsigned long);
    int RunUnequip(unsigned long, unsigned long, unsigned char, unsigned char, int, unsigned long);
    void SaveAssociateList(CResGFF *, CResStruct *);
    void SaveAutoMapData(CResGFF *, CResStruct *);
    int SaveCreature(CResGFF *, CResStruct *, int, int, int);
    void SavePersonalReputationList(CResGFF *, CResStruct *);
    void SaveQuickBarHack(CExoString);
    void SaveQuickButtons(CResGFF *, CResStruct *);
    unsigned char SavingThrowRoll(unsigned char, unsigned short, unsigned char, unsigned long, int, unsigned short, int);
    void SawTrapInformAssociates(unsigned long);
    void SendFeedbackMessage(unsigned short, CNWCCMessageData *, CNWSPlayer *);
    void SendFeedbackString(CExoString, CNWSPlayer *);
    int SetAIStateFlag(unsigned short, int);
    int SetAIState(unsigned short);
    int SetActivityLocked(unsigned long, int);
    void SetActivity(int, int);
    int SetAlive();
    void SetAllTilesExplored(unsigned long, int);
    int SetAlreadyRemovedFromEncounter(int);
    int SetAmbientAnimationState(unsigned char);
    int SetAnimalCompanionCreatureType(int);
    void SetAnimalCompanionName(CExoString);
    void SetAnimation(int);
    void SetAssociateListenPatterns();
    void SetAssociateType(unsigned short);
    void SetAssociatesToForgetAggression(unsigned long);
    int SetAttackTarget(unsigned long);
    int SetAttemptedAttackTarget(unsigned long);
    int SetAttemptedSpellTarget(unsigned long);
    int SetAutoMapData(int, unsigned long *, unsigned char **);
    int SetBlindsightDistance(float);
    int SetBodyBagId(unsigned long);
    int SetBodyBag(unsigned char);
    int SetBroadcastedAOOTo(int);
    int SetCalculateNPCWeight(int);
    void SetCombatMode(unsigned char, int);
    void SetCombatState(int);
    int SetCounterSpellTarget(unsigned long);
    int SetCreatureSize(int);
    int SetCreatureState(unsigned char);
    int SetCurrentItemContainer(unsigned long);
    int SetCutsceneCameraMode(int);
    int SetCutsceneCameraMovementRateFactor(float);
    int SetCutsceneGhost(int);
    int SetDMCharacter(int);
    int SetDead();
    int SetDecayTime(unsigned long);
    void SetDefensiveCastingMode(unsigned char);
    int SetDesiredAreaId(unsigned long);
    int SetDesiredAreaLocation(Vector);
    int SetDesiredAreaUpdateComplete(int);
    int SetDesiredCombatMode(unsigned char);
    void SetDetectMode(unsigned char);
    int SetDisarmable(int);
    void SetDisplayName(CExoString);
    int SetDriveModeMoveFactor(float);
    int SetDriveMode(int);
    int SetDropItemAnimationPlayed(int);
    void SetEffectSpellId(unsigned long);
    int SetEncounterId(unsigned long);
    int SetEncumbranceState(int);
    int SetEquipArrayIndex(unsigned short);
    int SetEquippedWeight(int);
    void SetExcitedState(unsigned char);
    int SetExternalCombatModeEnabled(int);
    int SetFacingAndAnimationDone(int);
    int SetFactionId(int);
    int SetFamiliarCreatureType(int);
    void SetFamiliarName(CExoString);
    int SetFootstepType(int);
    int SetForcedWalk(int);
    int SetGoingToBeAttackedBy(unsigned long);
    void SetGold(int);
    int SetHasArms(int);
    int SetHasLegs(int);
    int SetHasted(int);
    int SetHealAnimationPlayed(int);
    void SetId(unsigned long);
    void SetInTransit(int);
    int SetInitiativeExpired(int);
    int SetInitiativeRoll(unsigned char);
    int SetInvitedToPartyBy(unsigned long);
    void SetInvitedToParty(int);
    int SetIsDiseased(int);
    int SetIsImmortal(int);
    int SetIsPoisoned(int);
    int SetIsPolymorphed(int);
    int SetItemCastSpellBroadcastAOO(int);
    int SetItemContainerArrayIndex(unsigned short);
    int SetJumpedRecently(int);
    int SetLastAmmunitionWarning(int);
    int SetLastAssociateCommand(int);
    int SetLastBlockingDoor(unsigned long);
    int SetLastCounterDomainLevel(unsigned char);
    int SetLastCounterMetaType(unsigned char);
    int SetLastCounterSpellClass(unsigned char);
    int SetLastCounterSpellID(int);
    int SetLastHearbeatTime(unsigned long, unsigned long);
    int SetLastHideRoll(unsigned char);
    int SetLastItemCastSpellLevel(int);
    int SetLastItemCastSpell(int);
    int SetLastListenRoll(unsigned char);
    int SetLastMoveSilentlyRoll(unsigned char);
    int SetLastPerceived(unsigned long);
    int SetLastPerceptionHeard(int);
    int SetLastPerceptionInaudible(int);
    int SetLastPerceptionSeen(int);
    int SetLastPerceptionVanished(int);
    int SetLastPickupFailed(int);
    int SetLastSpellCastItem(unsigned long);
    int SetLastSpellUnReadied(int);
    int SetLastSpotRoll(unsigned char);
    int SetLastTrapDetected(unsigned long);
    int SetListenCheckDistance(float);
    int SetLockAnimationPlayed(int);
    void SetLockOrientationToObject(unsigned long);
    int SetLootable(int);
    int SetMagicalArrowsEquipped(int);
    int SetMagicalBoltsEquipped(int);
    int SetMagicalBulletsEquipped(int);
    int SetMasterId(unsigned long);
    int SetMaxListenCheckDistance(float);
    int SetMaxSpotCheckDistance(float);
    void SetMode(unsigned char, int);
    void SetModelType(CExoString);
    void SetMovementRateFactor(float);
    int SetNoPermDeath(int);
    int SetNumAreas(int);
    int SetNumCharSheetViewers(int);
    int SetOnCreationScriptExecuted(int);
    int SetOriginalFactionId(int);
    void SetPCDominatedScripts();
    void SetPVPPlayerLikesMe(unsigned long, int, int);
    int SetPassiveAttackBehaviour(int);
    int SetPendingRealization(int);
    int SetPersonalReputation(CExoArrayList<CNWSPersonalReputation> *);
    int SetPickUpItemAnimationPlayed(int);
    int SetPlayerCharacter(int);
    int SetPolymorphLocked(int);
    int SetPonyRide(int);
    void SetPortraitId(unsigned short);
    void SetPortrait(CResRef);
    int SetPreDominationFactionId(int);
    int SetPrePolymorphCON(int);
    int SetPrePolymorphDEX(int);
    int SetPrePolymorphSTR(int);
    int SetPreferredAttackDistance(float);
    void SetQuickbarButton_AssociateCommand(unsigned char, int, unsigned short, unsigned long);
    void SetQuickbarButton_CommandLine(unsigned char, CExoString const &, CExoString const &);
    void SetQuickbarButton_DM_General_ResRefParam(unsigned char, unsigned char, CResRef const &);
    void SetQuickbarButton_DungeonMaster_CreateCreature(unsigned char, CResRef const &, CExoString const &);
    void SetQuickbarButton_DungeonMaster_CreateEncounter(unsigned char, CResRef const &, CExoString const &);
    void SetQuickbarButton_DungeonMaster_CreateItem(unsigned char, CResRef const &, CExoString const &);
    void SetQuickbarButton_DungeonMaster_CreatePlaceable(unsigned char, CResRef const &, CExoString const &);
    void SetQuickbarButton_DungeonMaster_CreatePortal(unsigned char, CResRef const &, CExoString const &);
    void SetQuickbarButton_DungeonMaster_CreateTrigger(unsigned char, CResRef const &, CExoString const &);
    void SetQuickbarButton_DungeonMaster_CreateWaypoint(unsigned char, CResRef const &, CExoString const &);
    void SetQuickbarButton_GeneralINTParam(unsigned char, unsigned char, int);
    void SetQuickbarButton_GeneralNoParam(unsigned char, unsigned char);
    void SetQuickbarButton_Item(unsigned char, unsigned long, int, unsigned long);
    void SetQuickbarButton_SpellLikeAbility(unsigned char, unsigned long, unsigned char);
    void SetQuickbarButton_Spell(unsigned char, unsigned char, unsigned long, unsigned char, unsigned char);
    int SetRepositoryArrayIndex(unsigned short);
    int SetReputation(CExoArrayList<int> *);
    void SetScriptName(int, CExoString);
    int SetSilent(int);
    int SetSittingObject(unsigned long);
    int SetSlowed(int);
    int SetSoundSet(unsigned short);
    int SetSpellTarget(unsigned long);
    int SetSpotCheckDistance(float);
    void SetStandardFactionReputation(int, int);
    int SetStealAnimationPlayed(int);
    int SetStealAttemptDetected(int);
    void SetStealthMode(unsigned char);
    int SetSummonedAnimalCompanion(int);
    int SetSummonedFamiliar(int);
    int SetTauntAnimationPlayed(int);
    int SetTaunt(int);
    void SetTileExplored(unsigned long, int, int);
    int SetTrapAnimationPlayed(int);
    int SetUnlockAnimationPlayed(int);
    int SetUpdateCombatInformation(int);
    int SetUpdateDisplayName(int);
    int SetVisionType(unsigned char);
    int SetWalkAnimation(unsigned char);
    int SetWeaponScale(float);
    void SignalMeleeDamage(CNWSObject *, int);
    void SignalRangedDamage(CNWSObject *, int);
    void SpawnInHeartbeatPerception(int);
    void SplitItem(CNWSItem *, int);
    int StartBarter(unsigned long, unsigned long, int);
    void StartGuiTimingBar(unsigned long, unsigned char);
    void StopGuiTimingBar();
    void StoreCutsceneVars();
    void SummonAnimalCompanion();
    void SummonAssociate(CResRef, CExoString, unsigned short);
    void SummonFamiliar();
    int TerminateClientSidePath(int);
    int TestAIStateAsMode(int);
    int ToggleMode(unsigned char);
    int TransferGold(unsigned long, Vector, unsigned long, int, unsigned char, unsigned char);
    int TranslateAddress(unsigned long, int, int, int *, int *);
    int UnPolymorph(CGameEffect *);
    int UnequipItem(CNWSItem *, int);
    void UnpossessCreatureDM();
    void UnpossessCreature();
    void UnpossessFamiliar();
    void UnsummonMyself();
    void UpdateActionQueue();
    void UpdateAppearanceDependantInfo();
    void UpdateAppearanceForEquippedItems();
    void UpdateAttributesOnEffect(CGameEffect *, int);
    void UpdateAutoMap(unsigned long);
    void UpdateCombatRoundTimer();
    void UpdateEffectPtrs();
    void UpdateEncumbranceState(int);
    int UpdateExcitedStateTimer();
    void UpdatePersonalSpace();
    int UpdateSpecialAttacks();
    int UpdateSubareasOnJumpPosition(Vector, unsigned long);
    int UpdateSubareasOnMoveTo(Vector, Vector, int, CExoArrayList<unsigned long> *, int);
    int UpdateTrapCheckDM();
    void UpdateTrapCheck();
    void UpdateVisibleList();
    int UseFeat(unsigned short, unsigned short, unsigned long, unsigned long, Vector *);
    int UseItem(unsigned long, unsigned char, unsigned char, unsigned long, Vector, unsigned long);
    int UseLoreOnItem(unsigned long);
    int UseSkill(unsigned char, unsigned char, unsigned long, Vector, unsigned long, unsigned long, int);
    void ValidateCounterSpellData(unsigned long, unsigned char, unsigned char);
    int WalkUpdateLocationDistance(float, Vector *, Vector *, CExoArrayList<unsigned long> *);
    int WalkUpdateLocationTestDistance(Vector, Vector);
    unsigned long WalkUpdateLocation();
    ~CNWSCreature();
    CNWSCreature(unsigned long, int, int);

    /* 0x1C4/452 */ unsigned long field_1C4;
    /* 0x1F8/504 */ char rsvd1[48];
    /* 0x1F8/504 */ CExoString HeartbeatScript;
    /* 0x200/512 */ CExoString PerceptionScript;
    /* 0x208/520 */ CExoString SpellCastAtScript;
    /* 0x210/528 */ CExoString AttackedScript;
    /* 0x218/536 */ CExoString DamagedScript;
    /* 0x220/544 */ CExoString DisturbedScript;
    /* 0x228/552 */ CExoString EndCombatScript;
    /* 0x230/560 */ CExoString ConversationScript;
    /* 0x238/568 */ CExoString SpawnScript;
    /* 0x240/576 */ CExoString RestedScript;
    /* 0x248/584 */ CExoString DeathScript;
    /* 0x250/592 */ CExoString UserDefScript;
    /* 0x258/600 */ CExoString BlockedScript;
    /* 0x260/608 */ CExoString HeartbeatScript_;
    /* 0x268/616 */ CExoString PerceptionScript_;
    /* 0x270/624 */ CExoString SpellCastAtScript_;
    /* 0x278/632 */ CExoString AttackedScript_;
    /* 0x280/640 */ CExoString DamagedScript_;
    /* 0x288/648 */ CExoString EndCombatScript_;
    /* 0x290/656 */ CExoString ConversationScript_;
    /* 0x298/664 */ CExoString SpawnScript_;
    /* 0x2A0/672 */ CExoString RestedScript_;
    /* 0x2A8/680 */ CExoString DeathScript_;
    /* 0x2B0/688 */ CExoString UserDefScript_;
    /* 0x2B8/696 */ CExoString BlockedScript_;
    /* 0x2C0/704 */ unsigned long field_2C0;
    /* 0x2C4/708 */ unsigned long field_2C4;
    /* 0x2C8/712 */ unsigned long Quickbar;
    /* 0x2CC/716 */ unsigned long Lootable;
    /* 0x2D0/720 */ unsigned long DecayTime;
    /* 0x2D4/724 */ unsigned long BodyBagID;
    /* 0x304/772 */ char rsvd2[44];
    /* 0x304/772 */ unsigned long BlockedBy;
    /* 0x308/776 */ unsigned long PositionStruct;
    /* 0x488/1160 */ char rsvd3[380];
    /* 0x488/1160 */ unsigned long LawfulChaotic;
    /* 0x48C/1164 */ unsigned long field_48C;
    /* 0x490/1168 */ char **AreaMiniMaps;
    /* (mtype:CExoArrayList<unsigned long>) */
    /* 0x494/1172 */ CExoArrayList<unsigned long> AreaList;
    /* 0x4A0/1184 */ unsigned long AreaCount;
    /* 0x4A4/1188 */ unsigned long field_4A4;
    /* 0x4B0/1200 */ char rsvd4[8];
    /* 0x4B0/1200 */ unsigned long field_4B0;
    /* 0x4C0/1216 */ char rsvd5[12];
    /* 0x4C0/1216 */ unsigned long InCombat;
    /* 0x4D4/1236 */ char rsvd6[16];
    /* 0x4D4/1236 */ unsigned long Disarmable;
    /* 0x4D8/1240 */ unsigned long CreatureSize;
    /* 0x4E4/1252 */ char rsvd7[8];
    /* 0x4E4/1252 */ unsigned long AttackTarget;
    /* 0x4E8/1256 */ unsigned long AttemptedAttackTarget;
    /* 0x4F8/1272 */ char rsvd8[12];
    /* 0x4F8/1272 */ unsigned long Attacker;
    /* 0x4FC/1276 */ unsigned long SpellTarget;
    /* 0x9E1/2529 */ char rsvd9[1249];
    /* 0x9E1/2529 */ char field_9E1;
    /* 0x9E2/2530 */ char field_9E2;
    /* 0xA18/2584 */ char rsvd10[53];
    /* 0xA18/2584 */ unsigned long PrimaryRange;
    /* 0xA20/2592 */ char rsvd11[4];
    /* 0xA20/2592 */ unsigned long SecondaryRange;
    /* 0xA74/2692 */ char rsvd12[80];
    /* 0xA74/2692 */ unsigned long ItemSpell;
    /* 0xA78/2692 */ unsigned long ItemSpellLevel;
    /* 0xA7C/2692 */ char rsvd12_2[8];
    /* 0xA84/2692 */ unsigned long field_A84;
    /* 0xA88/2696 */ unsigned long Spotted;
    /* 0xA8C/2700 */ unsigned long field_A8C[15];
    /* 0xAC8/2760 */ unsigned long field_AC8;
    /* 0xACC/2764 */ CNWSCombatRound *CombatRound;
    /* 0xAD0/2768 */ unsigned long field_AD0;
    /* 0xAD4/2772 */ void *Barter;
    /* 0xAD8/2776 */ unsigned long Gold;
    /* 0xADC/2780 */ unsigned long IsPC;
    /* 0xAE0/2784 */ unsigned short SoundSetFile;
    /* 0xAE4/2788 */ char rsvd13[2];
    /* 0xAE4/2788 */ unsigned long FootstepType;
    /* 0xAE8/2792 */ unsigned long BodyBag;
    /* 0xAEC/2796 */ unsigned long field_AEC;
    /* 0xAF0/2800 */ unsigned long field_AF0;
    /* 0xAF4/2804 */ unsigned long field_AF4;
    /* 0xAF8/2808 */ unsigned long IsImmortal;
    /* 0xAFC/2812 */ unsigned long field_AFC;
    /* 0xB00/2816 */ CExoString NameOverride;
    /* 0xB08/2824 */ unsigned long field_B08;
    /* 0xB0C/2828 */ unsigned short field_B0C;
    /* 0xB0E/2830 */ char AIState;
    /* 0xB10/2832 */ char rsvd14;
    /* 0xB10/2832 */ unsigned long field_B10;
    /* 0xB34/2868 */ char rsvd15[32];
    /* 0xB34/2868 */ unsigned long MasterID;
    /* (ptr_to:CExoArrayList<int>) */
    /* 0xB38/2872 */ CExoArrayList<int> *field_B38;
    /* 0xB5C/2908 */ char rsvd16[32];
    /* 0xB5C/2908 */ void *ReputationInformation;
    /* (ptr_to:CExoArrayList<int>) */
    /* 0xB60/2912 */ CExoArrayList<int> *m_pReputation;
    /* 0xB70/2928 */ char rsvd17[12];
    /* 0xB70/2928 */ void *Inventory;
    /* 0xB74/2932 */ void *ItemRepository;
    /* 0xB78/2936 */ unsigned short field_B78;
    /* 0xB7A/2938 */ unsigned short field_B7A;
    /* 0xB7C/2940 */ unsigned long field_B7C;
    /* 0xB80/2944 */ unsigned long field_B80[42];
    /* 0xC28/3112 */ CNWSCreatureAppearanceInfo CreatureAppearanceInfo;
    /* 0xC68/3176 */ CNWSCreatureStats *CreatureStats;
    /* 0xC6C/3180 */ unsigned long field_C6C;
    /* 0xC70/3184 */ unsigned long field_C70;
};
#endif
