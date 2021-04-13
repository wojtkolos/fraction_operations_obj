#include "operations.h"


int main() {
    //a)
    Fraction frac1(2, 3), frac2(3, 4);

    frac1.display();
    frac2.display();

    //b)
    Fraction scoreB = divide(frac1, frac2);
    scoreB.display();

    //c)
    Fraction scoreC = divide(frac1, 4);
    scoreC.display();

    //d)
    std::cout << squareRoot(frac1);

    return 0;
}
