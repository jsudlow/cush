/* Generated by Nim Compiler v0.10.1 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/jsudlow/Nim/lib -o .nimcache/display.o .nimcache/display.c */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct display128052 display128052;
typedef struct tevent114219 tevent114219;
typedef struct tsurface124011 tsurface124011;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell45135 tcell45135;
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
typedef struct tsurface114255 tsurface114255;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
typedef struct tpixelformat114245 tpixelformat114245;
typedef struct trect114227 trect114227;
typedef struct tpalette114241 tpalette114241;
typedef struct tcolor114233 tcolor114233;
typedef N_CDECL_PTR(NI, TY118214) (tevent114219* event);
struct  display128052  {
tsurface124011* Surface;
NI32 Width;
NI32 Height;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef N_CDECL_PTR(void, TY118720) (NCSTRING title, NCSTRING icon);
typedef NU8 TY114275[20];
struct  tevent114219  {
NU8 Kind;
TY114275 Pad;
};
struct  tsurface124011  {
NI W;
NI H;
tsurface114255* S;
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
struct  trect114227  {
NI16 X;
NI16 Y;
NU16 W;
NU16 H;
};
struct  tsurface114255  {
NI32 Flags;
tpixelformat114245* Format;
int W;
int H;
NU16 Pitch;
void* Pixels;
int Offset;
void* Hwdata;
trect114227 Cliprect;
NI32 Unused1;
NI32 Locked;
void* Blitmap;
int Formatversion;
int Refcount;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
struct  tpixelformat114245  {
tpalette114241* Palette;
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
struct  tpalette114241  {
NI Ncolors;
tcolor114233* Colors;
};
struct  tcolor114233  {
NU8 R;
NU8 G;
NU8 B;
NU8 Unused;
};
N_NIMCALL(NIM_BOOL, getevent_128060)(display128052* self, tevent114219* event);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(display128052*, new_128084)(void);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP644)(void* p, NI op);
N_NIMCALL(display128052*, newdisplay_128075)(NI32 width, NI32 height, NimStringDesc* title);
N_NIMCALL(tsurface124011*, newscreensurface_124313)(NI width, NI height);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
extern TY118214 Dl_118213;
extern TFrame* frameptr_16242;
TNimType NTI128052; /* Display */
extern TNimType NTI124009; /* PSurface */
extern TNimType NTI114; /* int32 */
TNimType NTI128062; /* ref Display */
extern tgcheap47216 gch_47244;
extern TY118720 Dl_118719;

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

N_NIMCALL(NIM_BOOL, getevent_128060)(display128052* self, tevent114219* event) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("get_event", "display.nim")
	result = 0;
	nimln(8, "display.nim");
	nimln(8, "display.nim");
	nimln(8, "display.nim");
	LOC1 = 0;
	LOC1 = Dl_118213(event);
	result = (LOC1 == 1);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP644)(void* p, NI op) {
	display128052* a;
	a = (display128052*)p;
	nimGCvisit((void*)(*a).Surface, op);
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

N_NIMCALL(display128052*, newdisplay_128075)(NI32 width, NI32 height, NimStringDesc* title) {
	display128052* result;
	nimfr("newDisplay", "display.nim")
	result = 0;
	nimln(11, "display.nim");
	result = new_128084();
	nimln(12, "display.nim");
	(*result).Width = width;
	nimln(13, "display.nim");
	(*result).Height = height;
	nimln(14, "display.nim");
	asgnRefNoCycle((void**) (&(*result).Surface), newscreensurface_124313(((NI) (width)), ((NI) (height))));
	nimln(15, "display.nim");
	Dl_118719(title->data, NIM_NIL);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_displayInit)(void) {
	nimfr("display", "display.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_displayDatInit)(void) {
static TNimNode* TMP643[3];
static TNimNode TMP641[4];
NTI128052.size = sizeof(display128052);
NTI128052.kind = 18;
NTI128052.base = 0;
NTI128052.flags = 2;
TMP643[0] = &TMP641[1];
TMP641[1].kind = 1;
TMP641[1].offset = offsetof(display128052, Surface);
TMP641[1].typ = (&NTI124009);
TMP641[1].name = "surface";
TMP643[1] = &TMP641[2];
TMP641[2].kind = 1;
TMP641[2].offset = offsetof(display128052, Width);
TMP641[2].typ = (&NTI114);
TMP641[2].name = "width";
TMP643[2] = &TMP641[3];
TMP641[3].kind = 1;
TMP641[3].offset = offsetof(display128052, Height);
TMP641[3].typ = (&NTI114);
TMP641[3].name = "height";
TMP641[0].len = 3; TMP641[0].kind = 2; TMP641[0].sons = &TMP643[0];
NTI128052.node = &TMP641[0];
NTI128062.size = sizeof(display128052*);
NTI128062.kind = 22;
NTI128062.base = (&NTI128052);
NTI128062.flags = 2;
NTI128062.marker = TMP644;
}

