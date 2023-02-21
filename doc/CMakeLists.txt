
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