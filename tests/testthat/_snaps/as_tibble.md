# as_tibble - minimal.Rmd

    # A tibble: 12 x 5
       sec_h1 sec_h2          type          name              ast           
       <chr>  <chr>           <chr>         <chr>             <rmd_ast>     
     1 <NA>   <NA>            rmd_yaml_list  <NA>             <yaml>        
     2 test   <NA>            rmd_heading   "test"            <heading [h1]>
     3 test   <NA>            rmd_chunk     "setup"           <chunk [r]>   
     4 hello  <NA>            rmd_heading   "hello"           <heading [h1]>
     5 hello  R Markdown      rmd_heading   "R Markdown"      <heading [h2]>
     6 hello  R Markdown      rmd_markdown   <NA>             <markdown [4]>
     7 hello  R Markdown      rmd_chunk     "cars"            <chunk [r]>   
     8 hello  R Markdown      rmd_chunk     ""                <chunk [r]>   
     9 hello  Including Plots rmd_heading   "Including Plots" <heading [h2]>
    10 hello  Including Plots rmd_markdown   <NA>             <markdown [2]>
    11 hello  Including Plots rmd_chunk     "pressure"        <chunk [r]>   
    12 hello  Including Plots rmd_markdown   <NA>             <markdown [1]>

# as_tibble - hw01-template.Rmd

    # A tibble: 21 x 5
       sec_h3        sec_h4   type          name          ast           
       <chr>         <chr>    <chr>         <chr>         <rmd_ast>     
     1 <NA>          <NA>     rmd_yaml_list <NA>          <yaml>        
     2 Load packages <NA>     rmd_heading   Load packages <heading [h3]>
     3 Load packages <NA>     rmd_chunk     load-packages <chunk [r]>   
     4 Exercise 1    <NA>     rmd_heading   Exercise 1    <heading [h3]>
     5 Exercise 1    <NA>     rmd_markdown  <NA>          <markdown [2]>
     6 Exercise 1    Solution rmd_heading   Solution      <heading [h4]>
     7 Exercise 1    Solution rmd_markdown  <NA>          <markdown [2]>
     8 Exercise 2    <NA>     rmd_heading   Exercise 2    <heading [h3]>
     9 Exercise 2    <NA>     rmd_markdown  <NA>          <markdown [2]>
    10 Exercise 2    Solution rmd_heading   Solution      <heading [h4]>
    # ... with 11 more rows

# as_tibble - hw01-student.Rmd

    # A tibble: 19 x 5
       sec_h3        sec_h4   type          name          ast           
       <chr>         <chr>    <chr>         <chr>         <rmd_ast>     
     1 <NA>          <NA>     rmd_yaml_list <NA>          <yaml>        
     2 Load packages <NA>     rmd_heading   Load packages <heading [h3]>
     3 Load packages <NA>     rmd_chunk     load-packages <chunk [r]>   
     4 Exercise 1    <NA>     rmd_heading   Exercise 1    <heading [h3]>
     5 Exercise 1    <NA>     rmd_markdown  <NA>          <markdown [2]>
     6 Exercise 1    Solution rmd_heading   Solution      <heading [h4]>
     7 Exercise 1    Solution rmd_markdown  <NA>          <markdown [5]>
     8 Exercise 2    <NA>     rmd_heading   Exercise 2    <heading [h3]>
     9 Exercise 2    <NA>     rmd_markdown  <NA>          <markdown [2]>
    10 Exercise 2    Solution rmd_heading   Solution      <heading [h4]>
    11 Exercise 2    Solution rmd_markdown  <NA>          <markdown [2]>
    12 Exercise 2    Solution rmd_chunk     plot-dino     <chunk [r]>   
    13 Exercise 2    Solution rmd_markdown  <NA>          <markdown [2]>
    14 Exercise 2    Solution rmd_chunk     cor-dino      <chunk [r]>   
    15 Exercise 3    <NA>     rmd_heading   Exercise 3    <heading [h3]>
    16 Exercise 3    <NA>     rmd_markdown  <NA>          <markdown [2]>
    17 Exercise 3    Solution rmd_heading   Solution      <heading [h4]>
    18 Exercise 3    Solution rmd_chunk     plot-star     <chunk [r]>   
    19 Exercise 3    Solution rmd_chunk     cor-star      <chunk [r]>   

# as_tibble - empty_sections.Rmd

    # A tibble: 5 x 5
      sec_h1 sec_h2 type          name  ast           
      <chr>  <chr>  <chr>         <chr> <rmd_ast>     
    1 <NA>   <NA>   rmd_yaml_list <NA>  <yaml>        
    2 H1-1   <NA>   rmd_heading   H1-1  <heading [h1]>
    3 H1-1   H2-1   rmd_heading   H2-1  <heading [h2]>
    4 H1-1   H2-2   rmd_heading   H2-2  <heading [h2]>
    5 H1-2   <NA>   rmd_heading   H1-2  <heading [h1]>

# as_tibble - reverse_sections.Rmd

    # A tibble: 5 x 6
      sec_h1 sec_h2 sec_h3      type          name        ast           
      <chr>  <chr>  <chr>       <chr>         <chr>       <rmd_ast>     
    1 <NA>   <NA>   <NA>        rmd_yaml_list <NA>        <yaml>        
    2 <NA>   <NA>   H3          rmd_heading   H3          <heading [h3]>
    3 <NA>   H2     <NA>        rmd_heading   H2          <heading [h2]>
    4 <NA>   H2     H3 - Part 2 rmd_heading   H3 - Part 2 <heading [h3]>
    5 H1     <NA>   <NA>        rmd_heading   H1          <heading [h1]>
