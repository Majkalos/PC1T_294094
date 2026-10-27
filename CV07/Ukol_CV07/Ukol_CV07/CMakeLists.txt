# CMakeList.txt : CMake project for Ukol_CV07, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Ukol_CV07 "Ukol_CV07.cpp" "Ukol_CV07.h" "Body2d.cpp" "Body2d.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Ukol_CV07 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
