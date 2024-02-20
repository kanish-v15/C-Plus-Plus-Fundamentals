// My name is Binfon and I am tribal. I couldn't understand how you measure days, weeks, months and year. Please make me to understand about the days, weeks, months and year.
// Dear Friend, Make Binfon to understand what is meant by days,week, months and year. Teach him about the conversion of days in to years, weeks and days using a program.

// INPUT FORMAT: 
// Input consists of an integer which corresponds to the number of days. 

// OUTPUT FORMAT: 
// The output consists of three integers. 
// The first integer corresponds to the total years. 
// The second integer corresponds to the total weeks. 
// The third integer corresponds to the total days.

// Sample Input
// 373

// Sample Output
// 1
// 1
// 1


#include<iostream>
using namespace std;
int main()
{
    int days;
    cin>>days;
    cout<<days / 365<<"\n";
    cout<<(days % 365) / 7<<"\n";
    cout<<(days % 365) % 7;
    return 0;
} 
