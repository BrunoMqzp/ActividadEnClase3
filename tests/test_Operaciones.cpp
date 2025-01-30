#include "../MetodosOperaciones.h"
#include <gtest/gtest.h>

TEST(OperacionesTest, Suma) {
    EXPECT_DOUBLE_EQ(sumar(3.0, 4.0), 7.0);
}

TEST(OperacionesTest, Resta) {
    EXPECT_DOUBLE_EQ(restar(10.0, 4.0), 6.0);
}

TEST(OperacionesTest, Multiplicacion) {
    EXPECT_DOUBLE_EQ(multiplicar(3.0, 4.0), 12.0);
}

TEST(OperacionesTest, Division) {
    EXPECT_DOUBLE_EQ(dividir(8.0, 4.0), 2.0);
}

TEST(OperacionesTest, DivisionPorCero) {
    EXPECT_DOUBLE_EQ(dividir(8.0, 0.0), 0.0);
}
