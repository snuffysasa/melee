#ifndef _ftzakogirl_h_
#define _ftzakogirl_h_

#include <sysdolphin/baselib/gobj.h>
#include <melee/ft/fighter.h>

void ftZakoGirl_OnDeath(HSD_GObj*);
void ftZakoGirl_OnLoad(HSD_GObj*);
void ftZakoGirl_OnItemPickup(HSD_GObj*, BOOL);
void ftZakoGirl_OnItemInvisible(HSD_GObj*);
void ftZakoGirl_OnItemVisible(HSD_GObj*);
void ftZakoGirl_OnItemRelease(HSD_GObj*, s32);
void func_8014F624(HSD_GObj*);

#endif
