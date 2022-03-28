
#include <Rcpp.h>
using namespace Rcpp;
//'
//' Hello to the world!
//'
//' This function returns something
//' @useDynLib rcppTestProject, .registration = TRUE
//' @importFrom Rcpp evalCpp
//' @export
// [[Rcpp::export]]
List rcpp_hello_world() {

    CharacterVector x = CharacterVector::create( "foo", "bar" )  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;

    return z ;
}
