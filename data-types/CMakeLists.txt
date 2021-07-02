cmake_minimum_required( VERSION 3.5.1 )

project( data-types LANGUAGES C CXX )

set( CMAKE_CXX_STANDARD 14 )

add_executable( data-types
  data-types.cpp
)

# target_link_libraries( ${PROJECT}
#   chrono
# )