# CMakeList.txt : CMake project for Ukol_CV04, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Ukol_CV04 "Ukol_CV04.cpp" "Ukol_CV04.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Ukol_CV04 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
