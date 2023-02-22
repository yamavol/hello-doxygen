
project(HelloDoxygen)

#
# add command (--target doc)
#
add_custom_target(doc
    COMMAND doxygen
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    VERBATIM
)

set_target_properties(doc PROPERTIES
    EXCLUDE_FROM_ALL TRUE                   # no build by default
    EXCLUDE_FROM_DEFAULT_BUILD TRUE         # no build (Windows)
)

#
# add command (--target pdf)
#
add_custom_target(pdf
    COMMAND doxygen
    COMMAND cd build/latex
    COMMAND (call make.bat)     # msbuild aborts on error, so start it this way
    COMMAND dvipdfmx refman.dvi  
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    VERBATIM
)

set_target_properties(pdf PROPERTIES
    EXCLUDE_FROM_ALL TRUE                   # no build by default
    EXCLUDE_FROM_DEFAULT_BUILD TRUE         # no build (Windows)
)