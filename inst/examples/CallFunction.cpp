
// [[Rcpp::depends(TestPackageDepends)]]

#include <TestPackageDepends.h>

// [[Rcpp::export]]
void callFunction() {
  TestPackageDepends::aFunction();
}
