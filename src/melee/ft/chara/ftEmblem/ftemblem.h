#ifndef _ftemblem_h_
#define _ftemblem_h_

#include <sysdolphin/baselib/gobj.h>
#include <melee/ft/fighter.h>

void ftRoy_OnDeath(HSD_GObj*);
void ftRoy_OnItemPickup(HSD_GObj*, BOOL);
void ftRoy_OnItemInvisible(HSD_GObj*);
void ftRoy_OnItemVisible(HSD_GObj*);
void ftRoy_OnItemRelease(HSD_GObj*, s32);
void ftRoy_OnLoad(HSD_GObj*);
void func_8014F148(HSD_GObj*);
void func_8014F168(HSD_GObj*);
void func_8014F1AC(HSD_GObj*);

#endif
