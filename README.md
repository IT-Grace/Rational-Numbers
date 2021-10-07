# Class-Complex
Create a class called Rational for performing arithmetic with fractions. Write a driver program to test your class.
Use integer variables to represent the private data of the class--the numerator and the denominator. Provide a constructor function that enables an object of this class to be initialized when it is declared to a non-zero values. The constructor should store the fraction in reduced form (i.e., the fraction 2/4 should be saved as ½)

Provide public member functions for each of the following:

1.	set and get functions for both numerator and denominator.
2.	SetRational to set numerator and denominator together.
3.	Addition of two rational numbers. The result should be stored in reduced form.
4.	Subtraction of two rational numbers. The result should be stored in reduced form.
5.	Multiplication of two rational numbers. The result should be stored in reduced form.
6.	Division of two rational numbers. The result should be stored in reduced form.
7.	IsGreater of two rational numbers, example ¼ is greater than 1/5.
8.	IsEqual of two rational numbers, example ¼ is equal to 2/8.
9.	InBetween to find a rational number between two rational numbers, example what is the rational number between 5/13 and 6/13, this could be 11/26. 

10.	Show rational numbers in the form a/b where a is the numerator and b is the denominator.
 
Utility functions (private functions):

1.	Find the Least Common LC dominator for two rational numbers, this could be used in Add and subtract function, for example 2/6+3/15 could be 10/30+6/30 rather than 30/90+18/90.
2.	Find the Greater Common Divisor GCD for two rational numbers, this could be used in the Simplify function.
3.	Simplify a rational number, example, 9/24 should be simplified to 3/7, this could be used when setting new number and other arithmetic operations (+, -, *, /).

