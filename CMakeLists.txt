project(sample_project_with_doxygen)

cmake_minimum_required(VERSION 3.13)


# check if "doxygen" command is available
find_package(Doxygen)

if (DOXYGEN_FOUND)
    add_subdirectory(doc)
endif()
