// Wind chill factor is the felt air temperature on exposed skin due to wind. 
// The wind chill temperature is always lower than the air temperature, and is calculated as per the following formula.
// wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v^0.16
// Write a program to receive values of temperature and wind velocity and calculate wind chill factor.

// INPUT FORMAT: 
// The input consists of two integers. 
// The first integer corresponds to the temperature of the wind
// The second integer corresponds to the wind velocity. 

// OUTPUT FORMAT: 
// The output consists of a single integer which corresponds to the Wind Chill Factor. 
// Decimal values are rounded off to two decimal points.

// Sample Input
// 35
// 20

// Sample Output
// 23.92

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int temp, wind;
    float wcf;
    cin>>temp>>wind;
    wcf = (35.74 + (0.6215*temp)) + ((0.4275 * temp) - 35.75) * pow(wind, 0.16);
    cout<<fixed<<setprecision(2)<<wcf;
    return 0;
}
