// Suriya wanted to start a business and he was looking for a venture capitalist.
// Through his friend Kumar he went to a the owner of a Construction company who is looking to invest on a emerging business.  
//Looking after the business proposal , the owner was very much impressed with Alice work. He wanted to invest in Suriya's Business. 
//So he gives a green signal to go ahead with the project. Suriya bought Rs.X for a period of Y years from the owner at R% interest per annum. 
//Find the rate of interest and the total amount to be given by Suriya a special offer of 2% discount in the total interest at the end of the settlement. Find the amount given back by Alice and also find total amount. (Note. All rupees value should be in two decimal points).

// INPUT FORMAT: 
// Input consists of 3 integers. 
// The first integer corresponds to the principal amount borrowed by Alice. 
// The second integer corresponds to the rate of interest 
// The third integer corresponds to the number of years. 

// OUTPUT FORMAT: 
// The output consists of 4 floating point values. 
// The first value corresponds to the interest. 
// The second corresponds to the amount. 
// The third value corresponds to the discount. 
// The last value corresponds to the final settlement. 
// All floating point values are to be rounded off to two decimal places

// Sample Input
// 100
// 1
// 10

// Sample Output
// 10.00
// 110.00
// 0.20
// 109.80

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int principal, interest, years;
    cin>>principal;
    cin>>interest;
    cin>>years;
    float in, am, dis, set;
    in = (principal * interest * years) / 100.00;
    am = principal + in;
    dis = (in*2) / 100.00;
    cout<<fixed<<setprecision(2)<<in<<"\n";
    cout<<fixed<<setprecision(2)<<am<<"\n";
    cout<<fixed<<setprecision(2)<<dis<<"\n";
    cout<<fixed<<setprecision(2)<<am-dis;
    return 0;
    
}
