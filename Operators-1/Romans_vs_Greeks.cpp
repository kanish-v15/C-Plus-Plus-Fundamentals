// Long ago , there was a war between the Romans and Greeks.
// The Roman and Greek armies meet outside the walls of Florence. Seeing the bloodshed the two kings to decide to end the battle as early as possible 
// as both the armies suffer a lot.
// The shape of the battle ground is Square. To win the war is to conquer the flag first by the opposite army , 
// it has been decided to place the flag post at the exact center of the battle field. Can you please help them in placing the flag post at the exact center? 
// Given the coordinates of the left bottom vertex of the square ground and the length of the side of the battle field, 
// you need to write a program to determine the coordinates of the centre of the ground. 
// [Assumption --- Length of the side is always even] 

// Input & Output Format:

// Input consists of three integers

// First input consists of x coordinate

// Second input consists of y coordinate

// Third input consists of the length.

// The output consists of the two integers.

// Sample Input
// 4

// 0

// 8

// Sample Output

// 8 4


#include<iostream>
using namespace std;
int main()
{
    int x, y, len, center_x, center_y;
    cin>>x;
    cin>>y;
    cin>>len;
    center_x = x + len / 2;
    center_y = y + len / 2;
    cout<<center_x<<" "<<center_y;
    return 0;
}
