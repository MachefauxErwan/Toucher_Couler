
cmake_minimum_required (VERSION 3.12)

project (MyProject VERSION 1.0.0)

FILE(GLOB all_SRCS ToucherCouler/Sources/*.cpp)
FILE(GLOB all_Inc ToucherCouler/Headers/*.h*)

add_executable(cmake-tutorial ${all_SRCS} ${all_Inc} )

include_directories( ./ToucherCouler/Headers)