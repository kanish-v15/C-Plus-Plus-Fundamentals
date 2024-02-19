// In Beirut, there was a very huge explosion. Millions and millions worth buildings and property were destroyed. Many people lost their lives while some of them were injured and few were safe. A news reporter arrives at the spot to take the current survey regarding the situation of the people alive, dead and injured. He wanted to publish it in the newspaper and reach out to other countries asking to help the affected people. Can you please help him in this noble cause by writing a program to generate the newspaper report?

// INPUT & OUTPUT FORMAT:

// Input consists of three integers corresponding to the number of people dead, injured and those who are still alive and safe. 

// Refer sample input and output for formatting specifications.

// Sample Input:

// 2000
// 3000
// 10000

// Sample Output:

// 1)Dead:2000

// 2)Injured:3000

// 3)Safe:10000

// Please help the people who are suffering!!!


#include<iostream>
using namespace std;
int main()
{
    int dead, injured, safe;
    cin>>dead;
    cin>>injured;
    cin>>safe;
    cout<<"1)Dead:"<<dead<<"\n";
    cout<<"2)Injured:"<<injured<<"\n";
    cout<<"3)Safe:"<<safe;
    cout<<"\nPlease help the people who are suffering!!!";
    return 0;
}
