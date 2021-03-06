% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/LSBP.R
\name{control_VB}
\alias{control_VB}
\title{Control parameters for the VB algorithm}
\usage{
control_VB(maxiter = 10000, tol = 0.01, method_init = "cluster")
}
\arguments{
\item{maxiter}{An integer indicating the maximum number of iterations for the VB algorithm.}

\item{tol}{A real number controlling the convergence of the algorithm. The \code{\link[LSBP]{LSBP_VB}} algorithm stops when the difference between consecutive values of the evidence lower bound (ELBO) is smaller than \code{tol}.}

\item{method_init}{The initialization method. The default \code{method_init='cluster'} partitions the covariates  using the \code{\link[cluster]{clara}} clustering algorithm. Another available option is \code{method_init='random'}.}
}
\value{
The inputs are converted into a \code{list}. Missing arguments are filled with default values.
}
\description{
The \code{control_VB} function can be used for specifying the technical settings (i.e. the maximum number of iterations, the tolerance level, and the initialization method), of the \code{\link[LSBP]{LSBP_VB}} main function.
}
