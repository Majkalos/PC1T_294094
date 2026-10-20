# CMakeList.txt : CMake project for Ukol_CV06, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Ukol_CV06 "Ukol_CV06.cpp" "Ukol_CV06.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Ukol_CV06 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
