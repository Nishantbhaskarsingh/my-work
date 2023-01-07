#include<iostream>
using namespace std;
int main(){


// int num=5;

// int *ptr=&num;// way to declare pointers

// cout<<"Value of num is: "<<*ptr<<endl;//pointer that prints the value of num
// cout<<"address of num is: "<<ptr<<endl;//ptr only prints the address of num

// //another methods to declare pointer
// int *p=0;
// p=&num;
// cout<<"Value of num is: "<<*p<<endl;

// // arthmetic pointers
// (*p)++;
// cout<<"Value of num is: "<<*p<<endl;//  num is incremented by 1

// //pointing the variable
// int n=5;
// int a= n;//a assign to n
// a++;// incrementing a by 1
// cout<<n<<endl;//here printing n so our n is 5 so no increment in this

// // coping a pointer

// int *q=p;
// cout<<*p<<"-"<<*q<<endl;
// cout<<p<<"-"<<q<<endl;

// // important concept

// int i =12;
// int *t=&i;
// *t=*t+1;//  increment the value
// cout<<*t<<endl;// result is 13

// cout<<t<<endl;//when not incremented value is (0x61fea4)
// t=t+1;// means it increment the address not the value.after address is (0x61fea8)
// cout<<t<<endl;

// Null pointers

// int *p1=NULL;
// cout<<p1;


char c[6]="abcde";
cout<<sizeof(c);


}