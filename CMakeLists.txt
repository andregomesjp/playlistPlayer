cmake_minimum_required(VERSION 3.1.0)

project(playListPlayer)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Gui REQUIRED)
find_package(Qt5 COMPONENTS Sql REQUIRED)
find_package(Qt5 COMPONENTS Network REQUIRED)

set(SRC_DIR ${PROJECT_SOURCE_DIR}/src/)
set(VIEW_INC ${PROJECT_SOURCE_DIR}/src/view/inc)
set(VIEW_SRC ${PROJECT_SOURCE_DIR}/src/view/src)
set(MODEL_INC ${PROJECT_SOURCE_DIR}/src/model/inc)
set(MODEL_SRC ${PROJECT_SOURCE_DIR}/src/model/src)
set(CONTROLLER_INC ${PROJECT_SOURCE_DIR}/src/controller/inc)
set(CONTROLLER_SRC ${PROJECT_SOURCE_DIR}/src/controller/src)
set(FACADE_INC ${PROJECT_SOURCE_DIR}/src/facade/inc)
set(FACADE_SRC ${PROJECT_SOURCE_DIR}/src/facade/src)

set(APP_RES_DIR ${PROJECT_SOURCE_DIR}/resources)
set(APP_PATH ${PROJECT_SOURCE_DIR}/build/app/)
set(EXECUTABLE_OUTPUT_PATH ${APP_PATH})

add_subdirectory(src)
