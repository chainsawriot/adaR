// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Rcpp_ada_parse
DataFrame Rcpp_ada_parse(const CharacterVector& input_vec);
RcppExport SEXP _adaR_Rcpp_ada_parse(SEXP input_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type input_vec(input_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_parse(input_vec));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_has_credentials
bool Rcpp_ada_has_credentials(const char* input);
RcppExport SEXP _adaR_Rcpp_ada_has_credentials(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_has_credentials(input));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_has_empty_hostname
bool Rcpp_ada_has_empty_hostname(const char* input);
RcppExport SEXP _adaR_Rcpp_ada_has_empty_hostname(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_has_empty_hostname(input));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_has_hostname
bool Rcpp_ada_has_hostname(const char* input);
RcppExport SEXP _adaR_Rcpp_ada_has_hostname(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_has_hostname(input));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_has_non_empty_username
bool Rcpp_ada_has_non_empty_username(const char* input);
RcppExport SEXP _adaR_Rcpp_ada_has_non_empty_username(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_has_non_empty_username(input));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_has_non_empty_password
bool Rcpp_ada_has_non_empty_password(const char* input);
RcppExport SEXP _adaR_Rcpp_ada_has_non_empty_password(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_has_non_empty_password(input));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_has_port
bool Rcpp_ada_has_port(const char* input);
RcppExport SEXP _adaR_Rcpp_ada_has_port(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_has_port(input));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_has_hash
bool Rcpp_ada_has_hash(const char* input);
RcppExport SEXP _adaR_Rcpp_ada_has_hash(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_has_hash(input));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_has_search
bool Rcpp_ada_has_search(const char* input);
RcppExport SEXP _adaR_Rcpp_ada_has_search(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_has_search(input));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_get_href
CharacterVector Rcpp_ada_get_href(CharacterVector input_vec, IntegerVector length_vec);
RcppExport SEXP _adaR_Rcpp_ada_get_href(SEXP input_vecSEXP, SEXP length_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input_vec(input_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type length_vec(length_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_get_href(input_vec, length_vec));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_get_username
CharacterVector Rcpp_ada_get_username(CharacterVector input_vec, IntegerVector length_vec);
RcppExport SEXP _adaR_Rcpp_ada_get_username(SEXP input_vecSEXP, SEXP length_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input_vec(input_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type length_vec(length_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_get_username(input_vec, length_vec));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_get_password
CharacterVector Rcpp_ada_get_password(CharacterVector input_vec, IntegerVector length_vec);
RcppExport SEXP _adaR_Rcpp_ada_get_password(SEXP input_vecSEXP, SEXP length_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input_vec(input_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type length_vec(length_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_get_password(input_vec, length_vec));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_get_port
CharacterVector Rcpp_ada_get_port(CharacterVector input_vec, IntegerVector length_vec);
RcppExport SEXP _adaR_Rcpp_ada_get_port(SEXP input_vecSEXP, SEXP length_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input_vec(input_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type length_vec(length_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_get_port(input_vec, length_vec));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_get_hash
CharacterVector Rcpp_ada_get_hash(CharacterVector input_vec, IntegerVector length_vec);
RcppExport SEXP _adaR_Rcpp_ada_get_hash(SEXP input_vecSEXP, SEXP length_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input_vec(input_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type length_vec(length_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_get_hash(input_vec, length_vec));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_get_host
CharacterVector Rcpp_ada_get_host(CharacterVector input_vec, IntegerVector length_vec);
RcppExport SEXP _adaR_Rcpp_ada_get_host(SEXP input_vecSEXP, SEXP length_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input_vec(input_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type length_vec(length_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_get_host(input_vec, length_vec));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_get_hostname
CharacterVector Rcpp_ada_get_hostname(CharacterVector input_vec, IntegerVector length_vec);
RcppExport SEXP _adaR_Rcpp_ada_get_hostname(SEXP input_vecSEXP, SEXP length_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input_vec(input_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type length_vec(length_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_get_hostname(input_vec, length_vec));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_get_pathname
CharacterVector Rcpp_ada_get_pathname(CharacterVector input_vec, IntegerVector length_vec);
RcppExport SEXP _adaR_Rcpp_ada_get_pathname(SEXP input_vecSEXP, SEXP length_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input_vec(input_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type length_vec(length_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_get_pathname(input_vec, length_vec));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_get_search
CharacterVector Rcpp_ada_get_search(CharacterVector input_vec, IntegerVector length_vec);
RcppExport SEXP _adaR_Rcpp_ada_get_search(SEXP input_vecSEXP, SEXP length_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input_vec(input_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type length_vec(length_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_get_search(input_vec, length_vec));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_ada_get_protocol
CharacterVector Rcpp_ada_get_protocol(CharacterVector input_vec, IntegerVector length_vec);
RcppExport SEXP _adaR_Rcpp_ada_get_protocol(SEXP input_vecSEXP, SEXP length_vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input_vec(input_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type length_vec(length_vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_ada_get_protocol(input_vec, length_vec));
    return rcpp_result_gen;
END_RCPP
}
// url_decode
CharacterVector url_decode(CharacterVector url);
RcppExport SEXP _adaR_url_decode(SEXP urlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type url(urlSEXP);
    rcpp_result_gen = Rcpp::wrap(url_decode(url));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_adaR_Rcpp_ada_parse", (DL_FUNC) &_adaR_Rcpp_ada_parse, 1},
    {"_adaR_Rcpp_ada_has_credentials", (DL_FUNC) &_adaR_Rcpp_ada_has_credentials, 1},
    {"_adaR_Rcpp_ada_has_empty_hostname", (DL_FUNC) &_adaR_Rcpp_ada_has_empty_hostname, 1},
    {"_adaR_Rcpp_ada_has_hostname", (DL_FUNC) &_adaR_Rcpp_ada_has_hostname, 1},
    {"_adaR_Rcpp_ada_has_non_empty_username", (DL_FUNC) &_adaR_Rcpp_ada_has_non_empty_username, 1},
    {"_adaR_Rcpp_ada_has_non_empty_password", (DL_FUNC) &_adaR_Rcpp_ada_has_non_empty_password, 1},
    {"_adaR_Rcpp_ada_has_port", (DL_FUNC) &_adaR_Rcpp_ada_has_port, 1},
    {"_adaR_Rcpp_ada_has_hash", (DL_FUNC) &_adaR_Rcpp_ada_has_hash, 1},
    {"_adaR_Rcpp_ada_has_search", (DL_FUNC) &_adaR_Rcpp_ada_has_search, 1},
    {"_adaR_Rcpp_ada_get_href", (DL_FUNC) &_adaR_Rcpp_ada_get_href, 2},
    {"_adaR_Rcpp_ada_get_username", (DL_FUNC) &_adaR_Rcpp_ada_get_username, 2},
    {"_adaR_Rcpp_ada_get_password", (DL_FUNC) &_adaR_Rcpp_ada_get_password, 2},
    {"_adaR_Rcpp_ada_get_port", (DL_FUNC) &_adaR_Rcpp_ada_get_port, 2},
    {"_adaR_Rcpp_ada_get_hash", (DL_FUNC) &_adaR_Rcpp_ada_get_hash, 2},
    {"_adaR_Rcpp_ada_get_host", (DL_FUNC) &_adaR_Rcpp_ada_get_host, 2},
    {"_adaR_Rcpp_ada_get_hostname", (DL_FUNC) &_adaR_Rcpp_ada_get_hostname, 2},
    {"_adaR_Rcpp_ada_get_pathname", (DL_FUNC) &_adaR_Rcpp_ada_get_pathname, 2},
    {"_adaR_Rcpp_ada_get_search", (DL_FUNC) &_adaR_Rcpp_ada_get_search, 2},
    {"_adaR_Rcpp_ada_get_protocol", (DL_FUNC) &_adaR_Rcpp_ada_get_protocol, 2},
    {"_adaR_url_decode", (DL_FUNC) &_adaR_url_decode, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_adaR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
