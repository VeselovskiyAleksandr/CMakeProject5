# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeProject5.2")
set(JSON_BuildTests OFF CACHE INTERNAL "")
add_subdirectory(nlohmann_json)
# Включите подпроекты.
add_subdirectory ("CMakeProject5.2")
