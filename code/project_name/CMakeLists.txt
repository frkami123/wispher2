# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.28)

onyx_add_target(${projectName}
    NO_EDITOR_TARGET
    NAMESPACE "${projectName}"
    TARGET_TYPE "EXECUTABLE"
)