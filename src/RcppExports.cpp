// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// G_update
List G_update(arma::vec y, arma::mat X, arma::mat beta, arma::vec mu, arma::vec tau);
RcppExport SEXP DLSBP_G_update(SEXP ySEXP, SEXP XSEXP, SEXP betaSEXP, SEXP muSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(G_update(y, X, beta, mu, tau));
    return rcpp_result_gen;
END_RCPP
}
// Expectation_step
List Expectation_step(arma::vec y, arma::mat X, arma::mat beta, arma::vec mu, arma::vec tau);
RcppExport SEXP DLSBP_Expectation_step(SEXP ySEXP, SEXP XSEXP, SEXP betaSEXP, SEXP muSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(Expectation_step(y, X, beta, mu, tau));
    return rcpp_result_gen;
END_RCPP
}
// Variational_step
List Variational_step(arma::mat rho, arma::vec y, arma::mat X, arma::mat beta, arma::vec mu, arma::vec tau_tilde, arma::vec tau, arma::vec ltau);
RcppExport SEXP DLSBP_Variational_step(SEXP rhoSEXP, SEXP ySEXP, SEXP XSEXP, SEXP betaSEXP, SEXP muSEXP, SEXP tau_tildeSEXP, SEXP tauSEXP, SEXP ltauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau_tilde(tau_tildeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ltau(ltauSEXP);
    rcpp_result_gen = Rcpp::wrap(Variational_step(rho, y, X, beta, mu, tau_tilde, tau, ltau));
    return rcpp_result_gen;
END_RCPP
}
// prediction
arma::vec prediction(arma::mat X, arma::mat beta, arma::vec mu, arma::vec tau);
RcppExport SEXP DLSBP_prediction(SEXP XSEXP, SEXP betaSEXP, SEXP muSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(prediction(X, beta, mu, tau));
    return rcpp_result_gen;
END_RCPP
}