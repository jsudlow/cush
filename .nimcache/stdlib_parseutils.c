/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/jsudlow/Nim/lib -o .nimcache/stdlib_parseutils.o .nimcache/stdlib_parseutils.c */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct slice84665 slice84665;
struct  slice84665  {
NI A;
NI B;
};
static N_INLINE(slice84665, HEX2EHEX2E_91098)(NI a_91102, NI b_91104);
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

static N_INLINE(slice84665, HEX2EHEX2E_91098)(NI a_91102, NI b_91104) {
	slice84665 result;
	nimfr("..", "system.nim")
	memset((void*)(&result), 0, sizeof(result));
	nimln(226, "system.nim");
	result.A = a_91102;
	nimln(227, "system.nim");
	result.B = b_91104;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit)(void) {
	nimfr("parseutils", "parseutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit)(void) {
}
