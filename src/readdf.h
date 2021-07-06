
#ifndef READDF_H
#define READDF_H

#include <Rcpp.h>

Rcpp::DataFrame readDF(
    Rcpp::String path,
    SEXP columnsRequired,
    bool headerOnly,
    bool requiresMissings = false);

#endif // READDF_H
