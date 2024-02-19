// You are working as the bowling assist during the practice session before match. All the bowlers are asking the speed of the ball. So, you need to get the ball speed and print the ball speed with only 2 decimal value.

// Input Format:
// Input value consists of double value

// Output Format:
// Output value consists of double value with 2 decimal value.

// Sample Input:
// 141.236

// Sample Output:
// 141.24

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double input;
    cin>>input;
    cout<<fixed<<setprecision(2)<<input;
    return 0;
}
