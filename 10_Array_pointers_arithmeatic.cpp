#include<iostream>
using namespace std;
int main(){
    int marks[] = {23,30,40,50,55};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;

    // for (int  i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks  "<< i <<" is "<<marks[i]<<endl;
    // }


    // using while loop
    int i = 0;
    while(i<4){
        cout<<"The value of marks "<< i <<" is "<<marks[i]<<endl;
        i++;
    }
    // pointers and arrray
    int*p = marks;
    
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;




         
        return 0;
    
    
}