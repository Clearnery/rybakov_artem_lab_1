cmake_minimum_required(VERSION 3.14)
project(LAB_2_1)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включаем Google Test как подмодуль
add_subdirectory(googletest)

# Подключаем заголовочные файлы
include_directories(include)

# Собираем основное приложение
add_executable(main_app
    src/main.cpp
    src/Circle.cpp
    src/Rectangle.cpp
    src/Cube.cpp
    src/Sphere.cpp
)

# Подключаем папку tests как подпроект
add_subdirectory(tests)
