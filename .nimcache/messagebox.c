/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/jsudlow/Nim/lib -o .nimcache/messagebox.o .nimcache/messagebox.c */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct messagebox126018 messagebox126018;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tfont123015 tfont123015;
typedef struct tpoint123007 tpoint123007;
typedef struct tsurface123011 tsurface123011;
typedef struct tcell45135 tcell45135;
typedef struct TNimType TNimType;
typedef struct tcellseq45151 tcellseq45151;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45147 tcellset45147;
typedef struct tpagedesc45143 tpagedesc45143;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct trect123005 trect123005;
typedef struct tsurface116255 tsurface116255;
typedef struct tfont122221 tfont122221;
typedef struct tcolor116233 tcolor116233;
typedef struct TNimNode TNimNode;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
typedef struct tpixelformat116245 tpixelformat116245;
typedef struct trect116227 trect116227;
typedef struct tpalette116241 tpalette116241;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tpoint123007 {
NI Field0;
NI Field1;
};
struct  messagebox126018  {
NimStringDesc* Messagetext;
NI X;
NI Y;
NI Size;
tfont123015* Font;
tsurface123011* S;
NIM_BOOL Isvisible;
};
struct  tcell45135  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45151  {
NI Len;
NI Cap;
tcell45135** D;
};
struct  tcellset45147  {
NI Counter;
NI Max;
tpagedesc45143* Head;
tpagedesc45143** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
};
struct  tgcstat47214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45151 Zct;
tcellseq45151 Decstack;
tcellset45147 Cycleroots;
tcellseq45151 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
};
struct trect123005 {
NI Field0;
NI Field1;
NI Field2;
NI Field3;
};
struct  tsurface123011  {
NI W;
NI H;
tsurface116255* S;
};
struct  tcolor116233  {
NU8 R;
NU8 G;
NU8 B;
NU8 Unused;
};
struct  tfont123015  {
tfont122221* F;
tcolor116233 Color;
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
typedef NI TY26620[16];
struct  tpagedesc45143  {
tpagedesc45143* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  trect116227  {
NI16 X;
NI16 Y;
NU16 W;
NU16 H;
};
struct  tsurface116255  {
NI32 Flags;
tpixelformat116245* Format;
int W;
int H;
NU16 Pitch;
void* Pixels;
int Offset;
void* Hwdata;
trect116227 Cliprect;
NI32 Unused1;
NI32 Locked;
void* Blitmap;
int Formatversion;
int Refcount;
};
struct  tfont122221  {
char dummy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
struct  tpixelformat116245  {
tpalette116241* Palette;
NU8 Bitsperpixel;
NU8 Bytesperpixel;
NU8 Rloss;
NU8 Gloss;
NU8 Bloss;
NU8 Aloss;
NU8 Rshift;
NU8 Gshift;
NU8 Bshift;
NU8 Ashift;
NI32 Rmask;
NI32 Gmask;
NI32 Bmask;
NI32 Amask;
NI32 Colorkey;
NU8 Alpha;
};
struct  tpalette116241  {
NI Ncolors;
tcolor116233* Colors;
};
N_NIMCALL(messagebox126018*, new_129028)(void);
N_NIMCALL(messagebox126018*, newmessagebox_129017)(NimStringDesc* messagetext, NI x, NI y, tfont123015* font);
N_NIMCALL(tpoint123007, textbounds_124283)(NimStringDesc* text, tfont123015* font);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
N_NIMCALL(tsurface123011*, newsurface_123123)(NI width, NI height);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, drawtext_124307)(tsurface123011* sur, tpoint123007 p, NimStringDesc* text, tfont123015* font);
N_NIMCALL(void, draw_129064)(messagebox126018* self, tsurface123011* target);
N_NIMCALL(void, blit_124266)(tsurface123011* destsurf, trect123005 destrect, tsurface123011* srcsurf, trect123005 srcrect);
NIM_CONST tpoint123007 TMP657 = {0,
0}
;
extern TFrame* frameptr_16242;
extern tgcheap47216 gch_47244;

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

static N_INLINE(tcell45135*, usrtocell_48846)(void* usr) {
	tcell45135* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell45135*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45135))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45135* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_48817((&gch_47244.Zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45135* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_48846(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_50404(c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell45135* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_48846(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell45135* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_48846((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_50404(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(messagebox126018*, newmessagebox_129017)(NimStringDesc* messagetext, NI x, NI y, tfont123015* font) {
	messagebox126018* result;
	tpoint123007 textsize;
	NimStringDesc* LOC1;
	nimfr("newMessageBox", "messagebox.nim")
	result = 0;
	nimln(5, "messagebox.nim");
	textsize = textbounds_124283(messagetext, font);
	nimln(7, "messagebox.nim");
	result = new_129028();
	nimln(8, "messagebox.nim");
	LOC1 = 0;
	LOC1 = (*result).Messagetext; (*result).Messagetext = copyStringRC1(messagetext);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(9, "messagebox.nim");
	asgnRefNoCycle((void**) (&(*result).S), newsurface_123123(textsize.Field0, textsize.Field1));
	nimln(10, "messagebox.nim");
	drawtext_124307((*result).S, TMP657, messagetext, font);
	nimln(11, "messagebox.nim");
	(*result).X = x;
	nimln(12, "messagebox.nim");
	(*result).Y = y;
	nimln(13, "messagebox.nim");
	(*result).Isvisible = NIM_FALSE;
	popFrame();
	return result;
}

N_NIMCALL(void, draw_129064)(messagebox126018* self, tsurface123011* target) {
	nimfr("draw", "messagebox.nim")
	nimln(17, "messagebox.nim");
	{
		trect123005 LOC5;
		trect123005 LOC6;
		if (!(*self).Isvisible) goto LA3;
		nimln(18, "messagebox.nim");
		LOC5.Field0 = (*self).X;
		LOC5.Field1 = (*self).Y;
		LOC5.Field2 = (*target).W;
		LOC5.Field3 = (*target).H;
		LOC6.Field0 = 0;
		LOC6.Field1 = 0;
		LOC6.Field2 = (*(*self).S).W;
		LOC6.Field3 = (*(*self).S).H;
		blit_124266(target, LOC5, (*self).S, LOC6);
	}
	LA3: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, HEX00_messageboxInit)(void) {
	nimfr("messagebox", "messagebox.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_messageboxDatInit)(void) {
}
