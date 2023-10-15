#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
     int a=3;
     int* b=&a;
     int** c=&b;
     int*** d=&c;

     cout<<"The address of a is: "<<&a<<endl;
     cout<<"The address of b is: "<<&b<<endl;
     cout<<"The address of b is: "<<c<<endl;
     cout<<"The value at a is: "<<***d<<endl;
     cout<<"The value at a is: "<<a<<endl;
     
       
    // char c='a';
    // cout<<&c;
    // float f=2.10;
    // cout<<sizeof f ;
    
    return 0;
}
