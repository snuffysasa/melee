#ifndef _ftgigakoopa_h_
#define _ftgigakoopa_h_

#include <sysdolphin/baselib/gobj.h>
#include <melee/ft/fighter.h>

void ftGKoopa_OnDeath(HSD_GObj*);
void func_8014F698(HSD_GObj*);
void ftGKoopa_OnLoad(HSD_GObj*);
void ftGKoopa_OnItemPickup(HSD_GObj*, BOOL);
void ftGKoopa_OnItemInvisible(HSD_GObj*);
void ftGKoopa_OnItemVisible(HSD_GObj*);
void ftGKoopa_OnItemRelease(HSD_GObj*, s32);
void func_8014F8E4(HSD_GObj*);
void func_8014F904(HSD_GObj*);
void func_8014F948(HSD_GObj*);
void func_8014F98C(s32, s32*, s32*);
s32 func_8014F9A4(s32);

#endif
