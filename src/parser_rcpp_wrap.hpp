#ifndef PARSER_RCPP_WRAP_HPP
#define PARSER_RCPP_WRAP_HPP

#include "parse_chunk.hpp"
#include "parse_rmd.hpp"

#include <RcppCommon.h>

namespace Rcpp {
  // Chunk
  template <> SEXP wrap(client::ast::chunk const& chunk);
  template <> SEXP wrap(std::vector<client::ast::chunk> const& chunks);
  template <> SEXP wrap(std::vector<client::ast::option> const& opts);

  // rmd
  template <> SEXP wrap(client::ast::heading const& h);
  template <> SEXP wrap(client::ast::line const& line);
  template <> SEXP wrap(client::ast::rmd const& rmd);
}


#endif