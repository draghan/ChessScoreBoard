# #### common ####
cmake_minimum_required(VERSION 3.12)
project(ChessScoreBoard)

set(CMAKE_CXX_STANDARD 17)

# #### linux ####
#set(wxWidgets_ROOT_DIR /home/draghan/programming/wxW/wxWidgets-3.1.2/)
#set(wxWidgets_CONFIGURATION gtk)
#find_package(wxWidgets COMPONENTS core base REQUIRED)
#include(${wxWidgets_USE_FILE})
#set(additionalLibraries)

# #### windows ####
set(wxWidgets_ROOT_DIR C:/wxWidgets-3.1.2)
set(wxWidgets_CONFIGURATION msw)
find_package(wxWidgets COMPONENTS advanced core base REQUIRED)
include(${wxWidgets_USE_FILE})
set(additionalLibraries uxtheme winspool oleacc)
add_link_options(-mwindows)

# #### common ####

set(SOURCE_FILES main.cpp
        Application.cpp
        Application.hpp
        Logic/Score.cpp
        Logic/Score.hpp
        Frames/generated.cpp
        Frames/generated.h
        Frames/ChessScoreBoardMainFrame.cpp
        Frames/ChessScoreBoardMainFrame.h
        Logic/ScoreBoard.cpp
        Logic/ScoreBoard.hpp
        Logic/ValueConfiguration.cpp
        Logic/ValueConfiguration.hpp
        utils.cpp
        utils.hpp)

add_executable(ChessScoreBoard ${SOURCE_FILES})

target_link_libraries(ChessScoreBoard ${wxWidgets_LIBRARIES} ${additionalLibraries})