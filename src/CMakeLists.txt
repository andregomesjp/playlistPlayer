set(SOURCES
    main.cpp
    ${VIEW_SRC}/PlaylistListView.cpp
    ${MODEL_SRC}/PlaylistModel.cpp
    ${CONTROLLER_SRC}/PlaylistListController.cpp
    ${FACADE_SRC}/AppFacade.cpp
)

set(HEADERS
    ${VIEW_INC}/PlaylistListView.h
    ${MODEL_INC}/PlaylistModel.h
    ${CONTROLLER_INC}/PlaylistListController.h
    ${FACADE_INC}/AppFacade.h
)

set(
    EXECUTABLE_OUTPUT_PATH ${APP_PATH}
)

include_directories(
    ${SRC_DIR}
    ${VIEW_INC}
    ${MODEL_INC}
    ${CONTROLLER_INC}
    ${FACADE_INC}
)
add_definitions(-DRES_DIR="${APP_RES_DIR}")
add_executable(${CMAKE_PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
)

#if unit tests

target_link_libraries(${CMAKE_PROJECT_NAME} Qt5::Widgets Qt5::Core Qt5::Gui Qt5::Sql Qt5::Network)
