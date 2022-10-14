cmake_minimum_required(VERSION 3.7)
# all features used in my script is supported as of 3.7


if (${CMAKE_VERSION} VERSION_LESS 3.24)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
else()
    cmake_policy(VERSION 3.24)
endif()


project(LiquidGrowth VERSION 1.0.0
                     DESCRIPTION "Here is a description"
                     LANGUAGES CXX)  



add_executable(calculatorApp main.cpp)



# FIND_PACKAGE(Boost REQUIRED)
# FIND_PACKAGE(Boost COMPONENTS filesystem REQUIRED)
# target_link_libraries(calculatorApp ${Boost_FILESYSTEM_LIBRARY})
