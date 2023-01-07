#include<iostream>
using namespace std;

 int inssort(int arr[],int n){

    int i,j,temp;
    for(i=1;i<n;i++){
    temp =arr[i];

    for(j=i-1;j>=0;j--){

        if(arr[j]>temp){
           arr[j+1] = arr[j];
        }

        else{
            break;
        }
    }
    arr[j+1]=temp;
     }
}

int printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5]={23,6,12,3,0};

    inssort(arr,5);
    cout<<"Sorted Array is "<<endl;
    printArray(arr,5);
}