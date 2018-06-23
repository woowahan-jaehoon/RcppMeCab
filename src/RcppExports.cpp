// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// posLoopRcpp
List posLoopRcpp(std::vector< std::string > text, std::string sys_dic, std::string user_dic);
RcppExport SEXP _RcppMeCab_posLoopRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posLoopRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP
}
// posLoopJoinRcpp
List posLoopJoinRcpp(std::vector< std::string > text, std::string sys_dic, std::string user_dic);
RcppExport SEXP _RcppMeCab_posLoopJoinRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posLoopJoinRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP
}
// posParallelJoinRcpp
List posParallelJoinRcpp(std::vector<std::string> text, std::string sys_dic, std::string user_dic);
RcppExport SEXP _RcppMeCab_posParallelJoinRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posParallelJoinRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP
}
// posParallelRcpp
List posParallelRcpp(std::vector<std::string> text, std::string sys_dic, std::string user_dic);
RcppExport SEXP _RcppMeCab_posParallelRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posParallelRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP
}
// posRcpp
List posRcpp(std::string text, std::string sys_dic, std::string user_dic);
RcppExport SEXP _RcppMeCab_posRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP
}
// posJoinRcpp
List posJoinRcpp(std::string text, std::string sys_dic, std::string user_dic);
RcppExport SEXP _RcppMeCab_posJoinRcpp(SEXP textSEXP, SEXP sys_dicSEXP, SEXP user_dicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    Rcpp::traits::input_parameter< std::string >::type sys_dic(sys_dicSEXP);
    Rcpp::traits::input_parameter< std::string >::type user_dic(user_dicSEXP);
    rcpp_result_gen = Rcpp::wrap(posJoinRcpp(text, sys_dic, user_dic));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppMeCab_posLoopRcpp", (DL_FUNC) &_RcppMeCab_posLoopRcpp, 3},
    {"_RcppMeCab_posLoopJoinRcpp", (DL_FUNC) &_RcppMeCab_posLoopJoinRcpp, 3},
    {"_RcppMeCab_posParallelJoinRcpp", (DL_FUNC) &_RcppMeCab_posParallelJoinRcpp, 3},
    {"_RcppMeCab_posParallelRcpp", (DL_FUNC) &_RcppMeCab_posParallelRcpp, 3},
    {"_RcppMeCab_posRcpp", (DL_FUNC) &_RcppMeCab_posRcpp, 3},
    {"_RcppMeCab_posJoinRcpp", (DL_FUNC) &_RcppMeCab_posJoinRcpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppMeCab(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
