// Big Baggins lives in a colony , he is the only Baggins in his colony who was not able to hop.
// On his 5th birthday, his father Baggins gifted him a Pogo Stick as he could not jump like the other Baggins.
// He is so excited to play with pogo stick. The pogo stick hops one unit per jump. He wanders around his house jumping with pogo sticks.
// He wants to show the pogo stick to his friends and decide to go using pogo sticks. Write a program to find number of hops needed to reach his friends house. 
// Assume that Big Baggins's house is in the location (3,4).

// INPUT FORMAT: 
// Input consists of two integers x,y. 
// The x and y correspond to x and y coordinates of his friends' house. 

// OUTPUT FORMAT:
// The output is an integer. It corresponds to the number of hops needs to reach his friends' house. 

// Sample Input
// 5
// 6

// Sample Output
// 2


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x, y, x_diff, y_diff, dist;
    cin>>x>>y;
    x_diff = x - 3;
    y_diff = y - 4;
    dist = sqrt((x_diff * x_diff) + (y_diff * y_diff));
    cout<<dist;
    return 0;
}
