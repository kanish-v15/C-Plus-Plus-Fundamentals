// Write a program to get a float value from the user and display it in the below-mentioned format
// INPUT & OUTPUT FORMAT: 
// Input consists of one float value. 
// Output consists of one integer, its highest round off value and its lowest round off value.
// Sample Input:
// 23.115

// Sample Output:

// 23.115000
// 23.115
// 23.11
// 23.1



#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num;
    cin>>num;
    cout<<fixed<<setprecision(6)<<num;
    cout<<"\n";
    cout<<fixed<<setprecision(3)<<num;
    cout<<"\n";
    cout<<fixed<<setprecision(2)<<num;
    cout<<"\n";
    cout<<fixed<<setprecision(1)<<num;
    return 0;
}
