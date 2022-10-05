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
void    *TDD_getArg    ();
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
function ==> jpeg_std_error
demangle ==> jpeg_std_error
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/libjpeg-turbo-07-2017/build/SRC/jerror.c : 230
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 ptr @jpeg_std_error(ptr noundef) #0
*****************/
void *jpeg_std_error(void *);

/****************
function ==> jpeg_CreateDecompress
demangle ==> jpeg_CreateDecompress
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/libjpeg-turbo-07-2017/build/SRC/jdapimin.c : 34
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 void @jpeg_CreateDecompress(ptr noundef, i32 noundef, i64 noundef) #0
*****************/
void jpeg_CreateDecompress(void *, uint32_t, uint64_t);

/****************
function ==> jpeg_set_marker_processor
demangle ==> jpeg_set_marker_processor
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/libjpeg-turbo-07-2017/build/SRC/jdmarker.c : 1366
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 void @jpeg_set_marker_processor(ptr noundef, i32 noundef, ptr noundef) #0
*****************/
void jpeg_set_marker_processor(void *, uint32_t, void *);

/****************
function ==> jpeg_stdio_src
demangle ==> jpeg_stdio_src
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/libjpeg-turbo-07-2017/build/SRC/jdatasrc.c : 217
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 void @jpeg_stdio_src(ptr noundef, ptr noundef) #0
*****************/
void jpeg_stdio_src(void *, void *);

/****************
function ==> jpeg_read_header
demangle ==> jpeg_read_header
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/libjpeg-turbo-07-2017/build/SRC/jdapimin.c : 253
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @jpeg_read_header(ptr noundef, i32 noundef) #0
*****************/
uint32_t jpeg_read_header(void *, uint32_t);

/****************
function ==> jinit_write_ppm
demangle ==> jinit_write_ppm
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/libjpeg-turbo-07-2017/build/SRC/wrppm.c : 204
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 ptr @jinit_write_ppm(ptr noundef) #0
*****************/
void *jinit_write_ppm(void *);

/****************
function ==> jpeg_start_decompress
demangle ==> jpeg_start_decompress
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/libjpeg-turbo-07-2017/build/SRC/jdapistd.c : 43
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @jpeg_start_decompress(ptr noundef) #0
*****************/
uint32_t jpeg_start_decompress(void *);

/****************
function ==> jpeg_read_scanlines
demangle ==> jpeg_read_scanlines
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/libjpeg-turbo-07-2017/build/SRC/jdapistd.c : 261
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @jpeg_read_scanlines(ptr noundef, ptr noundef, i32 noundef) #0
*****************/
uint32_t jpeg_read_scanlines(void *, void *, uint32_t);

/****************
function ==> jpeg_finish_decompress
demangle ==> jpeg_finish_decompress
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/libjpeg-turbo-07-2017/build/SRC/jdapimin.c : 381
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 i32 @jpeg_finish_decompress(ptr noundef) #0
*****************/
uint32_t jpeg_finish_decompress(void *);

/****************
function ==> jpeg_destroy_decompress
demangle ==> jpeg_destroy_decompress
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/libjpeg-turbo-07-2017/build/SRC/jdapimin.c : 103
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 void @jpeg_destroy_decompress(ptr noundef) #0
*****************/
void jpeg_destroy_decompress(void *);

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
    TDD_addEdge(UNEG1, 0);

ENTRY:
    TDD_buildGraph();
    TDD_init(data, size);

ALLOCATE:
{
    uint64_t __TDD_var_0 = 632;
    void *__TDD_var_1 = TDD_alloc(__TDD_var_0);
    TDD_setPtr(__TDD_var_1, 0, 0);
}

{
    uint64_t __TDD_var_0 = 168;
    void *__TDD_var_1 = TDD_alloc(__TDD_var_0);
    TDD_setPtr(__TDD_var_1, 1, 0);
}


FILEOPEN:
{
    void *__TDD_var_0 = TDD_openFile();
    TDD_setFile(__TDD_var_0, 0);
}

{
    void *__TDD_var_0 = TDD_openFile();
    TDD_setFile(__TDD_var_0, 1);
}


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
        default : goto UNREACHABLE;
    }

