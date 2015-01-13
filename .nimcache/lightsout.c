/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, i386, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/jsudlow/Nim/lib -o .nimcache/lightsout.o .nimcache/lightsout.c */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct menuscene126012 menuscene126012;
typedef struct tcell45135 tcell45135;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct app126002 app126002;
typedef struct scene126006 scene126006;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct gamescene126010 gamescene126010;
typedef struct tmousebuttonevent115383 tmousebuttonevent115383;
typedef struct tmousemotionevent115379 tmousemotionevent115379;
typedef struct scenemanager126008 scenemanager126008;
typedef struct clicksystem126016 clicksystem126016;
typedef struct TNimObject TNimObject;
typedef struct controller126004 controller126004;
typedef struct messagebox126018 messagebox126018;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
typedef struct tsurface123011 tsurface123011;
typedef struct hoversystem126014 hoversystem126014;
typedef struct table122024 table122024;
typedef struct keyvaluepairseq122027 keyvaluepairseq122027;
typedef struct keyvaluepair122030 keyvaluepair122030;
typedef struct table126044 table126044;
typedef struct keyvaluepairseq126047 keyvaluepairseq126047;
typedef struct keyvaluepair126050 keyvaluepair126050;
typedef struct tfont123015 tfont123015;
typedef struct TY126063 TY126063;
typedef struct tsurface116255 tsurface116255;
typedef struct tfont122221 tfont122221;
typedef struct tcolor116233 tcolor116233;
typedef struct tpixelformat116245 tpixelformat116245;
typedef struct trect116227 trect116227;
typedef struct tpalette116241 tpalette116241;
struct  tcell45135  {
NI Refcount;
TNimType* Typ;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  scene126006  {
  TNimObject Sup;
controller126004* Ctl;
scenemanager126008* Manager;
};
struct  menuscene126012  {
  scene126006 Sup;
messagebox126018* Titlemsg;
messagebox126018* Playmsg;
messagebox126018* Quitmsg;
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
struct  app126002  {
tsurface123011* Display;
scenemanager126008* Manager;
controller126004* Ctl;
};
struct  gamescene126010  {
  scene126006 Sup;
hoversystem126014* Hoversystem;
clicksystem126016* Clicksystem;
NIM_BOOL Haswon;
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
struct  scenemanager126008  {
  TNimObject Sup;
controller126004* Ctl;
scene126006* Scene;
};
struct  clicksystem126016  {
gamescene126010* Scene;
};
struct keyvaluepair122030 {
NU8 Field0;
NI32 Field1;
NIM_BOOL Field2;
};
struct  table122024  {
keyvaluepairseq122027* Data;
NI Counter;
};
typedef NIM_BOOL TY126035[100];
struct keyvaluepair126050 {
NU8 Field0;
NimStringDesc* Field1;
tfont123015* Field2;
};
struct  table126044  {
keyvaluepairseq126047* Data;
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
TY126035 Grid;
table126044 Fonts;
TY126063* Messages;
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
struct  tsurface123011  {
NI W;
NI H;
tsurface116255* S;
};
struct  hoversystem126014  {
gamescene126010* Scene;
NI I;
NI K;
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
struct keyvaluepairseq126047 {
  TGenericSeq Sup;
  keyvaluepair126050 data[SEQ_DECL_SIZE];
};
struct TY126063 {
  TGenericSeq Sup;
  messagebox126018* data[SEQ_DECL_SIZE];
};
N_NIMCALL(menuscene126012*, new_166006)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51225)(tcell45135* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48867)(tcell45135* c);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdcycleroot_49629)(tcell45135* c);
N_NOINLINE(void, incl_45871)(tcellset45147* s, tcell45135* cell);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
static N_INLINE(void, decref_50804)(tcell45135* c);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
N_NIMCALL(app126002*, new_166039)(void);
N_NIMCALL(void, init_131007)(app126002* self, scene126006* firstscene, NI32 width, NI32 height, NimStringDesc* title);
N_NIMCALL(void, run_131356)(app126002* self);
N_NIMCALL(void, enter_165004)(gamescene126010* self);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, enter_132018)(menuscene126012* self);
static N_INLINE(NIM_BOOL, isObjWithCache)(TNimType* obj, TNimType* subclass, TNimType** cache);
N_NOINLINE(NIM_BOOL, isobjslowpath_22025)(TNimType* obj, TNimType* subclass, TNimType** cache);
N_NIMCALL(void, enter_128004)(scene126006* self);
N_NIMCALL(void, leave_132034)(menuscene126012* self);
N_NIMCALL(void, leave_128017)(scene126006* self);
N_NIMCALL(void, keydown_132044)(menuscene126012* self, NI32 key, NI32 mods);
N_NIMCALL(void, keydown_128030)(scene126006* self, NI32 key, NI32 mods);
N_NIMCALL(void, mousedown_165027)(gamescene126010* self, tmousebuttonevent115383* event);
N_NIMCALL(void, mousedown_128045)(scene126006* self, tmousebuttonevent115383* event);
N_NIMCALL(void, mousemotion_128059)(scene126006* self, tmousemotionevent115379* event);
N_NIMCALL(void, draw_165038)(gamescene126010* self);
N_NIMCALL(void, draw_132086)(menuscene126012* self);
N_NIMCALL(void, draw_128073)(scene126006* self);
N_NIMCALL(void, update_165014)(gamescene126010* self, NI t, NI dt);
N_NIMCALL(void, update_128086)(scene126006* self, NI t, NI dt);
N_NIMCALL(void, setscene_128101)(scenemanager126008* self, scene126006* scene);
N_NIMCALL(void, mousedown_164077)(clicksystem126016* self, tmousebuttonevent115383* event);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_colorsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_colorsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sdlInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sdlDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sdl_ttfInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sdl_ttfDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_graphicsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_graphicsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_magicInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_magicDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_typetraitsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_typetraitsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_sceneInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_sceneDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_messageboxInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_messageboxDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_controllerInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_controllerDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_appInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_appDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_menuInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_menuDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_hoversystemInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_hoversystemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, random_mt19937arInit)(void);
NIM_EXTERNC N_NOINLINE(void, random_mt19937arDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, random_posix_urandomInit)(void);
NIM_EXTERNC N_NOINLINE(void, random_posix_urandomDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, random_randomInit)(void);
NIM_EXTERNC N_NOINLINE(void, random_randomDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_clicksystemInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_clicksystemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_gameInit)(void);
NIM_EXTERNC N_NOINLINE(void, HEX00_gameDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, lightsoutInit)(void);
NIM_EXTERNC N_NOINLINE(void, lightsoutDatInit)(void);
STRING_LITERAL(TMP810, "Generic Cush Game", 17);
menuscene126012* menuscene_166032;
extern TFrame* frameptr_16242;
extern tgcheap47216 gch_47244;
app126002* gameapp_166065;
extern TNimType NTI126010; /* GameScene */
extern TNimType NTI126012; /* MenuScene */
extern TNimType NTI126006; /* Scene */
static TNimType* Nim_OfCheck_CACHE1[2];
static TNimType* Nim_OfCheck_CACHE2[2];
static TNimType* Nim_OfCheck_CACHE3[2];
static TNimType* Nim_OfCheck_CACHE4[2];
static TNimType* Nim_OfCheck_CACHE5[2];
static TNimType* Nim_OfCheck_CACHE6[2];

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

static N_INLINE(NIM_BOOL, isObjWithCache)(TNimType* obj, TNimType* subclass, TNimType** cache) {
	NIM_BOOL result;
	result = 0;
	{
		if (!(obj == subclass)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!((*obj).base == subclass)) goto LA7;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA7: ;
	{
		if (!(cache[(0)- 0] == obj)) goto LA11;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!(cache[(1)- 0] == obj)) goto LA15;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA15: ;
	result = isobjslowpath_22025(obj, subclass, cache);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, enter_128012)(scene126006* self) {
	nimfr("enter", "scene.nim")
	nimln(4, "scene.nim");
	{
		nimln(4, "scene.nim");
		if (!((self) && ((*self).Sup.m_type == (&NTI126010)))) goto LA3;
		nimln(4, "scene.nim");
		if (self) chckObj((*self).Sup.m_type, (&NTI126010));
		enter_165004(((gamescene126010*) (self)));
	}
	goto LA1;
	LA3: ;
	{
		nimln(4, "scene.nim");
		if (!((self) && ((*self).Sup.m_type == (&NTI126012)))) goto LA6;
		nimln(4, "scene.nim");
		if (self) chckObj((*self).Sup.m_type, (&NTI126012));
		enter_132018(((menuscene126012*) (self)));
	}
	goto LA1;
	LA6: ;
	{
		nimln(4, "scene.nim");
		if (!((self) && (isObjWithCache((*self).Sup.m_type, (&NTI126006), Nim_OfCheck_CACHE1)))) goto LA9;
		nimln(4, "scene.nim");
		enter_128004(self);
	}
	goto LA1;
	LA9: ;
	LA1: ;
	popFrame();
}

N_NIMCALL(void, leave_128025)(scene126006* self) {
	nimfr("leave", "scene.nim")
	nimln(7, "scene.nim");
	{
		nimln(7, "scene.nim");
		if (!((self) && ((*self).Sup.m_type == (&NTI126012)))) goto LA3;
		nimln(7, "scene.nim");
		if (self) chckObj((*self).Sup.m_type, (&NTI126012));
		leave_132034(((menuscene126012*) (self)));
	}
	goto LA1;
	LA3: ;
	{
		nimln(7, "scene.nim");
		if (!((self) && (isObjWithCache((*self).Sup.m_type, (&NTI126006), Nim_OfCheck_CACHE2)))) goto LA6;
		nimln(7, "scene.nim");
		leave_128017(self);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	popFrame();
}

N_NIMCALL(void, keydown_128040)(scene126006* self, NI32 key, NI32 mods) {
	nimfr("key_down", "scene.nim")
	nimln(10, "scene.nim");
	{
		nimln(10, "scene.nim");
		if (!((self) && ((*self).Sup.m_type == (&NTI126012)))) goto LA3;
		nimln(10, "scene.nim");
		if (self) chckObj((*self).Sup.m_type, (&NTI126012));
		keydown_132044(((menuscene126012*) (self)), key, mods);
	}
	goto LA1;
	LA3: ;
	{
		nimln(10, "scene.nim");
		if (!((self) && (isObjWithCache((*self).Sup.m_type, (&NTI126006), Nim_OfCheck_CACHE3)))) goto LA6;
		nimln(10, "scene.nim");
		keydown_128030(self, key, mods);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	popFrame();
}

N_NIMCALL(void, mousedown_128054)(scene126006* self, tmousebuttonevent115383* event) {
	nimfr("mouse_down", "scene.nim")
	nimln(13, "scene.nim");
	{
		nimln(13, "scene.nim");
		if (!((self) && ((*self).Sup.m_type == (&NTI126010)))) goto LA3;
		nimln(13, "scene.nim");
		if (self) chckObj((*self).Sup.m_type, (&NTI126010));
		mousedown_165027(((gamescene126010*) (self)), event);
	}
	goto LA1;
	LA3: ;
	{
		nimln(13, "scene.nim");
		if (!((self) && (isObjWithCache((*self).Sup.m_type, (&NTI126006), Nim_OfCheck_CACHE4)))) goto LA6;
		nimln(13, "scene.nim");
		mousedown_128045(self, event);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	popFrame();
}

N_NIMCALL(void, mousemotion_128068)(scene126006* self, tmousemotionevent115379* event) {
	nimfr("mouse_motion", "scene.nim")
	nimln(16, "scene.nim");
	mousemotion_128059(self, event);
	popFrame();
}

N_NIMCALL(void, draw_128081)(scene126006* self) {
	nimfr("draw", "scene.nim")
	nimln(19, "scene.nim");
	{
		nimln(19, "scene.nim");
		if (!((self) && ((*self).Sup.m_type == (&NTI126010)))) goto LA3;
		nimln(19, "scene.nim");
		if (self) chckObj((*self).Sup.m_type, (&NTI126010));
		draw_165038(((gamescene126010*) (self)));
	}
	goto LA1;
	LA3: ;
	{
		nimln(19, "scene.nim");
		if (!((self) && ((*self).Sup.m_type == (&NTI126012)))) goto LA6;
		nimln(19, "scene.nim");
		if (self) chckObj((*self).Sup.m_type, (&NTI126012));
		draw_132086(((menuscene126012*) (self)));
	}
	goto LA1;
	LA6: ;
	{
		nimln(19, "scene.nim");
		if (!((self) && (isObjWithCache((*self).Sup.m_type, (&NTI126006), Nim_OfCheck_CACHE5)))) goto LA9;
		nimln(19, "scene.nim");
		draw_128073(self);
	}
	goto LA1;
	LA9: ;
	LA1: ;
	popFrame();
}

N_NIMCALL(void, update_128096)(scene126006* self, NI t, NI dt) {
	nimfr("update", "scene.nim")
	nimln(22, "scene.nim");
	{
		nimln(22, "scene.nim");
		if (!((self) && ((*self).Sup.m_type == (&NTI126010)))) goto LA3;
		nimln(22, "scene.nim");
		if (self) chckObj((*self).Sup.m_type, (&NTI126010));
		update_165014(((gamescene126010*) (self)), t, dt);
	}
	goto LA1;
	LA3: ;
	{
		nimln(22, "scene.nim");
		if (!((self) && (isObjWithCache((*self).Sup.m_type, (&NTI126006), Nim_OfCheck_CACHE6)))) goto LA6;
		nimln(22, "scene.nim");
		update_128086(self, t, dt);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	popFrame();
}

N_NIMCALL(void, setscene_128111)(scenemanager126008* self, scene126006* scene) {
	nimfr("set_scene", "scene.nim")
	nimln(25, "scene.nim");
	setscene_128101(self, scene);
	popFrame();
}

N_NIMCALL(void, mousedown_164096)(clicksystem126016* self, tmousebuttonevent115383* event) {
	nimfr("mouse_down", "clicksystem.nim")
	nimln(41, "clicksystem.nim");
	mousedown_164077(self, event);
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit();
	stdlib_parseutilsDatInit();
	stdlib_strutilsDatInit();
	stdlib_colorsDatInit();
	stdlib_hashesDatInit();
	stdlib_timesDatInit();
	stdlib_mathDatInit();
	stdlib_tablesDatInit();
	stdlib_unsignedDatInit();
	stdlib_sdlDatInit();
	stdlib_sdl_ttfDatInit();
	stdlib_graphicsDatInit();
	HEX00_magicDatInit();
	stdlib_typetraitsDatInit();
	HEX00_sceneDatInit();
	HEX00_messageboxDatInit();
	HEX00_controllerDatInit();
	HEX00_appDatInit();
	HEX00_menuDatInit();
	HEX00_hoversystemDatInit();
	stdlib_posixDatInit();
	stdlib_osDatInit();
	stdlib_intsetsDatInit();
	random_mt19937arDatInit();
	random_posix_urandomDatInit();
	random_randomDatInit();
	HEX00_clicksystemDatInit();
	HEX00_gameDatInit();
	lightsoutDatInit();
	stdlib_parseutilsInit();
	stdlib_strutilsInit();
	stdlib_colorsInit();
	stdlib_hashesInit();
	stdlib_timesInit();
	stdlib_mathInit();
	stdlib_tablesInit();
	stdlib_unsignedInit();
	stdlib_sdlInit();
	stdlib_sdl_ttfInit();
	stdlib_graphicsInit();
	HEX00_magicInit();
	stdlib_typetraitsInit();
	HEX00_sceneInit();
	HEX00_messageboxInit();
	HEX00_controllerInit();
	HEX00_appInit();
	HEX00_menuInit();
	HEX00_hoversystemInit();
	stdlib_posixInit();
	stdlib_osInit();
	stdlib_intsetsInit();
	random_mt19937arInit();
	random_posix_urandomInit();
	random_randomInit();
	HEX00_clicksystemInit();
	HEX00_gameInit();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	lightsoutInit();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, lightsoutInit)(void) {
	scene126006* LOC1;
	nimfr("lightsout", "lightsout.nim")
	nimln(3, "lightsout.nim");
	asgnRef((void**) (&menuscene_166032), new_166006());
	nimln(4, "lightsout.nim");
	asgnRef((void**) (&gameapp_166065), new_166039());
	nimln(5, "lightsout.nim");
	LOC1 = 0;
	LOC1 = &menuscene_166032->Sup;
	init_131007(gameapp_166065, LOC1, ((NI32) 500), ((NI32) 500), ((NimStringDesc*) &TMP810));
	nimln(6, "lightsout.nim");
	run_131356(gameapp_166065);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, lightsoutDatInit)(void) {
}

