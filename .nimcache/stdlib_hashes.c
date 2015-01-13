/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/jsudlow/Nim/lib -o .nimcache/stdlib_hashes.o .nimcache/stdlib_hashes.c */
#define NIM_INTBITS 32
#include "nimbase.h"
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
static N_INLINE(NI, HEX21HEX26_100034)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, HEX21HEX24_100063)(NI h);
N_NIMCALL(NI, hashdata_100091)(void* data, NI size);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI, hash_100401)(void* x);
static N_INLINE(NI, hash_100804)(NI x);
static N_INLINE(NI, hash_100814)(NI64 x);
static N_INLINE(NI, hash_100824)(NIM_CHAR x);
N_NIMCALL(NI, hash_100842)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NI, hashignorestyle_100888)(NimStringDesc* x);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, hashignorecase_100980)(NimStringDesc* x);
static N_INLINE(NI, hash_101082)(NF x);
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

static N_INLINE(NI, HEX21HEX26_100034)(NI h, NI val) {
	NI result;
	nimfr("!&", "hashes.nim")
	result = 0;
	nimln(51, "hashes.nim");
	nimln(51, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)(val));
	nimln(52, "hashes.nim");
	nimln(52, "hashes.nim");
	nimln(52, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(10))));
	nimln(53, "hashes.nim");
	nimln(53, "hashes.nim");
	nimln(53, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(6)));
	popFrame();
	return result;
}

static N_INLINE(NI, HEX21HEX24_100063)(NI h) {
	NI result;
	nimfr("!$", "hashes.nim")
	result = 0;
	nimln(58, "hashes.nim");
	nimln(58, "hashes.nim");
	nimln(58, "hashes.nim");
	result = (NI)((NU32)(h) + (NU32)((NI)((NU32)(h) << (NU32)(3))));
	nimln(59, "hashes.nim");
	nimln(59, "hashes.nim");
	nimln(59, "hashes.nim");
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(11)));
	nimln(60, "hashes.nim");
	nimln(60, "hashes.nim");
	nimln(60, "hashes.nim");
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(15))));
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

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

N_NIMCALL(NI, hashdata_100091)(void* data, NI size) {
	NI result;
	NI h;
	NCSTRING p;
	NI i;
	NI s;
	nimfr("hashData", "hashes.nim")
	result = 0;
	nimln(64, "hashes.nim");
	h = 0;
	nimln(69, "hashes.nim");
	p = ((NCSTRING) (data));
	nimln(70, "hashes.nim");
	i = 0;
	nimln(71, "hashes.nim");
	s = size;
	{
		nimln(72, "hashes.nim");
		while (1) {
			nimln(72, "hashes.nim");
			if (!(0 < s)) goto LA2;
			nimln(73, "hashes.nim");
			nimln(73, "hashes.nim");
			h = HEX21HEX26_100034(h, ((NI) (((NU8)(p[i])))));
			nimln(74, "hashes.nim");
			i = addInt(i, 1);
			nimln(75, "hashes.nim");
			s = subInt(s, 1);
		} LA2: ;
	}
	nimln(76, "hashes.nim");
	result = HEX21HEX24_100063(h);
	popFrame();
	return result;
}

static N_INLINE(NI, hash_100401)(void* x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(95, "hashes.nim");
	nimln(95, "hashes.nim");
	result = (NI)((NU32)(((NI) (x))) >> (NU32)(3));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_100804)(NI x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(107, "hashes.nim");
	result = x;
	popFrame();
	return result;
}

