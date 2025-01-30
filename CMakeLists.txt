cmake_minimum_required(VERSION 3.30)
project(unit_test)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
        main.cpp
        MyMathLib.h
	MetodosFactorial.h
	MetodosOperaciones.h

)


add_executable(unit_test main.cpp)

# Opciones
option(ENABLE_TESTING "Enable a Unit Testing build." ON)

# Descarga GoogleTest usando FetchContent
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Si se habilitan las pruebas, agrega GoogleTest y las pruebas unitarias
if(ENABLE_TESTING)
    enable_testing()

    # Archivos de pruebas
    set(TEST_SOURCES
        tests/test.cpp
	tests/test_Factorial.cpp
	tests/test_Operaciones.cpp
    )

    # Crear ejecutable de pruebas
    add_executable(test_Factorial tests/test_Factorial.cpp)

    # Enlazar GoogleTest
    target_link_libraries(test_Factorial PRIVATE gtest gtest_main)

    # Crear ejecutable de pruebas
    add_executable(test_Operaciones tests/test_Operaciones.cpp)

    # Enlazar GoogleTest
    target_link_libraries(test_Operaciones PRIVATE gtest gtest_main)


    # Registrar pruebas con CTest
    add_test(NAME AllTests COMMAND test_suite)
add_test(NAME test_Factorial COMMAND test_Factorial)
add_test(NAME test_Operaciones COMMAND test_Operaciones)

endif()