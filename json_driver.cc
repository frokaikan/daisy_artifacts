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
function ==> _ZN8nlohmann10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS_14adl_serializerEE5parseIS8_Li0EEESA_RKT_St8functionIFbiNSA_13parse_event_tERSA_EE
demangle ==> nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer> nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer>::parse<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, 0>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<bool (int, nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer>::parse_event_t, nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer>&)>)
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/json-2017-02-12/build/SRC/src/json.hpp : 6484
; Function Attrs: mustprogress noinline sanitize_address uwtable
hint !TDDDbg !0 void @_ZN8nlohmann10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS_14adl_serializerEE5parseIS8_Li0EEESA_RKT_St8functionIFbiNSA_13parse_event_tERSA_EE(ptr noalias sret(%"class.nlohmann::basic_json") align 8, ptr noundef nonnull align 8 dereferenceable(32), ptr noundef) #8
*****************/
void _ZN8nlohmann10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS_14adl_serializerEE5parseIS8_Li0EEESA_RKT_St8functionIFbiNSA_13parse_event_tERSA_EE(void *, void *, void *);

/****************
function ==> _ZN8nlohmann10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS_14adl_serializerEED2Ev
demangle ==> nlohmann::basic_json<std::map, std::vector, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, bool, long, unsigned long, double, std::allocator, nlohmann::adl_serializer>::~basic_json()
source ==> /home/frokaikan/Desktop/workspace/fuzzer-test-suite-Sep/json-2017-02-12/build/SRC/src/json.hpp : 2575
; Function Attrs: noinline nounwind sanitize_address uwtable
hint !TDDDbg !0 void @_ZN8nlohmann10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS_14adl_serializerEED2Ev(ptr noundef nonnull align 8 dereferenceable(16)) #7
*****************/
void _ZN8nlohmann10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS_14adl_serializerEED2Ev(void *);

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
    TDD_addEdge(1, UNEG1);
    TDD_addEdge(UNEG1, 0);

ENTRY:
    TDD_buildGraph();
    TDD_init(data, size);

ALLOCATE:
{
    uint64_t __TDD_var_0 = 32;
    void *__TDD_var_1 = TDD_alloc(__TDD_var_0);
    TDD_setPtr(__TDD_var_1, 0, 0);
}

{
    uint64_t __TDD_var_0 = 16;
    void *__TDD_var_1 = TDD_alloc(__TDD_var_0);
    TDD_setPtr(__TDD_var_1, 1, 0);
}

{
    uint64_t __TDD_var_0 = 32;
    void *__TDD_var_1 = TDD_alloc(__TDD_var_0);
    TDD_setPtr(__TDD_var_1, 2, 0);
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
        default : goto UNREACHABLE;
    }

NODEID_0 : {
    if (!TDD_checkMemDep(1)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(1);
    std::string __TDD_var_1_raw = TDD_getSTDString();
    void *__TDD_var_1 = &__TDD_var_1_raw;
    std::function __TDD_var_2_raw = std::function<bool(int, uint8_t*, void*)>(nullptr);
    void *__TDD_var_2 = &__TDD_var_2_raw;
    try { _ZN8nlohmann10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS_14adl_serializerEE5parseIS8_Li0EEESA_RKT_St8functionIFbiNSA_13parse_event_tERSA_EE(__TDD_var_0, __TDD_var_1, __TDD_var_2); } catch (...) {goto RETURN;}
    goto ROOT;
}

NODEID_1 : {
    if (!TDD_checkMemDep(1)) goto ROOT;
    if (!TDD_runNode()) goto ROOT;
    void *__TDD_var_0 = TDD_getPtr(1);
    try { _ZN8nlohmann10basic_jsonISt3mapSt6vectorNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEblmdSaNS_14adl_serializerEED2Ev(__TDD_var_0); } catch (...) {goto RETURN;}
    goto ROOT;
}

UNREACHABLE:
    TDD_unreachable();

RETURN:
    TDD_fin();
    return 0;
}

}
