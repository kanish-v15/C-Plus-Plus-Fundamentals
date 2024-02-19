// Diffny also joined the group of Team Flash. Meanwhile, Diffny also moved to a new house in the same locality nearby to the other three. 
// Now the houses of Joe, Ramsey and vixon are located in the shape of a triangle. Harry also has moved to a house in the same locality. 
// When the Team Flash asked daffy about the location of his house , he said that his house is equidistant from the houses of the other 3. 
// Can you please help them find out the location of the house?Given the 3 locations {(x1,y1), (x2,y2) and (x3,y3)} of a triangle, 
// write a program to determine the point which is equidistant from all the 3 points.

// INPUT FORMAT: 

// Input consists of 6 integers. 

// The first integer corresponds to x1. 

// The second integer corresponds to y1. 

// The third and fourth integers correspond to x2 and y2 respectively. 

// The fifth and sixth integers correspond to x3 and y3 respectively. 

// OUTPUT FORMAT: 

// The output consists of two floating point numbers (with one decimal place) which correspond to the location of the house.

// Sample Input

// 2
// 4
// 10
// 15
// 5
// 8

// Sample Output
// 5.7
// 9.0


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3;
    float cen_x, cen_y;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    cin>>x3;
    cin>>y3;
    cen_x = (x1 + x2 + x3) / 3.0;
    cen_y = (y1 + y2 + y3) / 3.0;
    cout<<fixed<<setprecision(1)<<cen_x;
    cout<<"\n"<<fixed<<setprecision(1)<<cen_y;
    return 0;
    
}
