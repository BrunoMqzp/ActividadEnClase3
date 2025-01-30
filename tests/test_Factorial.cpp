#include "C:/VS/PROJECTS/SINTAXIS/GITHUB/ActividadEnClase3/MetodosFactorial.h"
#include <gtest/gtest.h>

TEST(CombinatoriaTest, Factorial) {
    EXPECT_EQ(factorial(5), 120);
}

TEST(CombinatoriaTest, Combinacion) {
    EXPECT_EQ(combinacion(5, 2), 10);
}
