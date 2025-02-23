#include "fticeclimber.h"

/// TODO remove float externs when file is finished and float data is removed from asm
extern f32 lbl_804D9830;

void ftIceClimberOnItemPickup(HSD_GObj* gobj, BOOL arg1)
{
    s32 result, switched_res, unused;

    Fighter* ft = gobj->user_data;
    result = func_8026B2B4(ft->x1974_heldItem);

    if (result == 0) {
        switched_res = func_8026B320(ft->x1974_heldItem);
        switch (switched_res) {
            case 1:
                func_80070FB4(gobj, 1, 1);
                break;
            case 2:
                func_80070FB4(gobj, 1, 0);
                break;
            case 3:
                func_80070FB4(gobj, 1, 2);
                break;
            case 4:
                func_80070FB4(gobj, 1, 3);
                break;
        }

        if (arg1 != 0) {
            func_80070C48(gobj, 1);
        }
    }
}

void ftIceClimber_OnItemInvisible(HSD_GObj* fighterObj) {
    Fighter* fighter = fighterObj->user_data;
    if (!func_8026B2B4(fighter->x1974_heldItem)) {
        func_80070CC4(fighterObj, 1);
    }
}

void ftIceClimber_OnItemVisible(HSD_GObj *fighterObj) {
    Fighter* fighter = fighterObj->user_data;
    if (!func_8026B2B4(fighter->x1974_heldItem)) {
        func_80070C48(fighterObj, 1);
    }
}

void ftIceClimber_OnItemRelease(HSD_GObj* fighterObj, s32 arg1) {
    func_80070FB4(fighterObj, 1, -1);
    if (arg1) {
        func_80070CC4(fighterObj, 1);
    }
}

void ftIceClimberOnLoadForNana(Fighter* fighter) {
    PUSH_ATTRS(fighter, ftIceClimberAttributes);
}

void ftIceClimberOnLoad(HSD_GObj* fighterObj) {

    s32 unused;
    Fighter* fighter = fighterObj->user_data;
    void** item_list = fighter->x10C_ftData->x48_items;
    fighter->x2222_flag.bits.b5 = 1; 
    
    PUSH_ATTRS(fighter, ftIceClimberAttributes);

    {
        ftIceClimberAttributes* attr = fighter->x2D4_specialAttributes;
        fighter->x40 = attr->x0;
        func_8026B3F8(item_list[0], 0x6AU);
        func_8026B3F8(item_list[1], 0x6BU);
        func_8026B3F8(item_list[2], 0x71U);
    }

}

void ftIceClimberOnDeath(HSD_GObj* fighterObj) {
    Fighter* fighter = fighterObj->user_data;
    ftIceClimberAttributes* attr = fighter->x2D4_specialAttributes;
    func_80074A4C(fighterObj, 0U, 0);
    func_80074A4C(fighterObj, 1U, 0);
    fighter->sa.nana.x2234 = 0;
    fighter->sa.nana.x222C = 0;
    fighter->sa.nana.x2230.bits.b0 = 0;
    fighter->sa.nana.x2238 = 0;
    fighter->sa.nana.x224C = 0;
    fighter->sa.nana.x2250 = lbl_804D9830;
}
