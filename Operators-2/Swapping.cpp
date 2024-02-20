// Write a program to get 2 numbers from the user and swap their values without any loss of data. You can make use of additional 3rdvariable for swapping.
// Print the corresponding swapped values of the two numbers as output in the console.
// Input format:
// First input: an integer
// Second input: an integer

// Output format:
// The output will be integers(swapped values)
// Sample Input:

// 20
// 10

// Sample Output:

// 10
// 20

#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cin>>a>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<"\n"<<b;
    return 0;
}
