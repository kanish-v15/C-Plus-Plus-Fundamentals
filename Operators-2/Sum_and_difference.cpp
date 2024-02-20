// Write a program to get 2 numbers from the user and calculate their sum and difference using '+' and '-' operators respectively.
// Print the corresponding sum and difference of the numbers as output in the console.

// Input format:
// First input: an integer
// Second input: an integer

// Output format:
// First output will be the sum of two integers
// Second output will be the difference of two integers

// Sample Input:
// 55
// 34

// Sample Output:
// 89
// 21


#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin>>num1>>num2;
    cout<<num1+num2<<"\n";
    cout<<num1-num2;
    return 0;
}
