// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// parse_rmd_cpp
Rcpp::List parse_rmd_cpp(std::string const& str, bool allow_incomplete);
RcppExport SEXP _parsermd_parse_rmd_cpp(SEXP strSEXP, SEXP allow_incompleteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type str(strSEXP);
    Rcpp::traits::input_parameter< bool >::type allow_incomplete(allow_incompleteSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_rmd_cpp(str, allow_incomplete));
    return rcpp_result_gen;
END_RCPP
}
// check_yaml_parser
Rcpp::CharacterVector check_yaml_parser(std::string const& str);
RcppExport SEXP _parsermd_check_yaml_parser(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(check_yaml_parser(str));
    return rcpp_result_gen;
END_RCPP
}
// check_chunk_parser
Rcpp::List check_chunk_parser(std::string const& str);
RcppExport SEXP _parsermd_check_chunk_parser(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(check_chunk_parser(str));
    return rcpp_result_gen;
END_RCPP
}
// check_multi_chunk_parser
Rcpp::List check_multi_chunk_parser(std::string const& str, bool allow_incomplete);
RcppExport SEXP _parsermd_check_multi_chunk_parser(SEXP strSEXP, SEXP allow_incompleteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type str(strSEXP);
    Rcpp::traits::input_parameter< bool >::type allow_incomplete(allow_incompleteSEXP);
    rcpp_result_gen = Rcpp::wrap(check_multi_chunk_parser(str, allow_incomplete));
    return rcpp_result_gen;
END_RCPP
}
// check_markdown_parser
Rcpp::List check_markdown_parser(std::string const& str);
RcppExport SEXP _parsermd_check_markdown_parser(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(check_markdown_parser(str));
    return rcpp_result_gen;
END_RCPP
}
// check_markdown_heading_parser
Rcpp::List check_markdown_heading_parser(std::string const& str);
RcppExport SEXP _parsermd_check_markdown_heading_parser(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(check_markdown_heading_parser(str));
    return rcpp_result_gen;
END_RCPP
}
// check_option_parser
Rcpp::List check_option_parser(std::string const& str);
RcppExport SEXP _parsermd_check_option_parser(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(check_option_parser(str));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_parsermd_parse_rmd_cpp", (DL_FUNC) &_parsermd_parse_rmd_cpp, 2},
    {"_parsermd_check_yaml_parser", (DL_FUNC) &_parsermd_check_yaml_parser, 1},
    {"_parsermd_check_chunk_parser", (DL_FUNC) &_parsermd_check_chunk_parser, 1},
    {"_parsermd_check_multi_chunk_parser", (DL_FUNC) &_parsermd_check_multi_chunk_parser, 2},
    {"_parsermd_check_markdown_parser", (DL_FUNC) &_parsermd_check_markdown_parser, 1},
    {"_parsermd_check_markdown_heading_parser", (DL_FUNC) &_parsermd_check_markdown_heading_parser, 1},
    {"_parsermd_check_option_parser", (DL_FUNC) &_parsermd_check_option_parser, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_parsermd(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}