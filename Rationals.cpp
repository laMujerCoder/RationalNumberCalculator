
    #include<iostream>
    #include "Rationals.h"
    using namespace std;


namespace Garcia_Rationals
{
    Rationals::Rationals()
    {
        numerator = 0;
        denominator = 1;
    }
    Rationals::Rationals(int num)
    {
        numerator = num;
        denominator = 1;
    }
    Rationals::Rationals(int num, int denom)
    {
        numerator = num;
        denominator = denom;
    }

    bool operator==(const Rationals &num1, const Rationals &num2)
    {
        return (num1.numerator == num2.numerator && num1.denominator == num2.denominator);
    }

    bool operator<(const Rationals &num1, const Rationals &num2)
    {
        return ((num1.numerator * num2.denominator) < (num2.numerator * num1.denominator));
    }
    bool operator<=(const Rationals &num1, const Rationals &num2)
    {
        return ((num1.numerator * num2.denominator) <= (num2.numerator * num1.denominator));
    }
    bool operator>(const Rationals &num1, const Rationals &num2)
    {
        return ((num1.numerator * num2.denominator) > (num2.numerator * num1.denominator));
    }
    bool operator>=(const Rationals &num1, const Rationals &num2)
    {
        return ((num1.numerator * num2.denominator) >= (num2.numerator * num1.denominator));
    }
    bool operator!=(const Rationals &num1, const Rationals &num2)
    {
        return ((num1.numerator * num2.denominator) != (num2.numerator * num1.denominator));
    }
    Rationals operator+(const Rationals &num1, const Rationals &num2)
    {
        Rationals temp;
        temp.numerator =(num1.numerator * num2.denominator + num2.numerator * num1.denominator);
        temp.denominator=(num1.denominator * num2.denominator);
        return temp; 
    }
    Rationals operator-(const Rationals &num1, const Rationals &num2)
    {
        Rationals temp; 
        temp.numerator= (num1.numerator * num2.denominator - num2.numerator * num1.denominator );
        temp.denominator= (num1.denominator * num2.denominator);
        return temp; 
    }
    Rationals operator*(const Rationals &num1, const Rationals &num2)
    {
        Rationals temp;
        temp.numerator= num1.numerator * num2.numerator;
        temp.denominator= num1.denominator * num2.denominator;
        return temp;
    }
    Rationals operator/(const Rationals &num1, const Rationals &num2)
    {
        Rationals temp; 
        temp.numerator= num1.numerator * num2.denominator;
        temp.denominator= num1.denominator * num2.numerator;
        return temp;
    }

    istream &operator>>(istream &ins, Rationals &the_object)
    {
        char dash; 
        ins >> the_object.numerator >> dash >> the_object.denominator; 
        return ins; 
    }
    ostream &operator<<(ostream &outs, const Rationals &the_object)
    {
        outs << the_object.numerator << "/" << the_object.denominator;
        return outs;
    }
}
