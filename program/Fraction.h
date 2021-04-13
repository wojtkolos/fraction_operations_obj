#pragma once

#define FRACTION_H

#include <iostream>


class Fraction 
{
    int nominator;
    int denominator;
public:
    Fraction();
    Fraction(int nominator, int denominator);
    Fraction(int nominator);

    void display();

    int getNominator() const;
    int getDenominator() const;

    operator double();
};
