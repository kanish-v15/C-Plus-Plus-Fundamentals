// Though there have been more successful pirates, 
// Stoneheart is one of the best-known and widely-feared of his time . 
// He commanded four ships and had a pirate army of 300 at the height of his career, and defeated the famous warship, HMS “Scarborough” in sea-battle. 
// He was known for barreling into battle clutching two swords, with several knives and pistols at the ready. 
// He captured over forty merchant ships in the Caribbean, and without flinching killed many prisoners. 
// Stoneheart and his three pirates found a treasure of gold coins Short Fin too joined them. 
// They decided to share the treasure. Stoneheart agreed to give x % share for Short Fin. 
// He then decided to take y % share from the remaining treasure. His other pirates willl share equally the remaining gold coins. Write a program to compute their share's. 

// INPUT FORMAT: 
// Input consists of 3 integers. 
// The first input corresponds to the number of gold coins in the treasure. 
// The second input corresponds to Finn's share percentage 
// The last input is Stoneheart's share percentage. 

// OUTPUT FORMAT: 
// The output consists of three integers. 
// The first output integer corresponds to Short Fin's share. 
// The second integer corresponds to Stoneheart's share. 
// The last integer corresponds to other pirates share.

// Sample Input
// 500
// 25
// 33

// Sample Output
// 125
// 123
// 84


#include<iostream>
using namespace std;
int main()
{
    int tot, fin, stone, fin_share, stone_share, pirate_share;
    cin>>tot>>fin>>stone;
    fin_share = (tot * fin) / 100;
    stone_share = ((tot - fin_share) * stone) / 100;
    pirate_share = (tot - (fin_share + stone_share)) / 3;
    cout<<fin_share<<"\n"<<stone_share<<"\n"<<pirate_share;
    return 0;
}
