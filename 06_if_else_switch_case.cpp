#include <iostream>
using namespace std;
int main(){
        cout<<"Enter your age "<<endl;
        int age;
        cin>>age;
    // if(age<18){
    //     cout<<"You are not allowed in the party "<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are just allowed "<<endl;
    // }
    // else{
    //     cout<<"You are allowed"<<endl;
    // }


    // switch case

    switch (age)
    {
    case 22:
    cout<<"You are not eligible "<<endl;
    break;

  


    
    default:
    cout<< "You are  eligible"<<endl;
        break;


    }


}