#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // Manipulators

    int a =3, b = 5, c = 1233;
    cout<<"The value of a without setw is "<<a<<endl;
    cout<<"The value of b without setw is "<<b<<endl;
    cout<<"The value of c without setw is "<<c<<endl;
    cout<<endl;

    cout<<"The value of a is setw(3) "<<setw(3)<<a<<endl;
    cout<<"The value of b is setw(3) "<<setw(3)<<b<<endl;
    cout<<"The value of c is setw(3) "<<setw(3)<<c<<endl;



 // operator presendence :- It decide which operator applies first

    return 0;
}