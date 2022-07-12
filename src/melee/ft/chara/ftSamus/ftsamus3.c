#include "ftsamus.h"


void ftSamus_801291F0(HSD_GObj* fighterObj){
    if (fighterObj) {
        Fighter* fighter = getFighter(fighterObj);
        if (fighter->sa.samus.x222C) {
            fighter->sa.samus.x222C = 0;
        }
        ftSamus_destroyAllEF(fighterObj);
    } 
}


void ftSamus_80129258(HSD_GObj* fighterObj) {
    
    if (fighterObj) {
        Fighter* fighter = getFighter(fighterObj);
        ftSamus_UnkAndDestroyAllEF(fighterObj);
        fighter->sa.samus.x2230 = 0;
    }
}


s32 ftSamus_801292E4(HSD_GObj* fighterObj) {
    Vec vec1;
    Vec vec2;
    
    u32 result;
    Fighter* fighter = getFighter(fighterObj);
    
    if ((fighter->x2200_ftcmd_var0 == 1U) && (!fighter->sa.samus.x222C)) {
        fighter->x2200_ftcmd_var0 = 0U;
        vec2.z = 4.0f;
        vec2.y = 0.0f;
        vec2.x = 0.0f;
        func_8000B1CC(fighter->x5E8_fighterBones[50].x0_jobj, &vec2, &vec1);
        vec1.z = 0.0f;
        result = func_802B55C8(fighterObj, &vec1, 0x32, 0x5E, fighter->x2C_facing_direction);
        fighter->sa.samus.x222C = result;
        if (result) {
            ftSamus_updateDamageDeathCBs(fighterObj);
        } else {
            fighter->sa.samus.x222C = 0U;
            return 1;
        }
    }
    return 0;
}

void inline ftSamus_801293BC_inner(HSD_GObj* fighterObj) {
    Fighter* fighter = getFighterPlus(fighterObj);
    ftSamusAttributes* samus_attr = fighter->x2D4_specialAttributes;
    s32 x2230 = fighter->sa.samus.x2230;
    fighter->x80_self_vel.x = (fighter->x2C_facing_direction * (samus_attr->x1C * x2230));
}

void ftSamus_801293BC(HSD_GObj* fighterObj) {
    ftSamusAttributes* samus_attr;
    HSD_GObj* held_item;
    Fighter* fighter;
    f64 var_f0;
    s32 unused[5]; // could not match all the stack without this

    fighter = getFighterPlus(fighterObj);
    samus_attr = getFtSpecialAttrs(fighter);

    if ((fighter->x2204_ftcmd_var1 == 1) && (fighter->sa.samus.x222C)) {
        Vec vec1;
        u32 x2230; 

        fighter->x2204_ftcmd_var1 = 2;
        func_8000B1CC(fighter->x5E8_fighterBones[51].x0_jobj, NULL, &vec1);
        vec1.z = 0.0f;
        held_item = fighter->x1974_heldItem; 
        if (1.0f == fighter->x2C_facing_direction) {
            var_f0 = 0.0;
        } else {
            var_f0 = M_PI;
        }
        x2230 = fighter->sa.samus.x2230; 
        func_802B56E4(fighter->sa.samus.x222C, &vec1, var_f0, x2230, samus_attr->x18);
        if ((fighter->x10_action_state_index == 0x15C) ||  (fighter->xE0_ground_or_air == GA_Air)) {
            ftSamus_801293BC_inner(fighterObj);
        }
        fighter->sa.samus.x2230 = 0U;
        
        ftSamus_801291F0(fighterObj);
        ef_Spawn(0x486, fighterObj, &vec1, &fighter->x2C_facing_direction);
        fighter->x1974_heldItem = held_item;
    }
}

