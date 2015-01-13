/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/jsudlow/Nim/lib -o .nimcache/stdlib_os.o .nimcache/stdlib_os.c */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct TY13206 TY13206;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY13206 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
static N_INLINE(NimStringDesc*, pop_152312)(TY13206** s_152320);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
NIM_BOOL envcomputed_150807;
TY13206* environment_150809;
extern NCSTRING* environ;
extern TFrame* frameptr_16242;
extern int cmdCount;
extern NCSTRING* cmdLine;

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

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

static N_INLINE(NimStringDesc*, pop_152312)(TY13206** s_152320) {
	NimStringDesc* result;
	NI l;
	NI TMP691;
	nimfr("pop", "system.nim")
	result = 0;
	nimln(1810, "system.nim");
	nimln(1810, "system.nim");
	nimln(1810, "system.nim");
	TMP691 = subInt((*s_152320)->Sup.len, 1);
	l = (NI32)(TMP691);
	nimln(1811, "system.nim");
	if ((NU)(l) >= (NU)((*s_152320)->Sup.len)) raiseIndexError();
	result = copyString((*s_152320)->data[l]);
	nimln(1812, "system.nim");
	(*s_152320) = (TY13206*) setLengthSeq(&((*s_152320))->Sup, sizeof(NimStringDesc*), l);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void) {
	nimfr("os", "os.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void) {
}
