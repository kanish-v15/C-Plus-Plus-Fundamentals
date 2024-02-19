//   A young man named Diffny leaves home to travel to California, to join the Team Flash. 
//   Although Diffny is not able to join this elite team immediately, he befriends the three most formidable members of the age: J
//   oe, Ramsey and vixon and gets involved in affairs of the state and court.
//   At that time, the Villan was planning to dethrone the king and to take the kingdom and to remove the Team Flash of the guard. 
//   Since the Villan has spies mixed with the local public , Diffny decides to send a message of his whereabouts to the team Flash in unique way.
//   He gave a note to a boy which has the following message. I am at the midpoint of the line joining the farmhouse next to the palace and the light house. 
//   The Team Flash were puzzled. Can you help them find out the location of Diffny?Given the coordinates of the 2 places (x1,y1) and (x2,y2), 
//   write a program to find the location of Diffny.

// Input & Output Format:

// Input consists of 4 integers.

// First value consists of x1.

// Second value consists of y1.

// Third value consists of x2.

// Fourth value consists of y2.

// Output consists of two float values.

// Sample Input
// 2
// 4
// 10
// 15

// Sample Output
// 6.0
// 9.5

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x1, x2, y1, y2;
    float mid_x, mid_y;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    mid_x = (x1 + x2) / 2.0;
    mid_y = (y1 + y2) / 2.0;
    cout<<fixed<<setprecision(1)<<mid_x<<"\n";
    cout<<fixed<<setprecision(1)<<mid_y;
    return 0;
}
