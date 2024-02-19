// Write a C program to get a float value from the user and display it in the below-mentioned format.

// HINT: Use ceil() and floor() functions from <math.h> header file.

// Sample Input:
// 54.5

// Sample Output:


// 54
// 55.0
// 54.0

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float num;
    cin>>num;
    cout<<int(num);
    cout<<"\n";
    cout<<ceil(num);
    cout<<"\n";
    cout<<floor(num);
    return 0;
}
