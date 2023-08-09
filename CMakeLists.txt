cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

# PROJECT NAME
project(pong_test)

# SOURCE CODE
if(APPLE)
    if(CMAKE_SYSTEM_PROCESSOR STREQUAL "arm64")
        set(MY_SOURCE_DIR_ARM "/Users/daniel/Code/C_C++/pong_clone/src")
        set(MY_SOURCE_DIR ${MY_SOURCE_DIR_ARM})
        
        # LIBRARY/INCLUDE DIRECTORIES
        # SDL3
        set(SDL_LIBRARY "/Users/daniel/Code/libraries/SDL/build/libSDL3.dylib")
        set(SDL_INCLUDE_DIR "/Users/daniel/Code/libraries/SDL/include")
    else()
        message(FATAL_ERROR "Unsupported Apple architecture: ${CMAKE_SYSTEM_PROCESSOR}")
    endif()
elseif(WIN32)
    set(CMAKE_SOURCE_DIR "E:/src/c++/pong_clone/src")
    set(MY_SOURCE_DIR ${MY_SOURCE_DIR_WINDOWS})
    
    # LIBRARY/INCLUDE DIRECTORIES
    # SDL3
    set(SDL_LIBRARY "C:/Program Files (x86)/SDL3/bin/SDL3.dll")
    set(SDL_INCLUDE_DIR "C:/Program Files (x86)/SDL3/include")
else()
    message(FATAL_ERROR "This project only supports Apple ARM or Windows platforms.")
endif()

message(STATUS "Using source directory: ${MY_SOURCE_DIR}")
add_executable(${PROJECT_NAME}
    src/main.cpp
    src/Game.cpp
    src/Moving_Object.cpp
        src/Ball.cpp
        src/Paddle.cpp
    # ADD NEW .cpp FILES HERE
)

# to add more
# LIBRARY NAME
# set(NAME_LIBRARY "C:/Program Files (x86)/library/lib.dll")
# set(NAME_INCLUDE_DIR "C:/Program Files (x86)/SDL3/include")

# allow compiler to see the library header files
target_include_directories(${PROJECT_NAME}
    PUBLIC include/
    PUBLIC ${SDL_INCLUDE_DIR}
)

# FOR MINGW32 
if(WIN32)
    target_link_libraries(${PROJECT_NAME} PUBLIC ${SDL_LIBRARY} mingw32)
elseif(APPLE)
    if(CMAKE_SYSTEM_PROCESSOR STREQUAL "arm64")
        target_link_libraries(${PROJECT_NAME} PUBLIC ${SDL_LIBRARY})
    else()
        message(FATAL_ERROR "Unsupported Apple architecture: ${CMAKE_SYSTEM_PROCESSOR}")
    endif()
endif()
# target_link_libraries(menu_test PUBLIC ${SDL_LIBRARY_DIR} PUBLIC ${other_lib_dir} mingw32)