NODEID_0 : {
    if (!TDD_checkMemDep(1)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(1);
    void *__TDD_var_1;
    try { __TDD_var_1 = jpeg_std_error(__TDD_var_0); } catch (...) {goto RETURN;}
    TDD_NE(__TDD_var_1, nullptr);
    goto ROOT;
}

NODEID_1 : {
    if (!TDD_checkMemDep(1)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(1);
    void *__TDD_var_1 = TDD_getPtr(0);
    *static_cast<void **>(__TDD_var_1) = __TDD_var_0;
    goto ROOT;
}

NODEID_2 : {
    if (!TDD_checkMemDep(0)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(0);
    uint32_t __TDD_var_1[1] = {62};
    uint32_t __TDD_var_2 = __TDD_var_1[TDD_getInt() % 1];
    uint32_t __TDD_var_3 = __TDD_var_2;
    uint64_t __TDD_var_4[1] = {632};
    uint64_t __TDD_var_5 = __TDD_var_4[TDD_getInt() % 1];
    uint64_t __TDD_var_6 = __TDD_var_5;
    try { jpeg_CreateDecompress(__TDD_var_0, __TDD_var_3, __TDD_var_6); } catch (...) {goto RETURN;}
    TDD_registerFree(jpeg_destroy_decompress, __TDD_var_0);
    goto ROOT;
}

NODEID_3 : {
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_alloc(UNEG1);
    void *__TDD_var_1 = TDD_getPtr(1);
    void *__TDD_var_2 = TDD_addPtr(__TDD_var_1, 152);
    *static_cast<void **>(__TDD_var_2) = __TDD_var_0;
    goto ROOT;
}

NODEID_4 : {
    if (!TDD_checkMemDep(0)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(0);
    uint32_t __TDD_var_1[2] = {236, 254};
    uint32_t __TDD_var_2 = __TDD_var_1[TDD_getInt() % 2];
    uint32_t __TDD_var_3 = forceUseValue ? __TDD_var_2 : TDD_getInt();
    void *__TDD_var_4 = nullptr;
    try { jpeg_set_marker_processor(__TDD_var_0, __TDD_var_3, __TDD_var_4); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_5 : {
    if (!TDD_checkMemDep(0)) goto ROOT;
    if (!TDD_checkFPDep(1)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(0);
    void *__TDD_var_1 = TDD_getFile(1);
    try { jpeg_stdio_src(__TDD_var_0, __TDD_var_1); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_6 : {
    if (!TDD_checkMemDep(0)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(0);
    uint32_t __TDD_var_1[1] = {1};
    uint32_t __TDD_var_2 = __TDD_var_1[TDD_getInt() % 1];
    uint32_t __TDD_var_3 = forceUseValue ? __TDD_var_2 : TDD_getInt();
    uint32_t __TDD_var_4;
    try { __TDD_var_4 = jpeg_read_header(__TDD_var_0, __TDD_var_3); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_7 : {
    if (!TDD_checkMemDep(0)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(0);
    void *__TDD_var_1;
    try { __TDD_var_1 = jinit_write_ppm(__TDD_var_0); } catch (...) {goto RETURN;}
    TDD_NE(__TDD_var_1, nullptr);
    TDD_setPtr(__TDD_var_1, 2, 320);
    goto ROOT;
}

NODEID_8 : {
    if (!TDD_checkFPDep(0)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getFile(0);
    void *__TDD_var_1 = TDD_getPtr(2);
    void *__TDD_var_2 = TDD_addPtr(__TDD_var_1, 344);
    *static_cast<void **>(__TDD_var_2) = __TDD_var_0;
    goto ROOT;
}

NODEID_9 : {
    if (!TDD_checkMemDep(0)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(0);
    uint32_t __TDD_var_1;
    try { __TDD_var_1 = jpeg_start_decompress(__TDD_var_0); } catch (...) {goto RETURN;}
    TDD_registerFree(jpeg_finish_decompress, __TDD_var_0);
    goto ROOT;
}

NODEID_10 : {
    if (!TDD_checkMemDep(0)) goto ROOT;
    if (!TDD_checkMemDep(2)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(0);
    void *__TDD_var_1 = TDD_getPtr(2);
    void *__TDD_var_2 = TDD_addPtr(__TDD_var_1, 376);
    uint32_t __TDD_var_3[1] = {1};
    uint32_t __TDD_var_4 = __TDD_var_3[TDD_getInt() % 1];
    uint32_t __TDD_var_5 = forceUseValue ? __TDD_var_4 : TDD_getInt();
    uint32_t __TDD_var_6;
    try { __TDD_var_6 = jpeg_read_scanlines(__TDD_var_0, __TDD_var_2, __TDD_var_5); } catch (...) {goto RETURN;}
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

UNREACHABLE:
    TDD_unreachable();

RETURN:
    TDD_fin();
    return 0;
}

}