static N_INLINE(NI, hash_100814)(NI64 x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(111, "hashes.nim");
	nimln(111, "hashes.nim");
	result = ((NI) (((NI32)(NU32)(NU64)(x))));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_100824)(NIM_CHAR x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(115, "hashes.nim");
	nimln(115, "hashes.nim");
	result = ((NI) (((NU8)(x))));
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_100842)(NimStringDesc* x) {
	NI result;
	NI h;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(119, "hashes.nim");
	h = 0;
	{
		NI i_100857;
		NI HEX3Atmp_100868;
		NI TMP302;
		NI res_100871;
		i_100857 = 0;
		HEX3Atmp_100868 = 0;
		nimln(120, "hashes.nim");
		nimln(120, "hashes.nim");
		nimln(120, "hashes.nim");
		TMP302 = subInt(x->Sup.len, 1);
		HEX3Atmp_100868 = (NI32)(TMP302);
		nimln(1576, "system.nim");
		res_100871 = 0;
		{
			nimln(1577, "system.nim");
			while (1) {
				nimln(1577, "system.nim");
				if (!(res_100871 <= HEX3Atmp_100868)) goto LA3;
				nimln(1576, "system.nim");
				i_100857 = res_100871;
				nimln(121, "hashes.nim");
				nimln(121, "hashes.nim");
				if ((NU)(i_100857) > (NU)(x->Sup.len)) raiseIndexError();
				h = HEX21HEX26_100034(h, ((NI) (((NU8)(x->data[i_100857])))));
				nimln(1579, "system.nim");
				res_100871 = addInt(res_100871, 1);
			} LA3: ;
		}
	}
	nimln(122, "hashes.nim");
	result = HEX21HEX24_100063(h);
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, hashignorestyle_100888)(NimStringDesc* x) {
	NI result;
	NI h;
	nimfr("hashIgnoreStyle", "hashes.nim")
	result = 0;
	nimln(126, "hashes.nim");
	h = 0;
	{
		NI i_100903;
		NI HEX3Atmp_100957;
		NI TMP303;
		NI res_100960;
		i_100903 = 0;
		HEX3Atmp_100957 = 0;
		nimln(127, "hashes.nim");
		nimln(127, "hashes.nim");
		nimln(127, "hashes.nim");
		TMP303 = subInt(x->Sup.len, 1);
		HEX3Atmp_100957 = (NI32)(TMP303);
		nimln(1576, "system.nim");
		res_100960 = 0;
		{
			nimln(1577, "system.nim");
			while (1) {
				nimln(1577, "system.nim");
				if (!(res_100960 <= HEX3Atmp_100957)) goto LA3;
				nimln(1576, "system.nim");
				i_100903 = res_100960;
				{
					NIM_CHAR c;
					nimln(128, "hashes.nim");
					if ((NU)(i_100903) > (NU)(x->Sup.len)) raiseIndexError();
					c = x->data[i_100903];
					nimln(129, "hashes.nim");
					{
						nimln(129, "hashes.nim");
						if (!((NU8)(c) == (NU8)(95))) goto LA7;
						nimln(130, "hashes.nim");
						goto LA4;
					}
					LA7: ;
					nimln(131, "hashes.nim");
					{
						NI TMP304;
						nimln(131, "hashes.nim");
						if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA11;
						nimln(132, "hashes.nim");
						nimln(132, "hashes.nim");
						nimln(132, "hashes.nim");
						nimln(132, "hashes.nim");
						TMP304 = addInt(((NI) (((NU8)(c)))), 32);
						c = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP304), 0, 255))));
					}
					LA11: ;
					nimln(133, "hashes.nim");
					nimln(133, "hashes.nim");
					h = HEX21HEX26_100034(h, ((NI) (((NU8)(c)))));
				} LA4: ;
				nimln(1579, "system.nim");
				res_100960 = addInt(res_100960, 1);
			} LA3: ;
		}
	}
	nimln(134, "hashes.nim");
	result = HEX21HEX24_100063(h);
	popFrame();
	return result;
}

N_NIMCALL(NI, hashignorecase_100980)(NimStringDesc* x) {
	NI result;
	NI h;
	nimfr("hashIgnoreCase", "hashes.nim")
	result = 0;
	nimln(138, "hashes.nim");
	h = 0;
	{
		NI i_100995;
		NI HEX3Atmp_101048;
		NI TMP305;
		NI res_101051;
		i_100995 = 0;
		HEX3Atmp_101048 = 0;
		nimln(139, "hashes.nim");
		nimln(139, "hashes.nim");
		nimln(139, "hashes.nim");
		TMP305 = subInt(x->Sup.len, 1);
		HEX3Atmp_101048 = (NI32)(TMP305);
		nimln(1576, "system.nim");
		res_101051 = 0;
		{
			nimln(1577, "system.nim");
			while (1) {
				NIM_CHAR c;
				nimln(1577, "system.nim");
				if (!(res_101051 <= HEX3Atmp_101048)) goto LA3;
				nimln(1576, "system.nim");
				i_100995 = res_101051;
				nimln(140, "hashes.nim");
				if ((NU)(i_100995) > (NU)(x->Sup.len)) raiseIndexError();
				c = x->data[i_100995];
				nimln(141, "hashes.nim");
				{
					NI TMP306;
					nimln(141, "hashes.nim");
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6;
					nimln(142, "hashes.nim");
					nimln(142, "hashes.nim");
					nimln(142, "hashes.nim");
					nimln(142, "hashes.nim");
					TMP306 = addInt(((NI) (((NU8)(c)))), 32);
					c = ((NIM_CHAR) (((NI)chckRange((NI32)(TMP306), 0, 255))));
				}
				LA6: ;
				nimln(143, "hashes.nim");
				nimln(143, "hashes.nim");
				h = HEX21HEX26_100034(h, ((NI) (((NU8)(c)))));
				nimln(1579, "system.nim");
				res_101051 = addInt(res_101051, 1);
			} LA3: ;
		}
	}
	nimln(144, "hashes.nim");
	result = HEX21HEX24_100063(h);
	popFrame();
	return result;
}

static N_INLINE(NI, hash_101082)(NF x) {
	NI result;
	NF y;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(153, "hashes.nim");
	nimln(153, "hashes.nim");
	y = ((NF)(x) + (NF)(1.0000000000000000e+00));
	nimln(154, "hashes.nim");
	result = (*((NI*) ((&y))));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void) {
	nimfr("hashes", "hashes.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void) {
}

