#include <stdio.h>
#include <version.h>
int main() {
    printf("Hello World v%d.%d. Built with CMake.\n", hello_world_cmake_VERSION_MAJOR, hello_world_cmake_VERSION_MINOR);
    return 0;
}
