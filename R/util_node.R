#' @export
rmd_node_sections = function(ast, levels = 1:6, drop_na = FALSE) {
  checkmate::assert_class(ast, "rmd_ast")
  checkmate::assert_integer(levels, lower = 1, upper = 6, sorted = TRUE,
                            min.len = 1, max.len = 6, unique = TRUE)

  sections = list()
  labels = rep(NA_character_, 6)
  names(labels) = paste0("sec_h", 1:6)

  min_level = 6
  max_level = 1

  for(j in seq_along(ast)) {
    x = ast[[j]]
    if (inherits(x, "rmd_heading")) {
      labels[x$level:6] = NA_character_
      labels[x$level] = x$name

      max_level = max(max_level, x$level)
      min_level = min(min_level, x$level)
    }

    sections[[length(sections)+1]] = labels
  }

  # Handle the case where there are no headings
  if (min_level == max(levels) & max_level == min(levels))
    min_level = max_level = 0

  levels = levels[levels %in% (min_level:max_level)]

  sections = purrr::map(sections, ~ .x[levels])

  if (drop_na)
    sections = purrr::map(sections, ~ .x[!is.na(.x)])

  sections
}

#' @export
rmd_node_label = function(obj) {
  UseMethod("rmd_node_label")
}

#' @export
rmd_node_label.rmd_ast = function(ast) {
  purrr::map_chr(ast, rmd_node_label)
}

#' @export
rmd_node_label.default = function(obj) {
  NA_character_
}

#' @export
rmd_node_label.rmd_chunk = function(obj) {
  name = obj[["name"]]

  if (name == "" & !is.null(obj[["options"]][["label"]]))
    name = obj[["options"]][["label"]]

  if (is.null(name))
    name = NA_character_

  name
}



#' @export
rmd_node_type = function(obj) {
  UseMethod("rmd_node_type")
}

#' @export
rmd_node_type.rmd_ast = function(ast) {
  purrr::map_chr(ast, rmd_node_type)
}

#' @export
rmd_node_type.default = function(obj) {
  class(obj)
}


#' @export
rmd_node_length = function(obj) {
  UseMethod("rmd_node_length")
}

#' @export
rmd_node_length.rmd_ast = function(ast) {
  purrr::map_int(ast, rmd_node_length)
}

#' @export
rmd_node_length.rmd_chunk = function(obj) {
  length(obj$code)
}

#' @export
rmd_node_length.rmd_markdown = function(obj) {
  length(obj)
}

#' @export
rmd_node_length.rmd_yaml = function(obj) {
  length(obj)
}

#' @export
rmd_node_length.rmd_yaml_list = function(obj) {
  length(obj)
}

#' @export
rmd_node_length.default = function(obj) {
  NA_integer_
}


#' @export
rmd_node_content = function(node) {
  UseMethod("rmd_node_content")
}

#' @export
rmd_node_content.default = function(node) {
  NA_character_
}

#' @export
rmd_node_content.rmd_ast = function(ast) {
  purrr::map_chr(ast, rmd_node_content)
}

#' @export
rmd_node_content.rmd_tibble = function(tbl) {
  purrr::map_chr(tbl$ast, rmd_node_content)
}

#' @export
rmd_node_content.rmd_chunk = function(node) {
  paste(node$code, collapse="\n")
}

#' @export
rmd_node_content.rmd_markdown = function(node) {
  paste(node, collapse="\n")
}









#' @export
rmd_node_attr = function(node, attr) {
  UseMethod("rmd_node_attr")
}

#' @export
rmd_node_attr.default = function(node, attr) {
  if (is.list(node))
    node[[attr]]
  else
    NULL
}

#' @export
rmd_node_attr.rmd_ast = function(ast, attr) {
  purrr::map(ast, rmd_node_attr, attr = attr)
}



#' @export
rmd_node_engine = function(obj) {
  rmd_node_attr(obj, "engine")
}

#' @export
rmd_node_options = function(obj) {
  rmd_node_attr(obj, "options")
}

#' @export
rmd_node_code = function(obj) {
  rmd_node_attr(obj, "code")
}



