#include<iostream>
#include<string>
using namespace std;

//......Q1..Given array is sorted or not.....
// bool isSorted(int arr[], int size){

//     //base case
//     if(size==0 || size==1)
//     return true;

//     if(arr[0]>arr[1]){
//     return false;
//     }
//     else{
//         bool remainingpart = isSorted(arr+1, size-1);
//     }

// }

// int main(){

//     int arr[5]= {10,12,13,14,15};

//     if(isSorted(arr,5)){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted"<<endl;
//     }
// }


//.......Q2...find the sum of given array.............

// int getSum(int arr[], int size){

//     //base case
//     if(size==0)
//     return 0;

//     if(size==1)
//     return arr[0];

//     //recursive relation

//     int remainingpart=getSum(arr+1, size-1);
//     int sum= remainingpart + arr[0];

// return sum;
// }

// int main(){
//     int arr[5]={20,12,2,3,5};

//     cout<<"Sum of given array is "<<getSum(arr,5)<<endl;
// }


//Q3...........Linear search using recursion..........

// bool linearSearch(int arr[], int size, int key){

//     if(size==0)
//     return false;

//     if(key==arr[0]){
//         return true;
//     }

//     else{
//         bool remainingpart=linearSearch(arr+1, size-1,key);
//     }
// }

// int main(){
//     int arr[5]={10,24,67,56,46};

//     int key=50
//     ;

//     if(linearSearch(arr,5, key)){
//         cout<<"Key is found"<<endl;
//     }
//     else{
//         cout<<"Key is not found"<<endl;
//     }
// }


//Q4........Binary Search using recursion.............

// bool binarySearch(int arr[], int s, int e, int key){
//     int mid=s+(e-s)/2;

//     // base case
//     if(arr[mid]==key)
//     return true;

//     if(s>e)
//     return false;

//     //RR
//     if(arr[mid]>key){
//     return binarySearch(arr,s,mid-1,key);
//     }
//     else{
//         return binarySearch(arr,mid+1,e,key);
//     }
// }

// int main(){
//     int arr[5]={10,24,35,67,80};
    
//     int key=8;

//     if(binarySearch(arr,0,4,key)){
//         cout<<"Key is found"<<endl;
//     }
//     else{
//         cout<<"Key is not found"<<endl;
//     }
// }

void reverse(int i, int j,string& s){

    // base case
    if(i>j)
    return;

    //first case
    swap(s[i],s[j]);
    i++;
    j--;

    //RR
    reverse(i,j,s);

}

int main(){
    string name="abcde";

    reverse(0,name.length()-1,name);
    cout<<name<<endl;

    return 0;
}