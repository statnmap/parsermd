#' @export
rmd_subset = function(obj, sec_refs = NULL, type_refs = NULL, name_refs = NULL, exclude = FALSE) {
  UseMethod("rmd_subset")
}

#' @export
rmd_subset.default = function(obj, ...) {
  stop("Unable to subset an object with class: ", class(obj))
}

#' @export
rmd_subset.rmd_ast = function(ast, sec_refs = NULL, type_refs = NULL, name_refs = NULL, exclude = FALSE) {
  subset = comb_subset(ast, sec_refs, type_refs, name_refs, combine = `|`, inc_parents = !exclude)

  if (exclude)
    subset = !subset

  ast = ast[subset]
  class(ast) = c("rmd_ast", "list")

  ast
}

#' @export
rmd_subset.rmd_tibble = function(df, sec_refs = NULL, type_refs = NULL, name_refs = NULL, exclude = FALSE) {
  sec_cols = names(df)[grepl("^sec_h", names(df))]
  bad_cols = sec_cols[!sec_cols %in% paste0("sec_h", 1:6)]

  if (length(bad_cols) != 0)
      stop("The following columns must be renamed: ", bad_cols, call. = FALSE)

  subset = comb_subset(df$ast, sec_refs, type_refs, name_refs, combine = `|`, inc_parents = !exclude)

  if (exclude)
    subset = !subset

  df = df[subset,]

  df = dplyr:: bind_cols(
    dplyr::bind_rows(rmd_node_sections(df$ast)),  # add new sec_h* columns
    dplyr::select(df, -dplyr::starts_with("sec_h")) # drop old sec_h* columns
  )
  class(df) = c("rmd_tibble", class(df))

  df
}


