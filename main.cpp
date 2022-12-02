# Page 264 - Prime Numbers

First 11 prime integers.

## Program Description:

The first 11 prime integers are `2, 3, 5, 7, 11, 13, 17, 19, 23, 29, and 31`. 
A positive integer between 1 and 1000 (inclusive), other than the first 11 prime integers, 
is prime if it is not divisible by **2, 3, 5, 7, 11, 13, 17, 19, 23, 29, and 31**. 
Write a program that takes positive integer between 1 and 1000 (inclusive) and that outputs whether the number is prime. 
If the number is out of bounds output `out of bound` but if the number is not prime, 
then output all the numbers, from the list of the first 11 prime integers, which divide the number.


```
// Xavier Thompson J00825561 November 16th, 20222 
#include <iostream>

using namespace std;

int main() 
{
// Declare variable 
int n;
// Read input value from the user. 
// Prompt and read input from the user. 
cout << "Enter positive integer between 1 and 1000:";
cin >> n;
// check input value 
if(n>=1&&n<=1000)
{
// check for n value 
if((n % 2) && (n % 3) && (n % 5) && (n % 7) && (n % 11) && (n % 13) && (n % 17) && (n % 19) && (n % 23) && (n % 29) && (n % 31) || (n==2) || n==3 ||
n==5 || n==7 || n==11 ||n==13 || n==17 == || n==19 || n==23 || n==29 || n==31)) 
{
// display result 
cout << n << "is a prime" << endl; 
}
else 
{
// display n that is not prime 
cout << n << "is not a prime." << endl;
// Prompt output message 
cout << "The list of divisors are";
// check for first 11 prime numbers and 
// display the list of divisors 
if (n%2==0) cout << "2";
if (n%3==0) cout << "3";
if (n%5==0) cout << "5";
if (n%7==0) cout << "7";
if (n%11==0) cout << "11";
if (n%13==0) cout << "13";
if (n%17==0) cout << "17";
if (n%23==0) cout << "23";
if (n%29==0) cout << "29";
if (n%31==0) cout << "31";
}
}
cout << endl << endl;
// Pause the system for a while system ("pause");
    return 0;
}
