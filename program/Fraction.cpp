#include "Fraction.h"


Fraction::Fraction()
    : nominator(0), denominator(0) 
{
}

Fraction::Fraction(int nominator, int denominator)
    : nominator(nominator), denominator(denominator) 
{
}

Fraction::Fraction(int nominator)
        : nominator(nominator), denominator(1) 
{
}

int Fraction::getNominator() const 
{ 
    return nominator; 
}

int Fraction::getDenominator() const 
{ 
    return denominator; 
}

Fraction::operator double() 
{ 
    return nominator / (double)denominator; 
}

void Fraction::display() {
    std::cout << nominator << "/" << denominator << std::endl;
}