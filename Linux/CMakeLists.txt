cmake_minimum_required (VERSION 2.8)

project (demo)

aux_source_directory(. PROJECT_SOURCE_DIR)

LINK_DIRECTORIES(./hhclient/)

include_directories (./hhclient/)

add_executable(demo ${PROJECT_SOURCE_DIR})

target_link_libraries(demo
   hhclient
)
