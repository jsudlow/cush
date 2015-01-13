/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/jsudlow/Nim/lib -o .nimcache/scene.o .nimcache/scene.c */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct scene126006 scene126006;
typedef struct tmousebuttonevent115383 tmousebuttonevent115383;
typedef struct tmousemotionevent115379 tmousemotionevent115379;
typedef struct scenemanager126008 scenemanager126008;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct controller126004 controller126004;
typedef struct tcell45135 tcell45135;
typedef struct tcellset45147 tcellset45147;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellseq45151 tcellseq45151;
typedef struct tpagedesc45143 tpagedesc45143;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct tsurface123011 tsurface123011;
typedef struct table122024 table122024;
typedef struct keyvaluepairseq122027 keyvaluepairseq122027;
typedef struct keyvaluepair122030 keyvaluepair122030;
typedef struct TGenericSeq TGenericSeq;
typedef struct table126040 table126040;
typedef struct keyvaluepairseq126043 keyvaluepairseq126043;
typedef struct keyvaluepair126046 keyvaluepair126046;
typedef struct NimStringDesc NimStringDesc;
typedef struct tfont123015 tfont123015;
typedef struct TY126059 TY126059;
typedef struct messagebox126018 messagebox126018;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
typedef struct tsurface116255 tsurface116255;
typedef struct tfont122221 tfont122221;
typedef struct tcolor116233 tcolor116233;
typedef struct tpixelformat116245 tpixelformat116245;
typedef struct trect116227 trect116227;
typedef struct tpalette116241 tpalette116241;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  scenemanager126008  {
  TNimObject Sup;
controller126004* Ctl;
scene126006* Scene;
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
struct  scene126006  {
  TNimObject Sup;
controller126004* Ctl;
scenemanager126008* Manager;
};
struct  tmousebuttonevent115383  {
NU8 Kind;
NU8 Which;
NU8 Button;
NU8 State;
NU16 X;
NU16 Y;
};
struct  tmousemotionevent115379  {
NU8 Kind;
NU8 Which;
NU8 State;
NU16 X;
NU16 Y;
NI16 Xrel;
NI16 Yrel;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct keyvaluepair122030 {
NU8 Field0;
NI32 Field1;
NIM_BOOL Field2;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  table122024  {
keyvaluepairseq122027* Data;
NI Counter;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct keyvaluepair126046 {
NU8 Field0;
NimStringDesc* Field1;
tfont123015* Field2;
};
struct  table126040  {
keyvaluepairseq126043* Data;
NI Counter;
};
struct  controller126004  {
tsurface123011* Display;
NIM_BOOL Shouldclose;
table122024 Keys;
table122024 Mods;
NI Mousex;
NI Mousey;
NIM_BOOL Mousedown;
table126040 Fonts;
TY126059* Messages;
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
struct  messagebox126018  {
NimStringDesc* Messagetext;
NI X;
NI Y;
NI Size;
tfont123015* Font;
tsurface123011* S;
NIM_BOOL Isvisible;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
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
struct keyvaluepairseq122027 {
  TGenericSeq Sup;
  keyvaluepair122030 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq126043 {
  TGenericSeq Sup;
  keyvaluepair126046 data[SEQ_DECL_SIZE];
};
struct TY126059 {
  TGenericSeq Sup;
  messagebox126018* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, enter_128004)(scene126006* self);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, leave_128017)(scene126006* self);
N_NIMCALL(void, keydown_128030)(scene126006* self, NI32 key, NI32 mods);
N_NIMCALL(void, mousedown_128045)(scene126006* self, tmousebuttonevent115383* event);
N_NIMCALL(void, mousemotion_128059)(scene126006* self, tmousemotionevent115379* event);
N_NIMCALL(void, draw_128073)(scene126006* self);
N_NIMCALL(void, update_128086)(scene126006* self, NI t, NI dt);
N_NIMCALL(void, setscene_128101)(scenemanager126008* self, scene126006* scene);
N_NIMCALL(void, leave_128025)(scene126006* self);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51225)(tcell45135* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48867)(tcell45135* c);
static N_INLINE(void, rtladdcycleroot_49629)(tcell45135* c);
N_NOINLINE(void, incl_45871)(tcellset45147* s, tcell45135* cell);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
static N_INLINE(void, decref_50804)(tcell45135* c);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, enter_128012)(scene126006* self);
N_NIMCALL(scenemanager126008*, new_128126)(void);
N_NIMCALL(scenemanager126008*, newscenemanager_128116)(controller126004* ctl, scene126006* firstscene);
N_NIMCALL(void, setscene_128111)(scenemanager126008* self, scene126006* scene);
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

N_NIMCALL(void, enter_128004)(scene126006* self) {
	nimfr("enter", "scene.nim")
	popFrame();
}

N_NIMCALL(void, leave_128017)(scene126006* self) {
	nimfr("leave", "scene.nim")
	popFrame();
}

N_NIMCALL(void, keydown_128030)(scene126006* self, NI32 key, NI32 mods) {
	nimfr("key_down", "scene.nim")
	popFrame();
}

N_NIMCALL(void, mousedown_128045)(scene126006* self, tmousebuttonevent115383* event) {
	nimfr("mouse_down", "scene.nim")
	popFrame();
}

N_NIMCALL(void, mousemotion_128059)(scene126006* self, tmousemotionevent115379* event) {
	nimfr("mouse_motion", "scene.nim")
	popFrame();
}

N_NIMCALL(void, draw_128073)(scene126006* self) {
	nimfr("draw", "scene.nim")
	popFrame();
}

N_NIMCALL(void, update_128086)(scene126006* self, NI t, NI dt) {
	nimfr("update", "scene.nim")
	popFrame();
}

static N_INLINE(NIM_BOOL, canbecycleroot_48867)(tcell45135* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_49629)(tcell45135* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(191, "gc.nim");
		incl_45871((&gch_47244.Cycleroots), c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_51225)(tcell45135* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_48867(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_49629(c);
	}
	LA4: ;
	popFrame();
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

static N_INLINE(void, decref_50804)(tcell45135* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_50404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_48867(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_49629(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		tcell45135* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_48846(src);
		incref_51225(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell45135* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_48846((*dest));
		decref_50804(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
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

N_NIMCALL(void, setscene_128101)(scenemanager126008* self, scene126006* scene) {
	nimfr("set_scene", "scene.nim")
	nimln(26, "scene.nim");
	leave_128025((*self).Scene);
	nimln(28, "scene.nim");
	asgnRef((void**) (&(*self).Scene), scene);
	nimln(29, "scene.nim");
	asgnRef((void**) (&(*(*self).Scene).Manager), self);
	nimln(30, "scene.nim");
	asgnRefNoCycle((void**) (&(*(*self).Scene).Ctl), (*self).Ctl);
	nimln(31, "scene.nim");
	enter_128012((*self).Scene);
	popFrame();
}

N_NIMCALL(scenemanager126008*, newscenemanager_128116)(controller126004* ctl, scene126006* firstscene) {
	scenemanager126008* result;
	nimfr("newSceneManager", "scene.nim")
	result = 0;
	nimln(34, "scene.nim");
	result = new_128126();
	nimln(35, "scene.nim");
	asgnRefNoCycle((void**) (&(*result).Ctl), ctl);
	nimln(36, "scene.nim");
	setscene_128111(result, firstscene);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_sceneInit)(void) {
	nimfr("scene", "scene.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_sceneDatInit)(void) {
}
