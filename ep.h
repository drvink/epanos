#ifndef EP_H
#define EP_H
#include <stdint.h>

/* structs from ep.c manual rewrite; just for reference */

struct animCmd;

struct animSeq {
    int seqnum;
    char seq_enabled_XXX;
    char field_5;
    char field_6;
    char field_7;
    float framepos;
    float relFrame;
    float seq_duration_XXX;
    float seq_variance_XXX;
    struct animCmd *cmdptr;
    struct animCmd *cmdptr2;
    struct animCmd *cmdptr3;
    struct animSeq *next;
};

struct animCmd {
    int acttype;
    int arg;
    float absFrame;
    float argf;
    struct animSeq *editSeq;
    struct animCmd *next;
};

struct actAnim {
    char byte_off0;
    char byte_off1;
    char field_2;
    char field_3;
    float field_4;
    float field_8;
    float anim_duration_XXX;
    float field_10;
    float field_14;
    float field_18;
    float field_1C;
    float field_20;
    float field_24;
};

enum epcmd_t {
    CMD_FRAME = 0x0,
    CMD_ABSFRAME = 0x1,
    CMD_ACTLIM1 = 0x2,
    CMD_ACTLIM2 = 0x3,
    CMD_ACTSET = 0x4,
    CMD_ACTRESET = 0x5,
    CMD_ACTRESETALL = 0x6,
    CMD_ACTSTOP = 0x7,
    CMD_ACTSTOPALL = 0x8,
    CMD_SEQNAME = 0x9,
    CMD_SEQDO = 0xA,
    CMD_SEQSTOP = 0xB,
    CMD_SEQLOOP = 0xC,
    CMD_SEQREPEAT = 0xD,
    CMD_SEQKILL = 0xE,
    CMD_SEQKILLALL = 0xF,
    CMD_DURATION = 0x65,
    CMD_VARIANCE = 0x66,
    CMD_RANDDELAY = 0x67
};

typedef union EPANOS_REG {
    uint8_t u8;
    int32_t i32;
    uint32_t u32;
    int64_t i64;
    uint64_t u64;
    float s;
    double d;
} EPANOS_REG;

typedef struct EPANOS_ARGS {
    EPANOS_REG v0;
    EPANOS_REG v1;
    EPANOS_REG a0;
    EPANOS_REG a1;
    EPANOS_REG a2;
    EPANOS_REG a3;
    EPANOS_REG a4;
    EPANOS_REG a5;
    EPANOS_REG a6;
    EPANOS_REG a7;
    EPANOS_REG f0;
    EPANOS_REG f2;
    EPANOS_REG f12;
    EPANOS_REG f13;
    EPANOS_REG f14;
    EPANOS_REG f15;
    EPANOS_REG f16;
    EPANOS_REG f17;
    EPANOS_REG f18;
    EPANOS_REG f19;
} EPANOS_ARGS;
#endif
