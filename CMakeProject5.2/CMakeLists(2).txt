# CMakeList.txt: проект CMake для CMakeProject5.2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
project ("CMakeProject5.2")
# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject5.2 "CMakeProject5.2.cpp" "CMakeProject5.2.h")
target_link_libraries(CMakeProject5.2 PRIVATE nlohmann_json::nlohmann_json)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
