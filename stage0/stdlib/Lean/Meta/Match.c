// Lean compiler output
// Module: Lean.Meta.Match
// Imports: Init Lean.Meta.Match.MatchPatternAttr Lean.Meta.Match.Match Lean.Meta.Match.CaseValues Lean.Meta.Match.CaseArraySizes Lean.Meta.Match.MatchEqs
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__3;
static lean_object* l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__1;
static lean_object* l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__2;
static lean_object* l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__4;
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Meta_Match___hyg_4_(lean_object*);
static lean_object* _init_l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Meta", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Match", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__2;
x_2 = l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_initFn____x40_Lean_Meta_Match___hyg_4_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__4;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Match_MatchPatternAttr(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Match_Match(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Match_CaseValues(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Match_CaseArraySizes(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchPatternAttr(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_Match(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_CaseValues(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_CaseArraySizes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__1 = _init_l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__1();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__1);
l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__2 = _init_l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__2();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__2);
l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__3 = _init_l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__3();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__3);
l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__4 = _init_l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__4();
lean_mark_persistent(l_Lean_initFn____x40_Lean_Meta_Match___hyg_4____closed__4);
res = l_Lean_initFn____x40_Lean_Meta_Match___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
