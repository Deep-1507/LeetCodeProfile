#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    
    cout<<"Enter a number:";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Voilla! This is ONE"<<endl;
        // break;
    case 2:
        cout<<"This is TWO"<<endl; 
        // break;
    case 3:
        cout<<"This is THREE"<<endl;
        // break;
    case 4:
        cout<<"This is FOUR"<<endl;
        // break;
    case 5:
        cout<<"This is FIVE"<<endl;
        // break;
    
    default:
        cout<<"This is DEFAULT"<<endl;
        // break;
    }
    return 0;
}
