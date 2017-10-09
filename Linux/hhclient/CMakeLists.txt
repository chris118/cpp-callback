cmake_minimum_required (VERSION 2.8)

project (hhclient)

aux_source_directory(. PROJECT_SOURCE_DIR)

LINK_DIRECTORIES(./)

include_directories (./)

ADD_LIBRARY ( hhclient SHARED ${PROJECT_SOURCE_DIR})

target_link_libraries(hhclient
)
