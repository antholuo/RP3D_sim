cmake_minimum_required(VERSION 3.16)
project(RP3D_sim)

set(CMAKE_CXX_STANDARD 14)

if( WIN32 )
    list ( APPEND CMAKE_PREFIX_PATH "C :\\ Program Files (x86)\\
ReactPhysics3D ")
elseif ( APPLE )
    list ( APPEND CMAKE_PREFIX_PATH "/ usr/ local /lib/ cmake /
ReactPhysics3D ")
endif ()


find_package(ReactPhysics3D REQUIRED)

add_executable(RP3D_sim main.cpp)

target_link_libraries(RP3D_sim ReactPhysics3D::ReactPhysics3D)