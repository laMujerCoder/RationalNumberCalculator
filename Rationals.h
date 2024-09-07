#ifndef Rationals_H
#define Rationals_H

#include <iostream>
using namespace std;

namespace Garcia_Rationals
{
    /**
     * @brief Class stores rational numbers in the format a/b  with a being the numerator and b being the denominator
     *  The class includes arithmetic and comparator functions
    */
    class Rationals
    {

    public:
        //Constructors
        Rationals();
        Rationals(int num);
        Rationals(int num, int denom);
        // Friend functions that compare two rationals numbers 
        friend bool operator==(const Rationals &num1, const Rationals &num2);
        friend bool operator<(const Rationals &num1, const Rationals &num2);
        friend bool operator<=(const Rationals &num1, const Rationals &num2);
        friend bool operator>(const Rationals &num1, const Rationals &num2);
        friend bool operator>=(const Rationals &num1, const Rationals &num2);
        friend bool operator!=(const Rationals &num1, const Rationals &num2);
        //friend functions that operate arithmetic operations on two rational numbers
        friend Rationals operator+(const Rationals &num1, const Rationals &num2);
        friend Rationals operator-(const Rationals &num1, const Rationals &num2);
        friend Rationals operator*(const Rationals &num1, const Rationals &num2);
        friend Rationals operator/(const Rationals &num1, const Rationals &num2);
        /**
         * @brief Friend functions that overload the i/o operatiors
         *  the input and outputs will be taken in and out in the 'a/b' format
        */  
        friend istream& operator >>(istream& ins, Rationals & the_object);
        friend ostream& operator <<(ostream& outs, const Rationals& the_object);

    private:
        int numerator;
        int denominator;
    };
}
#endif // Rationals_H