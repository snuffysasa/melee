#include "ftsamus.h"

inline void ftSamus_801292E4_inner(HSD_GObj* fighterObj) {
    Fighter* fighter = getFighterPlus(fighterObj);
    fighter->cb.x21DC_callback_OnTakeDamage = &ftSamus_80128428;
    fighter->cb.x21E4_callback_OnDeath2 = &ftSamus_80128428;
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
            ftSamus_801292E4_inner(fighterObj);
        } else {
            fighter->sa.samus.x222C = 0U;
            return 1;
        }
    }
    return 0;
}