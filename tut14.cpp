#include<iostream>
using namespace std;

struct Student
{
    int Roll_No;
    string Name;
    char Fav_char;
}Student1,Student2;


int main(){
    //Student1's Data
    Student1.Roll_No=21;
    Student1.Name="Deependra";
    Student1.Fav_char='A';
    
    //Student2's Data
    Student2.Roll_No=20;
    Student2.Name="Aruv";
    Student2.Fav_char='B';

    //Printing Data
    cout<<"This is the data of Student 1"<<endl<<endl;
    cout<<"His Name: "<<Student1.Name<<endl;
    cout<<"His Roll No: "<<Student1.Roll_No<<endl;
    cout<<"His Fav char: "<<Student1.Fav_char<<endl<<endl;

    cout<<"*******************************************"<<endl<<endl;

    cout<<"This is the data of Student 2"<<endl<<endl;
    cout<<"His Name: "<<Student2.Name<<endl;
    cout<<"His Roll No: "<<Student2.Roll_No<<endl;
    cout<<"His Fav char: "<<Student2.Fav_char<<endl;

    cout<<"**********************END******************"<<endl;

    return 0; 
}