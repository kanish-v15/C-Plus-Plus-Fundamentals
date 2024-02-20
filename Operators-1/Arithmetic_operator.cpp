// Write a C program to do an Arithmetic Operators.

// Input Format: 

// Input consists of two integers 

// Output Format:

// Output consist of integers

// Sample Input :

// 7

// 5

// Sample Output :

// 7 + 5 = 12
// 7 - 5 = 2
// 7 * 5 = 35
// 7 / 5 = 1
// 7 % 5 = 2
//code
#include<iostream>
using namespace std;
int main()
{
    int num_one, num_two;
    cin>>num_one;
    cin>>num_two;
    cout<<num_one<<" + "<<num_two<<" = "<<num_one+num_two<<"\n";
    cout<<num_one<<" - "<<num_two<<" = "<<num_one-num_two<<"\n";
    cout<<num_one<<" * "<<num_two<<" = "<<num_one*num_two<<"\n";
    cout<<num_one<<" / "<<num_two<<" = "<<num_one/num_two<<"\n";
    cout<<num_one<<" % "<<num_two<<" = "<<num_one%num_two;
    return 0;
}
