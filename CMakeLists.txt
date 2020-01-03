cmake_minimum_required(VERSION 3.5)

project(DKU_Goals_Keeper)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH    ${CMAKE_BINARY_DIR}/bin)

# OS checking
if ( CMAKE_SYSTEM_NAME STREQUAL "Linux" )
    MESSAGE( ">>> OS Linux is used: ${CMAKE_SYSTEM_VERSION}" )
elseif( CMAKE_SYSTEM_NAME STREQUAL "Windows" )
    MESSAGE( ">>> OS Windows is used: ${CMAKE_SYSTEM_VERSION}" )
else()
    MESSAGE( ">>> This project was created for Linux and Windows" )
    MESSAGE( ">>> Current OS: ${CMAKE_SYSTEM_NAME}" )
endif()

# Options
#option(USE_DLT "Enable DLT use" ON)
#option(ENABLE_BUILD_TESTS "Enable build of all tests" OFF)

function(set_target_compilation_flags TARGET)
    # Compile options
    target_compile_options(${TARGET} PRIVATE -Wall -Wextra -Werror -O0)
endfunction()

add_subdirectory(src)
