#include "ftzakogirl.h"

void ftZakoGirl_OnDeath(HSD_GObj* gobj)
{
    func_80074A4C(gobj, 0, 0);
}

void ftZakoGirl_OnLoad(HSD_GObj* gobj)
{
    Fighter* ft = gobj->user_data;
    PUSH_ATTRS(ft, s32);
}

void ftZakoGirl_OnItemPickup(HSD_GObj* gobj, BOOL arg1)
{
    s32 result, switched_res, unused;

    Fighter* ft = gobj->user_data;
    result = func_8026B2B4(ft->x1974_heldItem);

    if (result == 0) {
        switched_res = func_8026B320(ft->x1974_heldItem);
        switch (switched_res) {
            case 1:
                func_80070FB4(gobj, 0, 1);
                break;
            case 2:
                func_80070FB4(gobj, 0, 0);
                break;
            case 3:
                func_80070FB4(gobj, 0, 2);
                break;
            case 4:
                func_80070FB4(gobj, 0, 3);
                break;
        }

        if (arg1 != 0) {
            func_80070C48(gobj, 0);
        }
    }
}

void ftZakoGirl_OnItemInvisible(HSD_GObj* gobj)
{
    Fighter* ft = gobj->user_data;
    if (func_8026B2B4(ft->x1974_heldItem) == 0) {
        func_80070CC4(gobj, 0);
    }
}

void ftZakoGirl_OnItemVisible(HSD_GObj* gobj)
{
    Fighter* ft = gobj->user_data;
    if (func_8026B2B4(ft->x1974_heldItem) == 0) {
        func_80070C48(gobj, 0);
    }
}

void ftZakoGirl_OnItemRelease(HSD_GObj* gobj, s32 arg1)
{
    func_80070FB4(gobj, 0, -1);
    if (arg1 != 0) {
        func_80070CC4(gobj, 0);
    }
}

void func_8014F624(HSD_GObj* gobj)
{
    Fighter* ft = gobj->user_data;
    *(u32*) ft->x2D4_specialAttributes = *(u32*)ft->x10C_ftData->ext_attr;
}
