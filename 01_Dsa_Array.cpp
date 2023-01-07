#include<iostream>
using namespace std;
//int main(){
    // Array......

    // Print the given array....

    // int arr[10]={1,2,3,4,5};
    // for(int i=0;i<10;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }                


    // if we want to print arr[10]={1}==1 1 1 1 1 1 1 1 1 1
    // int arr[10];
    // std::fill_n (arr, 10, 1);
    // for(int i=0;i<10;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // Excuting array using function....
    // void printarray(int arr[], int size){
    //     cout<<"Printing the array"<<endl;
    //     //print the array
    //     for(int i=0;i<size;i++){
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<"printing Done"<<endl;
    // }

    // int main(){
    //     //printing 123456789
    //     //int num[10]={1,2,3,4,5,6,7,8,9,10};
    //     //printarray(num,10);
    
    //     //printing only  4 4 4 4 4 4 4 4 4 4 4 4 4 4 
    //     //int arr[10];
    //     //std::fill_n (arr, 10, 4);
    //     //printarray(arr,10);
    // }


    // Q FIND THE MIN AND MAX of given array input taken from user

    // int getMax(int num[],int n){
    //     int max =INT_MIN;    //INT_MIN and INT_MAX means value range from -2^31 to 2^31

    //     for(int i=0;i<n;i++){
    //         if(num[i]>max){
    //             max=num[i];
    //         }
    //     }

    //     return max;
    // }
    //  int getMin(int num[],int n){
    //     int min =INT_MAX;    //INT_MIN and INT_MAX means value range from -2^31 to 2^31

    //     for(int i=0;i<n;i++){
    //         if(num[i]<min){
    //             min=num[i];
    //         }
    //     }

    //     return min;
    // }



    // int main(){
    //     int size;
    //     cin>>size;

    //     int num[100];

    //     //taking input in array
    //     for(int i=0;i<size;i++){
    //         cin>>num[i];
    //     }


    //     cout<<"Maximum value is "<<getMax(num,size)<<endl;
    //     cout<<"Minimum value is "<<getMin(num,size)<<endl;
        
    // }



    // LINEAR SEARCH IN ARRAY...........

    bool search(int arr[],int size,int key){ // key means particular element
        for(int i=0;i<size;i++){
            if (arr[i]==key){
                return 1;
            }
        }
        return 0;
    }
    
    int main(){
        int arr[10]={10,5,-2,6,20,12,23,45,9,11};

        cout<<"Enter the element for search "<<endl;
        int key;
        cin>>key;

        bool found =search(arr,10, key);

        if(found){
            cout<<"Key is prsent "<<endl;
        }
        else{
            cout<<"Key is absent "<<endl;
        }
    }


