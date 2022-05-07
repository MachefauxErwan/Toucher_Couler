cmake_minimum_required (VERSION 3.12)

set( GLFW_BUILD_DOCS OFF CACHE BOOL  "GLFW lib only" )
set( GLFW_INSTALL OFF CACHE BOOL  "GLFW lib only" )
set(ProjectName ToucherCouler)

project (${ProjectName} VERSION 1.0.0)

include_directories( ./ToucherCouler/Headers)
FILE(GLOB all_SRCS ToucherCouler/Sources/*.cpp)
FILE(GLOB all_Inc ToucherCouler/Headers/*.h*)

find_package( OpenGL REQUIRED )
include_directories( ${OPENGL_INCLUDE_DIRS} )
add_subdirectory( ./Librairies/glfw-3.3.7 )

add_executable(${ProjectName} ${all_SRCS} ${all_Inc})

target_link_libraries( ${ProjectName} ${OPENGL_LIBRARIES} glfw )


install(TARGETS ${ProjectName} DESTINATION bin)
