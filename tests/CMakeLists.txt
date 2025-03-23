# Указываем, что это отдельный проект (опционально)
project(LAB_2_1_Tests)

# Подключаем заголовочные файлы
include_directories(${CMAKE_SOURCE_DIR}/include)

# Собираем тесты
add_executable(tests
    tests.cpp
    ${CMAKE_SOURCE_DIR}/src/Circle.cpp
    ${CMAKE_SOURCE_DIR}/src/Rectangle.cpp
    ${CMAKE_SOURCE_DIR}/src/Cube.cpp
    ${CMAKE_SOURCE_DIR}/src/Sphere.cpp
)

# Подключаем Google Test к тестам
target_link_libraries(tests gtest_main)

# Включаем тестирование через CTest
enable_testing()
add_test(NAME tests COMMAND tests)