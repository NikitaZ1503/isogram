# CMakeList.txt: проект CMake для isogram1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (isogram1 "isogram1.cpp" "isogram1.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET isogram1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
