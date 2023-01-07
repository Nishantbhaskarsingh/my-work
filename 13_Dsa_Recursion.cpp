#include<iostream>
using namespace std;


// .............Find Factorial of a given number.................

// int fact(int n){
    
//     // Base case
//     if(n==0){
//         return 1;
//     }
//     // Recursive relation
//     return n*fact(n-1);
//}

//int main(){

//     int n; 
//     cout<<"Enter a number"<<endl;
//     cin>>n;

//     cout<<"Factorial of given number is "<<pow(n)<<endl;
// }


////................. Find 2 ki power n.....................

// int pow(int n){

 //  // base case
//     if(n==0)
//     return 1;

//     return 2*pow(n-1);
// }

// int main(){

//     int n; 
//     cout<<"Enter a number"<<endl;
//     cin>>n;

//     cout<<"2 ki power of given number is "<<pow(n)<<endl;
// }


//...............Fibonacci sequence...............

// int fib(int n){

//     if(n==0)
//     return 0;

//     if(n==1)
//     return 1;

//     return fib(n-1)  + fib(n-2);
// }

// int main(){
//     int n;
//     cout<<"Enter the position "<<endl;
//     cin>>n;

//     cout<<"Fibonacci number at the given position is: "<<fib(n)<<endl;
// }


//..............optimse method of fibonacci series using Iteration method.................

int fib(int n){
    if(n<2)
    return n;
    int a=0, b=1;
    int ans;

    for(int i=2; i<=n; i++){
        ans=a+b;
        a=b;
        b=ans;
    }

    return ans;
}

int main(){

    int n;
    cout<<"Enter the position"<<endl;
    cin>>n;

    cout<<"Fibonacci number at given position is:"<<fib(n)<<endl;
}
