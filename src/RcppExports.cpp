// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// find_splits
IntegerVector find_splits(NumericVector lengths, int n);
RcppExport SEXP _transformr_find_splits(SEXP lengthsSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(find_splits(lengths, n));
    return rcpp_result_gen;
END_RCPP
}
// insert_points
List insert_points(NumericVector x, NumericVector y, IntegerVector splits, int n);
RcppExport SEXP _transformr_insert_points(SEXP xSEXP, SEXP ySEXP, SEXP splitsSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type splits(splitsSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(insert_points(x, y, splits, n));
    return rcpp_result_gen;
END_RCPP
}
// rotate
int rotate(NumericVector poly_x, NumericVector poly_y, NumericVector ref_x, NumericVector ref_y);
RcppExport SEXP _transformr_rotate(SEXP poly_xSEXP, SEXP poly_ySEXP, SEXP ref_xSEXP, SEXP ref_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type poly_x(poly_xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type poly_y(poly_ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ref_x(ref_xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ref_y(ref_ySEXP);
    rcpp_result_gen = Rcpp::wrap(rotate(poly_x, poly_y, ref_x, ref_y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_transformr_find_splits", (DL_FUNC) &_transformr_find_splits, 2},
    {"_transformr_insert_points", (DL_FUNC) &_transformr_insert_points, 4},
    {"_transformr_rotate", (DL_FUNC) &_transformr_rotate, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_transformr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}