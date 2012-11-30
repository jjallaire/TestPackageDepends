

// [[Rcpp::depends(TestPackageDepends)]]

#include <TestPackageDepends.h>

#include <TestPackageDependsForwarder.h>

// [[Rcpp::export]]
void callFunction() {
  TestPackageDepends::aFunction();
}