void ftSamus_SpecialN_StartAction(HSD_GObj* fighterObj) {
    Vec* self_vel;
    Fighter* fighter = getFighter(fighterObj);
    Fighter_ActionStateChange_800693AC(fighterObj, 0x157, 0, NULL, 0.0f, 1.0f, 0.0f);
    fighter->x220C_ftcmd_var3 = 0;
    fighter->x2208_ftcmd_var2 = 0;
    fighter->x2204_ftcmd_var1 = 0;
    fighter->x2200_ftcmd_var0 = 0;
    func_8007D7FC(fighter);
    self_vel = &fighter->x80_self_vel;
    self_vel->y = 0.0f;
    ftSamus_updateDamageDeathCBs(fighterObj);
    fighter->x2340_stateVar1 = 0;
    fighter->x2344_stateVar2 = 0;
    fighter->x2348_stateVar3_f32 = 0.0f;
    func_8006EBA4(fighterObj);
}  

void ftSamus_SpecialAirN_StartAction(HSD_GObj* fighterObj) {
    Fighter* fighter = getFighter(fighterObj);
    Fighter_ActionStateChange_800693AC(fighterObj, 0x15B, 0, NULL, 0.0f, 1.0f, 0.0f);
    fighter->x220C_ftcmd_var3 = 0;
    fighter->x2208_ftcmd_var2 = 0;
    fighter->x2204_ftcmd_var1 = 0;
    fighter->x2200_ftcmd_var0 = 0;
    ftSamus_updateDamageDeathCBs(fighterObj);
    fighter->x2340_stateVar1 = 1;
    fighter->x2344_stateVar2 = 0;
    fighter->x2348_stateVar3_f32 = 0.0f;
    func_8006EBA4(fighterObj);
}


void ftSamus_80129684(HSD_GObj* fighterObj) {
    Fighter* fighter = fighterObj->user_data;
    ftSamusAttributes* samus_attr = fighter->x2D4_specialAttributes;
    ftSamus_801292E4(fighterObj);
    if (ftAnim_IsFramesRemaining(fighterObj) == 0) {
        if ((fighter->x2340_stateVar1 == 1) || (fighter->sa.samus.x2230 == samus_attr->x18)) {
            Fighter_ActionStateChange_800693AC(fighterObj, 0x15A, 0, NULL, 0.0f, 1.0f, 0.0f);
        } else {
            Fighter_ActionStateChange_800693AC(fighterObj, 0x158, 0, NULL, 0.0f, 1.0f, 0.0f);
            ftSamus_SetAttrx2334(fighterObj);
        }
        ftSamus_updateDamageDeathCBs(fighterObj);
    }
}


extern s32 lbl_803CE6B8[]; // TODO

void ftSamus_80129774(HSD_GObj *fighterObj)
{
  s32 unused;
  Fighter *fighter;
  Fighter *fighter2;
  ftSamusAttributes *samus_attr;
  ftSamusAttributes *samus_attr2;

  fighter = fighter2 = getFighter(fighterObj);
  samus_attr = samus_attr2 = getFtSpecialAttrs(fighter);
  if (fighter2->x2208_ftcmd_var2) {
    /// this block might be an inline, but couldn't get the regalloc to behave
    f32 var_f1;
    s32 index;
    fighter2->x2208_ftcmd_var2 = 0;
    if (fighter2->sa.samus.x2230){
      var_f1 = fighter2->sa.samus.x2230 / samus_attr->x18;
    }
    else {
      var_f1 = 0.f;
    }
    index = 5.0f * var_f1;
    func_80088510(fighter2, lbl_803CE6B8[index], 0x7F, 0x40);
  }
    
  fighter->x2344_stateVar2 += 1;
  if (fighter->x2344_stateVar2_s32 > samus_attr->x20)
  {
    fighter->x2344_stateVar2 = 0;
    fighter->sa.samus.x2230 += 1;
    if (fighter->sa.samus.x2230 >= samus_attr->x18)
    {
      func_800BFFD0(fighter, 0x35, 0);
      fighter->sa.samus.x2230 = samus_attr->x18;
      Fighter_ActionStateChange_800693AC(fighterObj, 0x159, 0, 0, 0.0f, 1.0f, 0.0f);
      ftSamus_UnkAndDestroyAllEF(fighterObj);
      ftSamus_updateDamageDeathCBs(fighterObj);
    }
  }
}

void ftSamus_80129940(HSD_GObj* fighterObj) {
    ftSamus_UnkAndDestroyAllEF(fighterObj);
    if (!ftAnim_IsFramesRemaining(fighterObj)) {
        func_8008A2BC(fighterObj);
    }
}

