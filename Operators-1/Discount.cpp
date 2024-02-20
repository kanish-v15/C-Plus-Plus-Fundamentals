// Mrs.Raja is a miser to the core.She saves money even on petite things. One dayshe heard a discount offer announced in a shop.
//she wants to purchase lot of items to save her money. The discount is given only when atleast two items are bought. 
//Since each item has different discount prices , she finds difficult to check the amount she has saved. 
//So she approaches you to device a automated discount calculator to make her easy while billing. 

// INPUT FORMAT:
// Input consists of two floating point values denoting price of item1 and item2. 
// The third input denotes the discount value in percentage. 

// OUTPUT FORMAT: 
// The output consists of three floating values denoting total amount, discounted price and amount saved.

//  Sample Input:
// 20.50
// 45.40
// 10

// Sample Output
// 65.90
// 59.31
// 6.59


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float item1, item2, discount, dis_item1, dis_item2;
    cin>>item1;
    cin>>item2;
    cin>>discount;
    dis_item1 = (item1*discount) / 100;
    dis_item2 = (item2*discount) / 100;
    cout<<fixed<<setprecision(2)<<item1+item2;
    cout<<fixed<<setprecision(2)<<"\n"<<(item1 + item2) - (dis_item1 + dis_item2);
    cout<<fixed<<setprecision(2)<<"\n"<<dis_item1 + dis_item2;
    return 0;
}
