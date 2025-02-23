
#include "melee/ft/ftcommon.h"
#include "melee/lb/lbvector.h"

typedef struct _ftPikachuAttributes {
    f32 x0;
    f32 x4;
    f32 x8;
    f32 xC;
    f32 x10;
    u32 x14;
    u32 x18;
    f32 x1C;
    f32 x20;
    f32 x24;
    f32 x28;
    f32 x2C;
    f32 x30;
    f32 x34;
    f32 x38;
    f32 x3C;
    f32 x40;
    f32 x44;
    f32 x48;
    f32 x4C;
    f32 x50;
    f32 x54;
    f32 x58;
    s32 x5C;
    s32 x60;
    f32 x64;
    f32 x68;
    Vec x6C_scale;
    f32 x78;
    Vec x7C_scale;
    f32 x88;
    f32 x8C;

    f32 x90;
    f32 x94;
    f32 x98;
    f32 x9C;

    s32 xA0;
    f32 xA4;
    s32 xA8;
    f32 xAC;

    f32 xB0;
    f32 xB4;
    f32 xB8;
    f32 xBC;

    f32 xC0;
    f32 xC4;
    f32 xC8;
    f32 xCC;

    f32 xD0;
    s32 xD4;
    s32 xD8;
    u32 xDC;

    f32 xE0_array_start;  /// TODO xE0 appears to be array of 6 floats, or two vecs
    f32 xE4;
    f32 xE8;
    f32 xEC;
    f32 xF0;
    f32 xF4;
} ftPikachuAttributes;


/// TODO put the rest of function headers here and rename all of the functions
///pika1
void ftPikachu_OnLoadForPichu(Fighter* fighter);
void ftPikachu_OnLoad(HSD_GObj* fighterObj);
void ftPikachu_OnDeath(HSD_GObj* fighterObj);
void ftPikachu_OnItemPickup(HSD_GObj* fighterObj, BOOL arg1);
void ftPikachu_OnItemInvisible(HSD_GObj *fighterObj);
void ftPikachu_OnItemVisible(HSD_GObj *fighterObj);
void ftPikachu_OnItemRelease(HSD_GObj* fighterObj, s32 arg1);
void ftPikachu_8012467C(HSD_GObj* fighterObj);
void ftPikachu_801246C0(HSD_GObj* fighterObj);
void ftPikachu_ScaleYAttributesArray_80124704(HSD_GObj* fighterObj);
void ftPikachu_801247A8(HSD_GObj* fighterObj);
void ftPikachu_801247EC(HSD_GObj* fighterObj);

