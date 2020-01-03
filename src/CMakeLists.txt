set(TARGET ${PROJECT_NAME})

file(GLOB_RECURSE MAINFILE "main.cpp")

add_executable(${TARGET} ${MAINFILE})

target_link_libraries(${TARGET} FORMS)

set_target_compilation_flags(${TARGET})

add_subdirectory(forms)
