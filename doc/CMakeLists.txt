
project(Document)

#
# set option
#
option(DOC_HAVE_DOT "Enable DOT for Visualization" OFF)
option(DOC_GEN_LATEX "Enable LaTeX" OFF)

#
# embedded variable 
#
set(PRJ_DOXY_PROJECT_NAME "SKWallet")
set(PRJ_DOXY_INPUT      "\
    \"${CMAKE_SOURCE_DIR}/src\"     \
    \"${CMAKE_SOURCE_DIR}/doc/files\"     \
")
set(PRJ_DOXY_EXCLUDE    "\
    \"${CMAKE_SOURCE_DIR}/external\"   \
")

set(PRJ_DOXY_HAVE_DOT       $<IF:$<BOOL:${DOC_HAVE_DOT}>,"YES","NO")
set(PRJ_DOXY_GENERATE_LATEX $<IF:$<BOOL:${DOC_GEN_LATEX}>,"YES","NO")

#
# file generation
#
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in
    ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
)
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/styles/footer.html
    ${CMAKE_CURRENT_BINARY_DIR}/styles/footer.html
    COPYONLY
)
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/styles/header.html
    ${CMAKE_CURRENT_BINARY_DIR}/styles/header.html
    COPYONLY
)
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/styles/style.css
    ${CMAKE_CURRENT_BINARY_DIR}/styles/style.css
    COPYONLY
)
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/styles/xstyle.css
    ${CMAKE_CURRENT_BINARY_DIR}/styles/xstyle.css
    COPYONLY
)

#
# add command (--target doc)
#
add_custom_target(doc
    COMMAND doxygen
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/doc
    VERBATIM
)

set_target_properties(doc PROPERTIES
    EXCLUDE_FROM_ALL TRUE                   # no build by default
    EXCLUDE_FROM_DEFAULT_BUILD TRUE         # no build (Windows)
)