#include<iostream>
using namespace std;


//Q1.-  Print hello world
// int main(){
//     cout<<"Hello world"<<endl;
// }

//Q2. -- print integer number enter by user
// int main(){
//     int n;
// cout<<"Enter the Integer"<<endl;
// cin>>n;
// cout<<"You have entered "<<n<<endl;
// }

//Q3----
// int main(){
//     int a, b; 
//     cout<<"Enter the two number"<<endl;
//     cin>>a>>b; 
//     cout<<"The sum of your two number is "<<a+b<<endl;
// }

//Q4--------4) Write a program where the user is asked to enter two
// integers (divisor and dividend) and the quotient and the
// remainder of their division is computed.(Both divisor and
// dividend should be integers.)

// int main(){
//     int dividened, divisor,quotient,remainder;
//     cout<<"Enter divisor"<<endl;
//     cin>>divisor;
//     cout<<"Enter dividened"<<endl;
//     cin>>dividened;

//     quotient = dividened/divisor;
//     remainder = dividened%divisor;

//     cout<<"Your quotient value is "<<quotient<<endl;
//     cout<<"Your remainder value is "<<remainder<<endl;
//     }

//Q5------Write a Program to Find Size of int, float, double and char
//in your computer

// int main(){
//     cout<<"The size of int is : "<<sizeof(int)<<" byte "<<endl;
//     cout<<"The size of char is : "<<sizeof(char)<<" byte "<<endl;
//     cout<<"The size of double is : "<<sizeof(double)<<" byte "<<endl;
//     cout<<"The size of float is : "<<sizeof(float)<<" byte "<<endl;
//     return 0;
//  }

//Q6.------) Write a Program to Swap Two Numbers

void swapPointer(int *a, int *b){
    int temp =*a;
    *a = *b; 
    *b = temp;
    
}

int main(){
    int x = 4, y =5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x, &y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;


    return 0;


}

//Q7.-----Write a Program to Find ASCII Value of a Character

// int main(){
//     char c;
//     cout<<"Enter the character"<<endl;
//     cin>>c; 
//     cout<<"The ASCII value of character "<<c<<" is "<< int(c)<<endl;
// }

// Q8.-----Write a Program to Multiply two decimal Numbers
// entered by User

// int main(){
//     float num1;
//     cout<<"Enter the decimal number 1"<<endl;
//     cin>>num1;

//     float num2;
//     cout<<"Enter the decimal number 2"<<endl;
//     cin>>num2;

//     cout<<" Multiplicaton of given num1 and num2 is "<<float(num1*num2)<<endl;
//     return 0;
// }

//---------If ELSE CONDITION--------------

// Q1) Write a Program to Check Whether Number is Even or
// Odd

// int main(){
//     int n;
// cout<<"Enter the integer value"<<endl;
// cin>>n;
// if(n % 2==0){
//     cout<<"Even number"<<endl;

// }

// else{
//     cout<<"Odd number"<<endl;
// }
// return 0;
// }

// Q2) Write a Program to Check Whether a Character is
// Vowel or Consonant.
//Tough one--------

// Q3) Write a Program to Find Largest Number Among Three
// Numbers entered by users

// int main(){
//     int n1, n2, n3;
//     cout<<"Enter the three number"<<endl;
//     cin>>n1>>n2>>n3;
//     if((n1>=n2) && (n1>= n3))
    //    cout<<"Largest number is "<<n1<<endl;
    
    // else if((n2>=n1) && (n1>=n3))
    //     cout<<"Largest number is "<<n2<<endl;
    
    // else 
    //     cout<<"Largest number is "<<n3<<endl;
//     return 0;

// }

// Q4 Write a Program to Check whether a year entered by
// user is Leap Year or not

int main(){
    int y;
    cout<<"Enter Year"<<endl;
    cin>>y;

    if(y % 4 == 0)
    cout<<"Leap year"<<endl;
  
    else
    cout<<"Not a leap year"<<endl;


    return 0;

// }

// int main(){
//     int a, b;
//     sum = int(a + b);
//     cout<<:
//     cin>> a, break;
//     cin cout int integer function and thre cofficient5 l;

// }


// int main(){
//     int a=10, b= 10, c =25;
//     cout<<"The sum of three number is "<<a+b+c<<endl;
//  
