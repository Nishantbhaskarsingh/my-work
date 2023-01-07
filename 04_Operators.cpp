#include <iostream>
using namespace std;
int main(){
    // Arthimetic operators:- +,-,*,/,%,++,--
    float a=5, b=6;
    cout<<"The sum of a and b is "<<a+b<<endl;
    cout<<"The substraction of a and b is "<<a-b<<endl;
    cout<<"The multiplication of a and b is "<<a*b<<endl;
    cout<<"The division of a and b is "<<a/b<<endl;
    cout<<endl;
    cout<<endl;
    
    

    //Assignment operator:- used to assign
    // eg- int a =3; char c = 'v' etc


    // comparision operator:- used to compares values(==,>=,<=,!=,<,>)
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;


    // logical operator:- &&, ||, !(and, or, not)
    
    cout<<"the value of logical operator (a==b)&&(a>b) is "<<((a==b)&&(a>b))<<endl;
    cout<<"the value of logical operator (a==b)||(a>b) is "<<((a==b)||(a>b))<<endl;
    cout<<"the value of logical operator !(a==b) is "<<(!(a==b))<<endl;

   

    return 0;
   
}