cmake_minimum_required(VERSION 3.10)

# set the project name
project(hello_world_cmake VERSION 1.0)

# let's template version file
configure_file(version.h.in version.h)

# add the executable
add_executable(hello_world_cmake main.c)

# since version.h would be generated in the same place as binary
# we have to point to headers there
target_include_directories(hello_world_cmake PUBLIC "${PROJECT_BINARY_DIR}")

#install executable on image
install(TARGETS hello_world_cmake DESTINATION bin)
