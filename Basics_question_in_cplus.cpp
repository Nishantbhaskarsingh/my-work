#include <iostream>
#include<math.h>
#include<cmath>
#include<string.h>
using namespace std;
 
int main(){

//Q1......Given number is even or odd

// int n;
// cout<<"Enter a number"<<endl;
// cin>>n;
// if(n%2==0){
//     cout<<"Even Number"<<endl;
// }
// else{
//     cout<<"Odd Number"<<endl;
// }

//Q1.2.......Print odd or even number upto n...
// int i, n;
// cout<<"Enter a number"<<endl;
// cin>>n;

// for(i=1;i<=n;i++){
//     if(i%2 !=0){
//         cout<<i<<" ";
//     }
// }


//Q1.3......Print odd or even number inbetween given limit....
//int i, min_limit,max_limit;
// cout<<"Enter Minimum limit and Maximum limit: "<<endl;
// cin>>min_limit>>max_limit;


// for(i=min_limit;i<=max_limit;i++){
//     if(i%2 !=0){
//         cout<<i<<" ";
//     }
// }


//Q1.4........print n natural number.......
// int i, n,sum=0;
// cout<<"Enter a number"<<endl;
// cin>>n;
// for(i=1;i<=n;i++){

    
//     sum=sum+1;
//     cout<<sum<<" ";
// }

//Q1.5......print sum of n natural number.......
// int i, n,sum=0;
// cout<<"Enter a number"<<endl;
// cin>>n;
// for(i=1;i<=n;i++){

    
//     sum=sum+i;
    
// }
// cout<<sum;
// }


//Q2 .......Swapping of two numbers using another variable

// int a=10,b=20,c;
// c=a;// a...c(c=10)(a)
// a=b;//b....a(a=20)(b)
// b=c;//c....b(b=10)(c)

// cout<<"After swapping values "<<a<<" "<<b;



//Q2.2......Swapping of two number without using third variable

// int a=10, b=20;
// a=a+b;//new a=30
// b=a-b;//30-20=10
// a=a-b;

// cout<<"After swapping Numbers are "<<endl<<a<<endl<<b<<endl;



//Q3.......Checking the charcter is vowel or consonant....input taken by user

// char c;
// cout<<"Enter a charcter value"<<endl;
// cin>>c;

// if(c=='a'|| c=='A'|| c=='e'|| c=='E'|| c=='i'|| c=='I'|| c=='o'|| c=='O'|| c=='u'|| c=='U')
// {
//     cout<<"Vowel"<<endl;
// }
// else{
//     cout<<"Consonant"<<endl;
// }



//Q4........Fibonacci series position.....

// int fib(int n){
//     if (n<2){
//         return n;
//     }
//     return fib(n-2)+fib(n-1);
// }

// int main(){
//     int a;
//     cout<<"Enter the position"<<endl;
//     cin>>a;
//     cout<<"Fibonacci sequence at given position is: "<<fib(a)<<endl;

// }



//Q4.2.......print fibonacci series...
// int n1=0,n2=1,n3,i;
// cout<<n1<<" "<<n2<<" ";
// for(i=1;i<=10;i++){
//     n3=n1+n2;
//     n1=n2;
//     n2=n3;
//     cout<<n3<<" ";
// }



//Q5.......Number is prime or not.....

// int n ,i;
// cout<<"Enter a number"<<endl;
// cin>>n;
// for(i=2;i<n;i++){  // first we checking the division
//     if(n%i==0){
//         cout<<"Number is not prime"<<endl;
//         break;
//     }
// }

// if(n==i){// if it divisible then n==i and it is prime number
//     cout<<"Number is prime"<<endl;
// }



//Q6.....Sum of digit input is taken by user......

// int n,r,sum=0;
// cout<<"Enter the number "<<endl;
// cin>>n;
// while(n!=0)
// {
//     r=n%10;//suppose n=234.....234%10=4....first num to add
//     sum=sum+r;//intial sum =0 given....sum=0+4=4
//     n=n/10;//234/10=23.....again it to the loop and checking
// }
// cout<<"The sum is "<<sum<<endl;



//Q7........Reverse of a given number.....

// int n,r,sum=0;
// cout<<"Enter the number"<<endl;
// cin>>n;

// while(n!=0)
// {
//     r=n%10;//eg..786..786%10=6
//     sum=sum*10+r;//..0*10+6=6
//     n=n/10;//786/10=78....going in next 78
// }

// cout<<"Reverese of a number is "<<sum<<endl;



//Q8....check given number is palindrome or not....eg..232,121,232,4224..
// int n,r,sum=0,t;
// cout<<"Enter the number"<<endl;
// cin>>n;
// t=n;

// while(n!=0)
// {
//     r=n%10;//eg..786..786%10=6
//     sum=sum*10+r;//..0*10+6=6
//     n=n/10;//786/10=78....going in next 78
// }
// if(sum==t){//sum means reverse....if t==sum means initaial number = reverse number
//     cout<<"Palindrome number"<<endl;
// }
// else{
//     cout<<"Not a palindrome number"<<endl;
// }



//Q9......Armstrong number.......eg 153..cube of ever num and sum of it is equal to same number.....
// int n,r,sum=0,t;
// cout<<"Enter the number"<<endl;
// cin>>n;
// t=n;

// while(n!=0)
// {
//     r=n%10;
//     sum=sum+r*r*r;
//     n=n/10;
// }
// if(sum==t){
//     cout<<"Armstrong number"<<endl;
// }
// else{
//     cout<<"Not a Armstrong number"<<endl;
// }




//Q10.....Hcf of a two numbers.......

//concept....we take first is larger number than second
//eg 16 and 12....first take 16%12=4...nad then 12%4=0 so hcf is 4...when the remainder is zero then that is the answer

// int a,b,hcf,r;
// cout<<"Enter two numbers"<<endl;
// cin>>a>>b;

// while(true){
//     r=a%b;
//     a=b;
//     b=r;
//     hcf=b;
//     if(r==0){
//         break;
//     }
//     cout<<"Hcf is "<<hcf<<endl;
// }


//Q11......LCM Of two numbers........

//     int a,b, r,lcm;

//     cout<<"Enter Bigger number first"<<endl<<"Enter smaller number "<<endl;

//     cin>>a>>b;

//     while(true){

//         lcm=a;
//         r=a%b;//20%10=0 means lcm is 20

//         if(r==0){
//         break;
//         }
//         a=a*2;//20%16 r is not zero to 20 ko 2 se multiply karte rahenge tab tak remainder zero na ho
        
//     }

//    cout<<"Lcm is "<<lcm<<endl;


//Q12......Hcf and Lcm together........

// int a,b,x,y,r,lcm,hcf;
// cout<<"Enter the two number"<<endl;
// cin>>a>>b;
// x=a;
// y=b;

// // one formula (a*b=hcf*lcm)...if we find one of them then we can find other one ver easily 
// while(true){
//     lcm=a;
//     r=a%b;

//     if(r==0){
//         break;
//     }
//     a=a*2;

// }

// cout<<"Lcm is "<<lcm<<endl;
// hcf=x*y/lcm;
// cout<<"Hcf is "<<hcf<<endl;



//Q12..........Pattern printing...
 //*
 // **
 // ***
 // *****

//  int i, j;
//  for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         if(j<=i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }

//     cout<<"\n";
//  }

 //Q13........pattern printing
 //*****
 //****
 //***
 //**
 //*

//   int i, j;
//  for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         if(j<=6-i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }

//     cout<<"\n";
//  }


//Q14....pattern.........
//*****
// ****
//  ***
//   **
//    *
//   int i, j;
//  for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         if(j>=i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }

//     cout<<"\n";
//  }

//Q15..pattern..
//     *
//    **
//   ***
//  ****
// *****

//  int i, j;
//  for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         if(j>=6-i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }

//     cout<<"\n";
//  }


//Q16......pattern printing(Pramid printing).....
//     *    
//    ***
//   *****
//  *******
// *********

//  int i, j;
//  for(i=1;i<=5;i++){
//     for(j=1;j<=9;j++){
//         if((j>=6-i)&&(j<=4+i)){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }

//     cout<<"\n";
//  }



//Q17 ......... Reverse of pyramid...


// int i, j;
//  for(i=1;i<=5;i++){
//     for(j=1;j<=9;j++){
//         if((j>=i)&&(j<=10-i)){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }

//     cout<<"\n";
//  }

// Q18........REmove Vowel from string........

// string str;
// cout<<"Enter Words"<<endl;
// getline(cin,str);

// for(int i=0;i<str.length();i++){
//     if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
//         cout<<"";
//     }
//     else{
//         cout<<str[i];
//     }
        
// }


//Q 19...... To check Enter number is perfect square or not........

// int n;
// cout<<"Enter a number "<<endl;
// cin>>n;

// int s= sqrt(n);//  17==4.2...
// if(s*s==n){
//     cout<<"Enter number is perfect square "<<endl;
// }

// else{
//     cout<<"Enter number is not a perfect square "<<endl;

// }


// Q.20.........find all factors of a number............

// int n ,i;
// cout<<"enter a number "<<endl;
//  cin>>n;

// for(i=2;i<n;i++){
//     if(n%i==0){
//         cout<<i<<" ";
//     }

// }

//Q.21.........find all prime factors of a numbers.......

//Q.22......find the roots of the quadtric equation.....

// float a,b,c,d,r1,r2;
// cout<<"Enter the value of a b and c "<<endl;
// cin>>a>>b>>c;

// d=b*b - 4*a*c;  // find the d first
// if(d>0){
//     cout<<"Roots are real and unequal "<<endl;
//     r1= (-b + sqrt (d))/(2*a);  // solution of root1
//     r1= (-b - sqrt (d))/(2*a);  // solution of root 2
//     cout<<r1<<" "<<r2<<endl;    // printing the solution of root

// }
// else if(d==0){
//     cout<<"Roots are real and equal "<<endl;
//     r1= -(b)/(2*a);
//     r2= -(b)/(2*a);
//     cout<<r1<<" "<<r2<<endl;

// }
// else{
//     cout<<"Roots are Imaginary"<<endl;
// }


//Q23.....Reverse of an array input taken from user......

// int i,n;
// cout<<"Enter the size of array"<<endl;
// cin>>n;
// int arr[n];
// cout<<"Enter the array value "<<endl;

// for(i=0;i<n;i++){ //  taking the array value
//     cin>>arr[i];
// }

//     for(i=n-1;i>=0;i--){  // reversing the index from n-1 to 0.
//     cout<<arr[i]<<" ";
// }

//Q 24........ reverse of a string.......

// char str[20];
// cout<<"Enter the string"<<endl;
// cin.get(str,20);

// cout<<strrev(str); 












}