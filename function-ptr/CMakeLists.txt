cmake_minimum_required( VERSION 3.5.1 )

project( chrono-app LANGUAGES C CXX )

set( CMAKE_CXX_STANDARD 14 )

add_executable( chrono-app
  main.cpp
)

# target_link_libraries( ${PROJECT}
#   chrono
# )