// NewPrac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rational.h"
using std::cout;
using std::endl;

int main()
{
    Rational R1, R2, Res;

    R1.SetRational(3, 9);
    R2.SetRational(1, 8);

    //show
    cout << "Your first Rational number is: "; R1.Show();
    cout << "Your second Rational number is: "; R2.Show();
    cout << endl;

    
    //Add function
    Res = R1.Add(R2);
    cout << "The Additon result is: "; Res.Show();
    cout << endl;


    //Subtract function
    Res = R1.Sub(R2);
    cout << "The Subtraction result is: "; Res.Show();
    cout << endl;


    //Multiply function
    Res = R1.Mul(R2);
    cout << "The Multiplication result is: "; Res.Show();
    cout << endl;


    //Divide function
    Res = R1.Div(R2);
    cout << "The Division result is: "; Res.Show();
    cout << endl;


    //IsGreater function
    if (R1.IsGreater(R2))
    {
        R1.Show(); cout << " is greater than "; R2.Show();
    }
    else
    {
        R2.Show(); cout << " is greater than "; R1.Show();
    } cout << endl;



    //IsLower function
    if (R1.IsLower(R2))
    {
        R1.Show(); cout << " is lower than "; R2.Show();
    }
    else
    {
        R2.Show(); cout << " is lower than "; R1.Show();
    } cout << endl;


    //InBetween function
    R1.InBetween(R2).Show(); cout << " is In between ";
    cout << endl;


}

