project(DKU_Goals_Keeper)
set(TARGET FORMS)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

file(GLOB_RECURSE HEADERS "include/*.h")
file(GLOB_RECURSE SOURCES "private/*.cpp")
file(GLOB_RECURSE UINTERFACES "private/*.ui")

add_library(${TARGET} ${SOURCES} ${HEADERS} ${UINTERFACES})

find_package(Qt5 COMPONENTS Widgets REQUIRED)
target_link_libraries(${TARGET} Qt5::Widgets)

set_target_compilation_flags(${TARGET})
