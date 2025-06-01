cmake_minimum_required(VERSION 3.10)
project(MyAntlrProject)

set(CMAKE_CXX_STANDARD 17)

# Путь до ANTLR4 runtime
set(ANTLR4_RUNTIME_DIR "C:/Users/tooly/Desktop/Antlr_Pascal/antlr4/dist/bin")

# Добавь include путь к antlr4-runtime.h
include_directories(
    "C:/Users/tooly/Desktop/Antlr_Pascal/antlr4/dist/include/antlr4-runtime"
    ${CMAKE_CURRENT_SOURCE_DIR}/parser
)

# Добавь путь к библиотеке .lib
link_directories(${ANTLR4_RUNTIME_DIR})

# Используем статическую библиотеку
add_definitions(-DANTLR4_STATIC)

# Файлы парсера и посетителя
file(GLOB PARSER_SRC 
    "parser/*.cpp"
    "build/hhh.cpp"
)

# Основной исполняемый файл
add_executable(main main.cpp ${PARSER_SRC})

# Линковка с ANTLR4 runtime (статическая версия)
target_link_libraries(main "C:/Users/tooly/Desktop/Antlr_Pascal/antlr4/dist/lib/antlr4-runtime.lib")