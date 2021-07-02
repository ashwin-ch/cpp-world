cmake_minimum_required( VERSION 3.5.1 )

project( inversion LANGUAGES C CXX )

set( CMAKE_CXX_STANDARD 14 )

add_executable( inversion
  inversion.cpp
)

# target_link_libraries( ${PROJECT}
#   chrono
# )