// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// code.cpp
sexp cpp_default_device();
extern "C" SEXP _metalme_cpp_default_device() {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp_default_device());
  END_CPP11
}
// code.cpp
list cpp_device_info(sexp device_sexp);
extern "C" SEXP _metalme_cpp_device_info(SEXP device_sexp) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp_device_info(cpp11::as_cpp<cpp11::decay_t<sexp>>(device_sexp)));
  END_CPP11
}
// code.cpp
sexp cpp_make_library(sexp device_sexp, std::string code);
extern "C" SEXP _metalme_cpp_make_library(SEXP device_sexp, SEXP code) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp_make_library(cpp11::as_cpp<cpp11::decay_t<sexp>>(device_sexp), cpp11::as_cpp<cpp11::decay_t<std::string>>(code)));
  END_CPP11
}
// code.cpp
strings cpp_library_function_names(sexp library_sexp);
extern "C" SEXP _metalme_cpp_library_function_names(SEXP library_sexp) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp_library_function_names(cpp11::as_cpp<cpp11::decay_t<sexp>>(library_sexp)));
  END_CPP11
}
// code.cpp
sexp cpp_library_function(sexp library_sexp, std::string name);
extern "C" SEXP _metalme_cpp_library_function(SEXP library_sexp, SEXP name) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp_library_function(cpp11::as_cpp<cpp11::decay_t<sexp>>(library_sexp), cpp11::as_cpp<cpp11::decay_t<std::string>>(name)));
  END_CPP11
}
// code.cpp
list cpp_function_info(sexp function_sexp);
extern "C" SEXP _metalme_cpp_function_info(SEXP function_sexp) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp_function_info(cpp11::as_cpp<cpp11::decay_t<sexp>>(function_sexp)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_metalme_cpp_default_device",         (DL_FUNC) &_metalme_cpp_default_device,         0},
    {"_metalme_cpp_device_info",            (DL_FUNC) &_metalme_cpp_device_info,            1},
    {"_metalme_cpp_function_info",          (DL_FUNC) &_metalme_cpp_function_info,          1},
    {"_metalme_cpp_library_function",       (DL_FUNC) &_metalme_cpp_library_function,       2},
    {"_metalme_cpp_library_function_names", (DL_FUNC) &_metalme_cpp_library_function_names, 1},
    {"_metalme_cpp_make_library",           (DL_FUNC) &_metalme_cpp_make_library,           2},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_metalme(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
