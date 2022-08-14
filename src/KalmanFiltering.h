Rcpp::List fKF(arma::mat X, arma::mat A, arma::mat C, arma::mat Q,
               arma::mat R, arma::colvec F_0, arma::mat P_0, bool retLL = false);

Rcpp::List fKS(arma::mat A,
               arma::mat ZTf, arma::mat ZTp,
               Rcpp::NumericVector VTf_v,
               Rcpp::NumericVector VTp_v,
               arma::colvec F_0, arma::mat P_0);

Rcpp::List fKFS(arma::mat X, arma::mat A, arma::mat C, arma::mat Q,
                arma::mat R, arma::colvec F_0, arma::mat P_0, bool retLL = false);
