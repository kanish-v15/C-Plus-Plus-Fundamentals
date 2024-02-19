// There was a large ground in center of the city which is rectangular in shape. The Corporation decides to build a Football stadium in the area for school and college students.
//But the area was used as a car parking zone. In order to protect the land from using as an unauthorized parking zone , the corporation wanted to protect the stadium by building a fence. In order to help the workers to build a fence, 
//they planned to place a thick rope around the ground. They wanted to buy only the exact length of the rope that is needed. They also wanted to cover the entire ground with a carpet during rainy season. 
//They wanted to buy only the exact quantity of carpet that is needed. They requested your help.
// Can you please help them by writing a program to find the exact length of the rope and the exact quantity of carpet that is required?

// Input format:
// Input consists of 2 integers.
// The first integer corresponds to the length of the ground
// The second integer corresponds to the breadth of the ground.
// Output Format:
// Output Consists of two integers.
// The first integer corresponds to the length.
// The second integer corresponds to the quantity of carpet required.

// Sample Input:
// 20

// 90

// Sample Output:

// 220

// 1800


#include<iostream>
using namespace std;
int main()
{
    int length, breadth;
    cin>>length;
    cin>>breadth;
    cout<<(length + breadth) * 2<<"\n";
    cout<<length * breadth;
    return 0;
}
