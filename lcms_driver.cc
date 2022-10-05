/**********************************
 * TDD Driver Synthesis Framework *
 **********************************/

// header files
#include <cinttypes>
#include <csetjmp>
#include <cstring>
#include <functional>
#include <string>
#include <vector>
#define UNEG1 static_cast<uint64_t>(-1)
#define TDD_EQ(var, magic) if (var != magic) goto RETURN
#define TDD_NE(var, magic) if (var == magic) goto RETURN
#define TDD_LT(var, magic) if (var >= magic) goto RETURN
#define TDD_LE(var, magic) if (var >  magic) goto RETURN
#define TDD_GT(var, magic) if (var <= magic) goto RETURN
#define TDD_GE(var, magic) if (var <  magic) goto RETURN
#define TDD_STR(str) (void *)str

extern "C" {

// small structure

struct __TDD_FF      {float     _1; float     _2;};
struct __TDD_I1_I1   {bool      _1; bool      _2;};
struct __TDD_I1_I8   {bool      _1; uint8_t   _2;};
struct __TDD_I1_I16  {bool      _1; uint16_t  _2;};
struct __TDD_I1_I32  {bool      _1; uint32_t  _2;};
struct __TDD_I1_I64  {bool      _1; uint64_t  _2;};
struct __TDD_I1_FL   {bool      _1; float     _2;};
struct __TDD_I1_DB   {bool      _1; double    _2;};
struct __TDD_I1_FF   {bool      _1; __TDD_FF  _2;};
struct __TDD_I1_PTR  {bool      _1; void     *_2;};
struct __TDD_I8_I1   {uint8_t   _1; bool      _2;};
struct __TDD_I8_I8   {uint8_t   _1; uint8_t   _2;};
struct __TDD_I8_I16  {uint8_t   _1; uint16_t  _2;};
struct __TDD_I8_I32  {uint8_t   _1; uint32_t  _2;};
struct __TDD_I8_I64  {uint8_t   _1; uint64_t  _2;};
struct __TDD_I8_FL   {uint8_t   _1; float     _2;};
struct __TDD_I8_DB   {uint8_t   _1; double    _2;};
struct __TDD_I8_FF   {uint8_t   _1; __TDD_FF  _2;};
struct __TDD_I8_PTR  {uint8_t   _1; void     *_2;};
struct __TDD_I16_I1  {uint16_t  _1; bool      _2;};
struct __TDD_I16_I8  {uint16_t  _1; uint8_t   _2;};
struct __TDD_I16_I16 {uint16_t  _1; uint16_t  _2;};
struct __TDD_I16_I32 {uint16_t  _1; uint32_t  _2;};
struct __TDD_I16_I64 {uint16_t  _1; uint64_t  _2;};
struct __TDD_I16_FL  {uint16_t  _1; float     _2;};
struct __TDD_I16_DB  {uint16_t  _1; double    _2;};
struct __TDD_I16_FF  {uint16_t  _1; __TDD_FF  _2;};
struct __TDD_I16_PTR {uint16_t  _1; void     *_2;};
struct __TDD_I32_I1  {uint32_t  _1; bool      _2;};
struct __TDD_I32_I8  {uint32_t  _1; uint8_t   _2;};
struct __TDD_I32_I16 {uint32_t  _1; uint16_t  _2;};
struct __TDD_I32_I32 {uint32_t  _1; uint32_t  _2;};
struct __TDD_I32_I64 {uint32_t  _1; uint64_t  _2;};
struct __TDD_I32_FL  {uint32_t  _1; float     _2;};
struct __TDD_I32_DB  {uint32_t  _1; double    _2;};
struct __TDD_I32_FF  {uint32_t  _1; __TDD_FF  _2;};
struct __TDD_I32_PTR {uint32_t  _1; void     *_2;};
struct __TDD_I64_I1  {uint64_t  _1; bool      _2;};
struct __TDD_I64_I8  {uint64_t  _1; uint8_t   _2;};
struct __TDD_I64_I16 {uint64_t  _1; uint16_t  _2;};
struct __TDD_I64_I32 {uint64_t  _1; uint32_t  _2;};
struct __TDD_I64_I64 {uint64_t  _1; uint64_t  _2;};
struct __TDD_I64_FL  {uint64_t  _1; float     _2;};
struct __TDD_I64_DB  {uint64_t  _1; double    _2;};
struct __TDD_I64_FF  {uint64_t  _1; __TDD_FF  _2;};
struct __TDD_I64_PTR {uint64_t  _1; void     *_2;};
struct __TDD_FL_I1   {float     _1; bool      _2;};
struct __TDD_FL_I8   {float     _1; uint8_t   _2;};
struct __TDD_FL_I16  {float     _1; uint16_t  _2;};
struct __TDD_FL_I32  {float     _1; uint32_t  _2;};
struct __TDD_FL_I64  {float     _1; uint64_t  _2;};
struct __TDD_FL_FL   {float     _1; float     _2;};
struct __TDD_FL_DB   {float     _1; double    _2;};
struct __TDD_FL_FF   {float     _1; __TDD_FF  _2;};
struct __TDD_FL_PTR  {float     _1; void     *_2;};
struct __TDD_DB_I1   {double    _1; bool      _2;};
struct __TDD_DB_I8   {double    _1; uint8_t   _2;};
struct __TDD_DB_I16  {double    _1; uint16_t  _2;};
struct __TDD_DB_I32  {double    _1; uint32_t  _2;};
struct __TDD_DB_I64  {double    _1; uint64_t  _2;};
struct __TDD_DB_FL   {double    _1; float     _2;};
struct __TDD_DB_DB   {double    _1; double    _2;};
struct __TDD_DB_FF   {double    _1; __TDD_FF  _2;};
struct __TDD_DB_PTR  {double    _1; void     *_2;};
struct __TDD_FF_I1   {__TDD_FF  _1; bool      _2;};
struct __TDD_FF_I8   {__TDD_FF  _1; uint8_t   _2;};
struct __TDD_FF_I16  {__TDD_FF  _1; uint16_t  _2;};
struct __TDD_FF_I32  {__TDD_FF  _1; uint32_t  _2;};
struct __TDD_FF_I64  {__TDD_FF  _1; uint64_t  _2;};
struct __TDD_FF_FL   {__TDD_FF  _1; float     _2;};
struct __TDD_FF_DB   {__TDD_FF  _1; double    _2;};
struct __TDD_FF_FF   {__TDD_FF  _1; __TDD_FF  _2;};
struct __TDD_FF_PTR  {__TDD_FF  _1; void     *_2;};
struct __TDD_PTR_I1  {void     *_1; bool      _2;};
struct __TDD_PTR_I8  {void     *_1; uint8_t   _2;};
struct __TDD_PTR_I16 {void     *_1; uint16_t  _2;};
struct __TDD_PTR_I32 {void     *_1; uint32_t  _2;};
struct __TDD_PTR_I64 {void     *_1; uint64_t  _2;};
struct __TDD_PTR_FL  {void     *_1; float     _2;};
struct __TDD_PTR_DB  {void     *_1; double    _2;};
struct __TDD_PTR_FF  {void     *_1; __TDD_FF  _2;};
struct __TDD_PTR_PTR {void     *_1; void     *_2;};

// TDD function declarations
// util function
char   *TDD_fileName ();
void   *TDD_addPtr   (void *ptr,  size_t diff);
void   *TDD_subPtr   (void *ptr,  size_t diff);
size_t  TDD_diffPtr  (void *ptr1, void *ptr2);
// core function
void     TDD_init         (const uint8_t *data, size_t size);
void     TDD_fin          ();
void     TDD_registerFree (std::function<void (void *)> func, void *ptr);
void     TDD_saveInt      (uint64_t id, uint64_t value);
uint64_t TDD_loadInt      (uint64_t id);
void     TDD_saveDouble   (uint64_t id, double value);
double   TDD_loadDouble   (uint64_t id);
// seed utilization
uint8_t  TDD_getNext   ();
bool     TDD_getBool   ();
uint64_t TDD_getInt    ();
uint64_t TDD_getSize   (uint64_t minSize);
double   TDD_getDouble ();
void    *TDD_getBuffer (uint64_t &size);
void     TDD_newArg    ();
uint64_t TDD_argc      ();
void    *TDD_argv      ();
bool     TDD_checkHasGraph   ();
void     TDD_addEdge         (uint64_t fromID, uint64_t toID);
void     TDD_buildGraph      ();
uint64_t TDD_switch          ();
bool     TDD_checkMemDep     (uint64_t memID);
bool     TDD_checkFPDep      (uint64_t pseudoFD);
bool     TDD_runNode         ();
void     TDD_unreachable     ();
// objects
void *TDD_alloc       (size_t size, bool autoFree = true);
void *TDD_getPtr      (uint64_t ptrID);
void  TDD_setPtr      (void *ptr, uint64_t ptrID, uint64_t ptrOffset);
void  TDD_setLoadPtr  (uint64_t fromID, uint64_t fromOffset, uint64_t ptrID, uint64_t loadOffset);
void *TDD_openFile    ();
void *TDD_getFile     (uint64_t pseudoFD);
void  TDD_setFile     (void *fp, uint64_t pseudoFD);
void  TDD_setLoadFile (uint64_t fromID, uint64_t fromOffset, uint64_t pseudoFD);
// jmp
void *TDD_getJmpBuf ();
void  TDD_longjmp   (jmp_buf env, int val);

// special object
extern "C++" std::string TDD_getSTDString () {
    std::string ret(TDD_getSize(UNEG1), '\0');
    for (uint64_t i = 0; i < ret.size(); ++i) {
        ret[i] = TDD_getNext();
    }
    return ret;
}
extern "C++" std::vector<uint8_t> TDD_getSTDVectorU8 () {
    std::vector<uint8_t> ret(TDD_getSize(UNEG1), '\0');
    for (uint64_t i = 0; i < ret.size(); ++i) {
        ret[i] = TDD_getNext();
    }
    return ret;
}
extern "C++" std::vector<int8_t> TDD_getSTDVectorI8 () {
    std::vector<int8_t> ret(TDD_getSize(UNEG1), '\0');
    for (uint64_t i = 0; i < ret.size(); ++i) {
        ret[i] = TDD_getNext();
    }
    return ret;
}

// library function declarations
/****************
function ==> cmsSetLogErrorHandler
demangle ==> cmsSetLogErrorHandler
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmserr.c : 502
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 void @cmsSetLogErrorHandler(ptr noundef) #0
*****************/
void cmsSetLogErrorHandler(void *);

/****************
function ==> cmsSetAdaptationState
demangle ==> cmsSetAdaptationState
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmsxform.c : 77
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 double @cmsSetAdaptationState(double noundef) #0
*****************/
double cmsSetAdaptationState(double);

/****************
function ==> cmsCreate_sRGBProfileTHR
demangle ==> cmsCreate_sRGBProfileTHR
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmsvirt.c : 643
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 ptr @cmsCreate_sRGBProfileTHR(ptr noundef) #0
*****************/
void *cmsCreate_sRGBProfileTHR(void *);

/****************
function ==> cmsGetColorSpace
demangle ==> cmsGetColorSpace
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmsio0.c : 955
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @cmsGetColorSpace(ptr noundef) #0
*****************/
uint32_t cmsGetColorSpace(void *);

/****************
function ==> _cmsICCcolorSpace
demangle ==> _cmsICCcolorSpace
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmspcs.c : 764
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @_cmsICCcolorSpace(i32 noundef) #0
*****************/
uint32_t _cmsICCcolorSpace(uint32_t);

/****************
function ==> _cmsLCMScolorSpace
demangle ==> _cmsLCMScolorSpace
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmspcs.c : 810
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @_cmsLCMScolorSpace(i32 noundef) #0
*****************/
uint32_t _cmsLCMScolorSpace(uint32_t);

/****************
function ==> cmsCreateProofingTransform
demangle ==> cmsCreateProofingTransform
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmsxform.c : 1262
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 ptr @cmsCreateProofingTransform(ptr noundef, i32 noundef, ptr noundef, i32 noundef, ptr noundef, i32 noundef, i32 noundef, i32 noundef) #0
*****************/
void *cmsCreateProofingTransform(void *, uint32_t, void *, uint32_t, void *, uint32_t, uint32_t, uint32_t);

/****************
function ==> cmsDoTransform
demangle ==> cmsDoTransform
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmsxform.c : 175
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 void @cmsDoTransform(ptr noundef, ptr noundef, ptr noundef, i32 noundef) #0
*****************/
void cmsDoTransform(void *, void *, void *, uint32_t);

/****************
function ==> cmsDeleteTransform
demangle ==> cmsDeleteTransform
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmsxform.c : 147
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 void @cmsDeleteTransform(ptr noundef) #0
*****************/
void cmsDeleteTransform(void *);

/****************
function ==> cmsCloseProfile
demangle ==> cmsCloseProfile
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmsio0.c : 1435
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @cmsCloseProfile(ptr noundef) #0
*****************/
uint32_t cmsCloseProfile(void *);

/****************
function ==> cmsstrcasecmp
demangle ==> cmsstrcasecmp
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmserr.c : 39
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @cmsstrcasecmp(ptr noundef, ptr noundef) #0
*****************/
uint32_t cmsstrcasecmp(void *, void *);

/****************
function ==> cmsOpenProfileFromFileTHR
demangle ==> cmsOpenProfileFromFileTHR
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmsio0.c : 1077
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 ptr @cmsOpenProfileFromFileTHR(ptr noundef, ptr noundef, ptr noundef) #0
*****************/
void *cmsOpenProfileFromFileTHR(void *, void *, void *);

/****************
function ==> cmsGetPostScriptCSA
demangle ==> cmsGetPostScriptCSA
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmsps2.c : 1574
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @cmsGetPostScriptCSA(ptr noundef, ptr noundef, i32 noundef, i32 noundef, ptr noundef, i32 noundef) #0
*****************/
uint32_t cmsGetPostScriptCSA(void *, void *, uint32_t, uint32_t, void *, uint32_t);

/****************
function ==> cmsGetPostScriptCRD
demangle ==> cmsGetPostScriptCRD
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/lcms-2017-03-21/build/SRC/src/cmsps2.c : 1547
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @cmsGetPostScriptCRD(ptr noundef, ptr noundef, i32 noundef, i32 noundef, ptr noundef, i32 noundef) #0
*****************/
uint32_t cmsGetPostScriptCRD(void *, void *, uint32_t, uint32_t, void *, uint32_t);

int LLVMFuzzerTestOneInput (const uint8_t *data, size_t size) {
MAGICVARS:
    uint64_t toID = UNEG1;
    bool forceUseValue = false;

CHECKIFEMPTY:
    if (size == 0) goto RETURN;

CHECKJMPBUF:
    if (setjmp(static_cast<__jmp_buf_tag *>(TDD_getJmpBuf()))) goto RETURN;

GRAPHCHECK:
    if (TDD_checkHasGraph()) goto ENTRY;

GRAPH:
    TDD_addEdge(0, 1);
    TDD_addEdge(0, 13);
    TDD_addEdge(1, 2);
    TDD_addEdge(2, 3);
    TDD_addEdge(3, 4);
    TDD_addEdge(4, 5);
    TDD_addEdge(5, 6);
    TDD_addEdge(6, 7);
    TDD_addEdge(7, 8);
    TDD_addEdge(8, 9);
    TDD_addEdge(9, 10);
    TDD_addEdge(10, 11);
    TDD_addEdge(11, 12);
    TDD_addEdge(12, UNEG1);
    TDD_addEdge(13, 14);
    TDD_addEdge(13, 18);
    TDD_addEdge(14, 15);
    TDD_addEdge(15, 16);
    TDD_addEdge(16, 17);
    TDD_addEdge(17, 13);
    TDD_addEdge(18, 19);
    TDD_addEdge(19, 20);
    TDD_addEdge(20, 21);
    TDD_addEdge(21, UNEG1);
    TDD_addEdge(UNEG1, 0);

ENTRY:
    TDD_buildGraph();
    TDD_init(data, size);

ALLOCATE:
{
    uint64_t __TDD_var_0 = 681;
    void *__TDD_var_1 = TDD_alloc(__TDD_var_0);
    TDD_setPtr(__TDD_var_1, 0, 0);
}

{
    uint64_t __TDD_var_0 = 681;
    void *__TDD_var_1 = TDD_alloc(__TDD_var_0);
    TDD_setPtr(__TDD_var_1, 1, 0);
}

{
    uint64_t __TDD_var_0 = 22745;
    void *__TDD_var_1 = TDD_alloc(__TDD_var_0);
    TDD_setPtr(__TDD_var_1, 5, 0);
}

{
    uint64_t __TDD_var_0 = 220431;
    void *__TDD_var_1 = TDD_alloc(__TDD_var_0);
    TDD_setPtr(__TDD_var_1, 6, 0);
}


FILEOPEN:

LOADMEM:

LOADFP:

ROOT:
    toID = TDD_switch();
    switch (toID) {
        case UNEG1 : goto RETURN;
        case 0 : goto NODEID_0;
        case 1 : goto NODEID_1;
        case 2 : goto NODEID_2;
        case 3 : goto NODEID_3;
        case 4 : goto NODEID_4;
        case 5 : goto NODEID_5;
        case 6 : goto NODEID_6;
        case 7 : goto NODEID_7;
        case 8 : goto NODEID_8;
        case 9 : goto NODEID_9;
        case 10 : goto NODEID_10;
        case 11 : goto NODEID_11;
        case 12 : goto NODEID_12;
        case 13 : goto NODEID_13;
        case 14 : goto NODEID_14;
        case 15 : goto NODEID_15;
        case 16 : goto NODEID_16;
        case 17 : goto NODEID_17;
        case 18 : goto NODEID_18;
        case 19 : goto NODEID_19;
        case 20 : goto NODEID_20;
        case 21 : goto NODEID_21;
        default : goto UNREACHABLE;
    }

NODEID_0 : {
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = nullptr;
    try { cmsSetLogErrorHandler(__TDD_var_0); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_1 : {
    if (!TDD_runNode()) goto ROOT;
    double __TDD_var_0[1] = {0};
    double __TDD_var_1 = __TDD_var_0[TDD_getInt() % 1];
    double __TDD_var_2 = forceUseValue ? __TDD_var_1 : TDD_getDouble();
    double __TDD_var_3;
    try { __TDD_var_3 = cmsSetAdaptationState(__TDD_var_2); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_2 : {
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = nullptr;
    void *__TDD_var_1;
    try { __TDD_var_1 = cmsOpenProfileFromFileTHR(__TDD_var_0, TDD_fileName(), TDD_STR("r")); } catch (...) {goto RETURN;}
    TDD_NE(__TDD_var_1, nullptr);
    TDD_setPtr(__TDD_var_1, 2, 0);
    TDD_registerFree(cmsCloseProfile, __TDD_var_1);
    goto ROOT;
}

NODEID_3 : {
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = nullptr;
    void *__TDD_var_1;
    try { __TDD_var_1 = cmsOpenProfileFromFileTHR(__TDD_var_0, TDD_fileName(), TDD_STR("r")); } catch (...) {goto RETURN;}
    TDD_NE(__TDD_var_1, nullptr);
    TDD_setPtr(__TDD_var_1, 3, 0);
    TDD_registerFree(cmsCloseProfile, __TDD_var_1);
    goto ROOT;
}

NODEID_4 : {
    if (!TDD_checkMemDep(2)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(2);
    uint32_t __TDD_var_1;
    try { __TDD_var_1 = cmsGetColorSpace(__TDD_var_0); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_5 : {
    if (!TDD_runNode()) goto ROOT;
    uint32_t __TDD_var_0[1] = {4};
    uint32_t __TDD_var_1 = __TDD_var_0[TDD_getInt() % 1];
    uint32_t __TDD_var_2 = forceUseValue ? __TDD_var_1 : TDD_getInt();
    uint32_t __TDD_var_3;
    try { __TDD_var_3 = _cmsICCcolorSpace(__TDD_var_2); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_6 : {
    if (!TDD_checkMemDep(3)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(3);
    uint32_t __TDD_var_1;
    try { __TDD_var_1 = cmsGetColorSpace(__TDD_var_0); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_7 : {
    if (!TDD_runNode()) goto ROOT;
    uint32_t __TDD_var_0[1] = {1380401696};
    uint32_t __TDD_var_1 = __TDD_var_0[TDD_getInt() % 1];
    uint32_t __TDD_var_2 = forceUseValue ? __TDD_var_1 : TDD_getInt();
    uint32_t __TDD_var_3;
    try { __TDD_var_3 = _cmsLCMScolorSpace(__TDD_var_2); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_8 : {
    if (!TDD_checkMemDep(2)) goto ROOT;
    if (!TDD_checkMemDep(3)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(2);
    uint32_t __TDD_var_1[1] = {262169};
    uint32_t __TDD_var_2 = __TDD_var_1[TDD_getInt() % 1];
    uint32_t __TDD_var_3 = forceUseValue ? __TDD_var_2 : TDD_getInt();
    void *__TDD_var_4 = TDD_getPtr(3);
    uint32_t __TDD_var_5[1] = {262169};
    uint32_t __TDD_var_6 = __TDD_var_5[TDD_getInt() % 1];
    uint32_t __TDD_var_7 = forceUseValue ? __TDD_var_6 : TDD_getInt();
    void *__TDD_var_8 = nullptr;
    uint32_t __TDD_var_9[1] = {0};
    uint32_t __TDD_var_10 = __TDD_var_9[TDD_getInt() % 1];
    uint32_t __TDD_var_11 = forceUseValue ? __TDD_var_10 : TDD_getInt();
    uint32_t __TDD_var_12[1] = {0};
    uint32_t __TDD_var_13 = __TDD_var_12[TDD_getInt() % 1];
    uint32_t __TDD_var_14 = forceUseValue ? __TDD_var_13 : TDD_getInt();
    uint32_t __TDD_var_15[1] = {0};
    uint32_t __TDD_var_16 = __TDD_var_15[TDD_getInt() % 1];
    uint32_t __TDD_var_17 = forceUseValue ? __TDD_var_16 : TDD_getInt();
    void *__TDD_var_18;
    try { __TDD_var_18 = cmsCreateProofingTransform(__TDD_var_0, __TDD_var_3, __TDD_var_4, __TDD_var_7, __TDD_var_8, __TDD_var_11, __TDD_var_14, __TDD_var_17); } catch (...) {goto RETURN;}
    TDD_NE(__TDD_var_18, nullptr);
    TDD_setPtr(__TDD_var_18, 4, 0);
    TDD_registerFree(cmsDeleteTransform, __TDD_var_18);
    goto ROOT;
}

NODEID_9 : {
    if (!TDD_checkMemDep(4)) goto ROOT;
    if (!TDD_checkMemDep(0)) goto ROOT;
    if (!TDD_checkMemDep(1)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(4);
    void *__TDD_var_1 = TDD_getPtr(0);
    void *__TDD_var_2 = TDD_getPtr(1);
    uint32_t __TDD_var_3[1] = {227};
    uint32_t __TDD_var_4 = __TDD_var_3[TDD_getInt() % 1];
    uint32_t __TDD_var_5 = forceUseValue ? __TDD_var_4 : TDD_getInt();
    try { cmsDoTransform(__TDD_var_0, __TDD_var_1, __TDD_var_2, __TDD_var_5); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_10 : {
    if (!TDD_runNode()) goto ROOT;
    goto ROOT;
}

NODEID_11 : {
    if (!TDD_runNode()) goto ROOT;
    goto ROOT;
}

NODEID_12 : {
    if (!TDD_runNode()) goto ROOT;
    goto ROOT;
}

NODEID_13 : {
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_alloc(UNEG1);
    void *__TDD_var_1 = TDD_alloc(UNEG1);
    uint32_t __TDD_var_2;
    try { __TDD_var_2 = cmsstrcasecmp(__TDD_var_0, __TDD_var_1); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_14 : {
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = nullptr;
    void *__TDD_var_1 = TDD_fileName();
    void *__TDD_var_2 = TDD_STR("r");
    void *__TDD_var_3;
    try { __TDD_var_3 = cmsOpenProfileFromFileTHR(__TDD_var_0, __TDD_var_1, __TDD_var_2); } catch (...) {goto RETURN;}
    TDD_NE(__TDD_var_3, nullptr);
    TDD_setPtr(__TDD_var_3, 7, 0);
    TDD_registerFree(cmsCloseProfile, __TDD_var_3);
    goto ROOT;
}

NODEID_15 : {
    if (!TDD_checkMemDep(7)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = nullptr;
    void *__TDD_var_1 = TDD_getPtr(7);
    uint32_t __TDD_var_2[1] = {0};
    uint32_t __TDD_var_3 = __TDD_var_2[TDD_getInt() % 1];
    uint32_t __TDD_var_4 = forceUseValue ? __TDD_var_3 : TDD_getInt();
    uint32_t __TDD_var_5[1] = {0};
    uint32_t __TDD_var_6 = __TDD_var_5[TDD_getInt() % 1];
    uint32_t __TDD_var_7 = forceUseValue ? __TDD_var_6 : TDD_getInt();
    void *__TDD_var_8 = nullptr;
    uint32_t __TDD_var_9[1] = {0};
    uint32_t __TDD_var_10 = __TDD_var_9[TDD_getInt() % 1];
    uint32_t __TDD_var_11 = forceUseValue ? __TDD_var_10 : TDD_getInt();
    uint32_t __TDD_var_12;
    try { __TDD_var_12 = cmsGetPostScriptCSA(__TDD_var_0, __TDD_var_1, __TDD_var_4, __TDD_var_7, __TDD_var_8, __TDD_var_11); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_16 : {
    if (!TDD_checkMemDep(7)) goto ROOT;
    if (!TDD_checkMemDep(5)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = nullptr;
    void *__TDD_var_1 = TDD_getPtr(7);
    uint32_t __TDD_var_2[1] = {0};
    uint32_t __TDD_var_3 = __TDD_var_2[TDD_getInt() % 1];
    uint32_t __TDD_var_4 = forceUseValue ? __TDD_var_3 : TDD_getInt();
    uint32_t __TDD_var_5[1] = {0};
    uint32_t __TDD_var_6 = __TDD_var_5[TDD_getInt() % 1];
    uint32_t __TDD_var_7 = forceUseValue ? __TDD_var_6 : TDD_getInt();
    void *__TDD_var_8 = TDD_getPtr(5);
    uint32_t __TDD_var_9[1] = {22744};
    uint32_t __TDD_var_10 = __TDD_var_9[TDD_getInt() % 1];
    uint32_t __TDD_var_11 = forceUseValue ? __TDD_var_10 : TDD_getInt();
    uint32_t __TDD_var_12;
    try { __TDD_var_12 = cmsGetPostScriptCSA(__TDD_var_0, __TDD_var_1, __TDD_var_4, __TDD_var_7, __TDD_var_8, __TDD_var_11); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_17 : {
    if (!TDD_runNode()) goto ROOT;
    goto ROOT;
}

NODEID_18 : {
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = nullptr;
    void *__TDD_var_1 = TDD_fileName();
    void *__TDD_var_2 = TDD_STR("r");
    void *__TDD_var_3;
    try { __TDD_var_3 = cmsOpenProfileFromFileTHR(__TDD_var_0, __TDD_var_1, __TDD_var_2); } catch (...) {goto RETURN;}
    TDD_NE(__TDD_var_3, nullptr);
    TDD_setPtr(__TDD_var_3, 8, 0);
    TDD_registerFree(cmsCloseProfile, __TDD_var_3);
    goto ROOT;
}

NODEID_19 : {
    if (!TDD_checkMemDep(8)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = nullptr;
    void *__TDD_var_1 = TDD_getPtr(8);
    uint32_t __TDD_var_2[1] = {0};
    uint32_t __TDD_var_3 = __TDD_var_2[TDD_getInt() % 1];
    uint32_t __TDD_var_4 = forceUseValue ? __TDD_var_3 : TDD_getInt();
    uint32_t __TDD_var_5[1] = {0};
    uint32_t __TDD_var_6 = __TDD_var_5[TDD_getInt() % 1];
    uint32_t __TDD_var_7 = forceUseValue ? __TDD_var_6 : TDD_getInt();
    void *__TDD_var_8 = nullptr;
    uint32_t __TDD_var_9[1] = {0};
    uint32_t __TDD_var_10 = __TDD_var_9[TDD_getInt() % 1];
    uint32_t __TDD_var_11 = forceUseValue ? __TDD_var_10 : TDD_getInt();
    uint32_t __TDD_var_12;
    try { __TDD_var_12 = cmsGetPostScriptCRD(__TDD_var_0, __TDD_var_1, __TDD_var_4, __TDD_var_7, __TDD_var_8, __TDD_var_11); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_20 : {
    if (!TDD_checkMemDep(8)) goto ROOT;
    if (!TDD_checkMemDep(6)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = nullptr;
    void *__TDD_var_1 = TDD_getPtr(8);
    uint32_t __TDD_var_2[1] = {0};
    uint32_t __TDD_var_3 = __TDD_var_2[TDD_getInt() % 1];
    uint32_t __TDD_var_4 = forceUseValue ? __TDD_var_3 : TDD_getInt();
    uint32_t __TDD_var_5[1] = {0};
    uint32_t __TDD_var_6 = __TDD_var_5[TDD_getInt() % 1];
    uint32_t __TDD_var_7 = forceUseValue ? __TDD_var_6 : TDD_getInt();
    void *__TDD_var_8 = TDD_getPtr(6);
    uint32_t __TDD_var_9[1] = {220430};
    uint32_t __TDD_var_10 = __TDD_var_9[TDD_getInt() % 1];
    uint32_t __TDD_var_11 = forceUseValue ? __TDD_var_10 : TDD_getInt();
    uint32_t __TDD_var_12;
    try { __TDD_var_12 = cmsGetPostScriptCRD(__TDD_var_0, __TDD_var_1, __TDD_var_4, __TDD_var_7, __TDD_var_8, __TDD_var_11); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_21 : {
    if (!TDD_runNode()) goto ROOT;
    goto ROOT;
}

UNREACHABLE:
    TDD_unreachable();

RETURN:
    TDD_fin();
    return 0;
}

}
