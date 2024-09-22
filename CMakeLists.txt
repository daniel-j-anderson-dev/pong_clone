cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 23)

project(pong_test)

find_package(SDL3 REQUIRED)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/Game.cpp
    src/Moving_Object.cpp
    src/Ball.cpp
    src/Paddle.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC include/
)

target_link_libraries(${PROJECT_NAME} PRIVATE SDL3::SDL3)
