cmake_minimum_required(VERSION 3.23)
project(w7)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(lab)

add_executable(w7
        File.cpp
        File.h
        ShoppingList.cpp
        ShoppingList.h
        shoppingListApp.cpp
        ShoppingRec.cpp
        ShoppingRec.h
        Utils.cpp
        Utils.h
        )