///pika2
void ftPikachu_ActionChange_80124830(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_8012489C(HSD_GObj* fighterObj);
void ftPikachu_80124908(HSD_GObj* fighterObj);
void ftPikachu_80124A20(HSD_GObj* fighterObj);
void ftPikachu_Stub_80124B6C();
void ftPikachu_Stub_80124B70();
void ftPikachu_80124B74(HSD_GObj* fighterObj);
void ftPikachu_80124B94(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80124BB4(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80124C20(HSD_GObj* fighterObj);
void ftPikachu_EfSpawn_80124C90(HSD_GObj* fighterObj);
void ftPikachu_EfSpawn_80124D2C(HSD_GObj* fighterObj);
void ftPikachu_80124DC8(HSD_GObj* fighterObj);


//pika3
void ftPikachu_ActionChange_80124E38(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80124EAC(HSD_GObj* fighterObj);
void ftPikachu_ZeroVelocity_80124F24(HSD_GObj* fighterObj);
void ftPikachu_80124F64(HSD_GObj* fighterObj);
void ftPikachu_80124FA0(HSD_GObj* fighterObj);
void ftPikachu_Stub_80124FDC();
void ftPikachu_Stub_80124FE0();
void ftPikachu_80124FE4(HSD_GObj* fighterObj);
void ftPikachu_80125024(HSD_GObj* fighterObj);
void ftPikachu_80125084(HSD_GObj* fighterObj);
void ftPikachu_801250C0(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_801250FC(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_8012515C(HSD_GObj* fighterObj);
void ftPikachu_801251BC(HSD_GObj* fighterObj);
void ftPikachu_8012525C(HSD_GObj* fighterObj);
void ftPikachu_801252FC(HSD_GObj* fighterObj);
void ftPikachu_8012532C(HSD_GObj* fighterObj);
void ftPikachu_8012535C(HSD_GObj* fighterObj);
void ftPikachu_8012537C(HSD_GObj* fighterObj);
void ftPikachu_8012539C(HSD_GObj* fighterObj);
void ftPikachu_801253D8(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80125414(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80125474(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_801254D4(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80125528(HSD_GObj* fighterObj);
void ftPikachu_8012557C(HSD_GObj* fighterObj);
void ftPikachu_8012561C(HSD_GObj* fighterObj);
void ftPikachu_Stub_801256B4();
void ftPikachu_Stub_801256B8();
void ftPikachu_801256BC(HSD_GObj* fighterObj);
void ftPikachu_801256DC(HSD_GObj* fighterObj);
void ftPikachu_801256FC(HSD_GObj* fighterObj);
void ftPikachu_80125738(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80125774(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_801257D4(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80125834(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_801258A0(HSD_GObj* fighterObj);
void ftPikachu_Stub_8012590C();
void ftPikachu_80125910(HSD_GObj* fighterObj);
void ftPikachu_Stub_8012594C();
void ftPikachu_Stub_80125950();
void ftPikachu_Stub_80125954();
void ftPikachu_80125958(HSD_GObj* fighterObj);
void ftPikachu_Stub_801259D4();
void ftPikachu_801259D8(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80125A54(HSD_GObj* fighterObj);
void ftPikachu_80125B34(HSD_GObj* fighterObj);
void ftPikachu_80125B70(HSD_GObj* fighterObj);
void ftPikachu_Stub_80125BAC();
void ftPikachu_Stub_80125BB0();
void ftPikachu_80125BB4(HSD_GObj* fighterObj);
void ftPikachu_80125BF4(HSD_GObj* fighterObj);
void ftPikachu_80125C44(HSD_GObj* fighterObj);
void ftPikachu_80125C80(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80125CD0(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80125D28(HSD_GObj* fighterObj);

///pika4
void ftPikachu_UpdateVel_80125D80(HSD_GObj* fighterObj);
void ftPikachu_ActionChangeZeroVel_80125DE8(HSD_GObj* fighterObj);
void ftPikachu_ActionChangeZeroVel_80125E60(HSD_GObj* fighterObj);
void ftPikachu_80125ED8(HSD_GObj* fighterObj);
void ftPikachu_80125F14(HSD_GObj* fighterObj);
void ftPikachu_Stub_80125F50();
void ftPikachu_Stub_80125F54();
void ftPikachu_80125F58(HSD_GObj* fighterObj);
void ftPikachu_80125F78(HSD_GObj* fighterObj);
void ftPikachu_80125FD8(HSD_GObj* fighterObj);
void ftPikachu_80126014(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80126084(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_801260E4(HSD_GObj* fighterObj);
void ftPikachu_80126144(HSD_GObj* fighterObj);
void ftPikachu_801262B4(HSD_GObj* fighterObj);
void ftPikachu_Stub_80126424();
void ftPikachu_Stub_80126428();
void ftPikachu_8012642C(HSD_GObj* fighterObj);
void ftPikachu_801265D4(HSD_GObj* fighterObj);
void ftPikachu_801265F4(HSD_GObj* fighterObj);
void ftPikachu_80126614(HSD_GObj* fighterObj);
void ftPikachu_801267C8(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80126A2C(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80126AA4(HSD_GObj* fighterObj);
void ftPikachu_80126C0C(HSD_GObj* fighterObj);
void ftPikachu_80126E1C(HSD_GObj* fighterObj);
s32 ftPikachu_80127064(HSD_GObj* fighterObj);
void ftPikachu_80127198(HSD_GObj* fighterObj);
void ftPikachu_80127228(HSD_GObj* fighterObj);
void ftPikachu_Stub_801272D8();
void ftPikachu_Stub_801272DC();
void ftPikachu_801272E0(HSD_GObj* fighterObj);
void ftPikachu_80127310(HSD_GObj* fighterObj);
void ftPikachu_8012738C(HSD_GObj* fighterObj);
void ftPikachu_801273D4(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_8012744C(HSD_GObj* fighterObj);
void ftPikachu_ActionChangeUpdateVel_801274AC(HSD_GObj* fighterObj);
void ftPikachu_ActionChangeUpdateVel_80127534(HSD_GObj* fighterObj);

//pika5
s32 ftPikachu_CheckProperty_801275CC(HSD_GObj* fighterObj);
void ftPikachu_80127608(HSD_GObj* fighterObj);
void ftPikachu_SetState_8012764C(HSD_GObj* fighterObj);
s32 ftPikachu_8012765C(HSD_GObj* fighterObj);
void ftPikachu_SetState_8012779C(HSD_GObj* fighterObj);
void ftPikachu_EfSpawn_801277AC(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_801278BC(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127924(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_8012798C(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_801279EC(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127A54(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127ACC(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127B4C(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127BAC(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127C14(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127C74(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127CDC(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127D60(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127DE4(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127EC0(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80127FB0(HSD_GObj* fighterObj);
void ftPikachu_ActionChange_80128000(HSD_GObj* fighterObj);
void ftPikachu_80128050(HSD_GObj* fighterObj);
void ftPikachu_8012808C(HSD_GObj* fighterObj);
void ftPikachu_801280C8(HSD_GObj* fighterObj);
void ftPikachu_801280E8(HSD_GObj* fighterObj);
void ftPikachu_80128108(HSD_GObj* fighterObj);
void ftPikachu_80128128(HSD_GObj* fighterObj);
void ftPikachu_80128148(HSD_GObj* fighterObj);
void ftPikachu_80128168(HSD_GObj* fighterObj);
void ftPikachu_801281AC(HSD_GObj* fighterObj);
void ftPikachu_801281CC(HSD_GObj* fighterObj);
void ftPikachu_PrepCallActionChange_801281EC(HSD_GObj* fighterObj);
void ftPikachu_PrepCallActionChange_80128214(HSD_GObj* fighterObj);
void ftPikachu_PrepCallActionChange_8012823C(HSD_GObj* fighterObj);
void ftPikachu_PrepCallActionChange_80128264(HSD_GObj* fighterObj);
void ftPikachu_PrepCallActionChange_8012828C(HSD_GObj* fighterObj);
void ftPikachu_PrepCallActionChange_801282B4(HSD_GObj* fighterObj);
void ftPikachu_PrepCallActionChange_801282DC(HSD_GObj* fighterObj);
void ftPikachu_PrepCallActionChange_80128304(HSD_GObj* fighterObj);

