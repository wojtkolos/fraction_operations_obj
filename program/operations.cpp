#include "operations.h"

int NWD(int a, int b) {
    int pom;
    while (b != 0) {
        pom = b;
        b = a % b;
        a = pom;
    }
    return a;
}

Fraction divide(const Fraction& frac1, const Fraction& frac2) {
    int nominator = frac1.getNominator() * frac2.getDenominator();
    int denominator = frac2.getNominator() * frac1.getDenominator();

    int a = NWD(nominator, denominator);

    return Fraction(nominator /= a, denominator /= a);
}


double squareRoot(double liczba) {
    return sqrt(liczba);
}
