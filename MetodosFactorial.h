#ifndef MetodosFactorial
#define MetodosFactorial


unsigned long long factorial(int n) {
    if (n < 0) return 0;
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}


unsigned long long combinacion(int n, int r) {
    if (r > n || n < 0 || r < 0) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

#endif 
