/* Generated by Nim Compiler v0.10.1 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/jsudlow/Nim/lib -o .nimcache/utils.o .nimcache/utils.c */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct table120030 table120030;
typedef struct keyvaluepairseq120033 keyvaluepairseq120033;
typedef struct keyvaluepair120036 keyvaluepair120036;
typedef struct TGenericSeq TGenericSeq;
struct keyvaluepair120036 {
NU8 Field0;
NI32 Field1;
NIM_BOOL Field2;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  table120030  {
keyvaluepairseq120033* Data;
NI Counter;
};
struct keyvaluepairseq120033 {
  TGenericSeq Sup;
  keyvaluepair120036 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, haskey_120058)(table120030 t_120065, NI32 key_120068);
N_NIMCALL(NI, rawget_120072)(table120030 t_120079, NI32 key_120082);
N_NIMCALL(NIM_BOOL, HEX5BHEX5D_120119)(table120030 t_120126, NI32 key_120129);
N_NIMCALL(NIM_BOOL, pressed_120051)(table120030 self, NI32 key);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
extern TFrame* frameptr_16242;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_16242 == NIM_NIL)) goto LA4;
		LOC1 = 0;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_16242).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_16242;
	frameptr_16242 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_18801();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_16242 = (*frameptr_16242).prev;
}

N_NIMCALL(NIM_BOOL, pressed_120051)(table120030 self, NI32 key) {
	NIM_BOOL result;
	nimfr("pressed", "utils.nim")
	result = 0;
	nimln(12, "utils.nim");
	{
		NIM_BOOL LOC3;
		nimln(12, "utils.nim");
		nimln(12, "utils.nim");
		LOC3 = 0;
		LOC3 = haskey_120058(self, key);
		if (!!(LOC3)) goto LA4;
		nimln(13, "utils.nim");
		nimln(13, "utils.nim");
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA4: ;
	nimln(14, "utils.nim");
	nimln(14, "utils.nim");
	result = HEX5BHEX5D_120119(self, key);
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_utilsInit)(void) {
	nimfr("utils", "utils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_utilsDatInit)(void) {
}

