// The Training for Culturals has begun and Fine Arts teacher has decided to conduct some group dance. The teacher wants to split the students in the Higher Secondary into equal sized teams. In some cases, there may be some students who are left out from teams and he wanted to use the left out students to assist him in conducting the group dances. For instance, if there are 50 students in the class and if the class has to be divided into 7 equal sized teams, 7 students will be there in each team and 1 student will be left out. Fine Arts teacher asks your help to automate this team splitting task. Can you please help him out?

// INPUT FORMAT:
// Input consists of 2 integers.
// The first integer corresponds to the number of students in the class
// The second integer corresponds to the number of teams.

// OUTPUT FORMAT:
// The output consists of two integers.
// The first integer corresponds to the number of students in each team
// The second integer corresponds to the students who are left out.
// Sample Input
// 60

// 8

// Sample Output
// 7
// 4

#include<iostream>
using namespace std;
int main()
{
    int stud_team, stud_left;
    cin>>stud_team;
    cin>>stud_left;
    cout<<stud_team / stud_left;
    cout<<"\n"<<stud_team % stud_left;
    return 0;
}
