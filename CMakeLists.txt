cmake_minimum_required(VERSION 3.28)
project(robot_client LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --- Dependencies ----------------------------------------------------------
# When using Visual Studio 2022 + vcpkg, the toolchain is picked up
# automatically via the environment variable VCPKG_ROOT or the VS integration.

find_package(Qt6 6.7 COMPONENTS Widgets REQUIRED)
find_package(spdlog CONFIG REQUIRED)

# --- Target ----------------------------------------------------------------
add_executable(robot_client
    src/main.cpp
)

# Link Qt widgets and header‑only spdlog
qt_standard_project_setup(TARGETS robot_client)

target_link_libraries(robot_client
    PRIVATE
        Qt6::Widgets
        spdlog::spdlog_header_only
)
