project(DoxygenDocs)

set_directory_properties(PROPERTIES EXCLUDE_FROM_ALL TRUE)

option(DOC_HAVE_DOT "Enable DOT for Visualization" OFF)


set(PRJ_DOXY_PROJECT_NAME "Documentation Title")
set(PRJ_DOXY_INPUT      "\
    \"${CMAKE_SOURCE_DIR}/src\"     \
    \"${CMAKE_SOURCE_DIR}/doc/files\"     \
")
set(PRJ_DOXY_EXCLUDE    "\
    \"${CMAKE_SOURCE_DIR}/src/externals\"   \
")
if (DOC_HAVE_DOT)
    set(PRJ_DOXY_HAVE_DOT "YES")
else()
    set(PRJ_DOXY_HAVE_DOT "NO")
endif()

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


add_custom_target(doc ALL
    COMMAND doxygen
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/doc
    VERBATIM
)