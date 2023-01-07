#include<iostream>
using namespace std;


//Binary search program...

/*first create binary search function and start=0 and end=size-1 
and also mid=(start+end)/2|
*/

// int binarysearch(int arr[], int size, int key){
//     int start=0;
//     int end=size-1;

//     int mid=(start+end)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }

//         mid=(start+end)/2;
//     }
//     return -1;
// }

// int main(){
//     int binary[8] ={2,5,7,9,12,15,16,17};

//     int index= binarysearch(binary,8,16);
//     cout<<"Index of key is "<<index;

//     return 0;
// }

/* Q 1.  Find the first and last occr of given element in the array*/
// first create first occr function and last occur function


// firstoccur(int arr[], int size, int key){
//     int start=0;
//     int end=size-1;
//     int ans=-1;

//     int mid=(start+end)/2;

//     while(start<=end){

//         if(key==arr[mid]){
//             ans=mid;
//             end=mid-1;
//         }
//         if (key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start+mid)/2;
//     }
//     return ans;
// }
// lastoccur(int arr[], int size, int key){
//     int start=0;
//     int end=size-1;
//     int ans=-1;

//     int mid=(start+end)/2;

//     while(start<=end){

//         if(key==arr[mid]){
//             ans=mid;
//             start=mid+1;
//         }
//         if (key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start+mid)/2;
//     }
//     return ans;
// }

// int main(){

//     int arr[6]={2,3,3,6,7,8};

//     int index=firstoccur(arr,6,3);
//     int ind=lastoccur(arr,6,3);
//     cout<<"Index of first occr of 3 is "<<index<<endl;
//     cout<<"Index of last occr of 3 is "<<ind<<endl;
// return 0;
// }

/* Q2. find the peak element of the given mountain array*/

// int peak(int arr[], int size){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;

//     while(start<end){
//         if(arr[mid]<arr[mid+1]){
//             start=mid+1;
//         }
//         else{
//             end=mid;
//         }
//         mid=(start+end)/2;
//     }
//     return arr[mid];
// }

// int main(){

//     int mountain[5]={2,3,4,5,1};

//     int index=peak(mountain,5);

//     cout<<"peak element in this mounatin array is "<<index<<endl;
// }


//Q3.  find pivot element in an array

// int getpivot(int arr[], int size){
//     int start=0;
//     int end=size-1;

//     int mid=(start+end)/2;

//     while(start<end){
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }

//         else{
//             end=mid;
//         }

//         mid=(start+end)/2;
//     }

//     return end;
// }

// int main(){
//     int arr[9]={80,90,10,20,30,40,50,60,70};
//     int asd[9]={7,8,9,1,2,3,4,5,6};

//     int index =getpivot(arr,9);
//     int asr = getpivot(asd,9);

//     cout<<" Index of Pivot element is "<<index<<endl;
//     cout<<" Index of Pivot element is "<<asr<<endl;
// }



// Square root of a number using binary search

// long long int sqr(int num){
//     int start=0;
//     int end=num;
//     long long int ans=-1;
//     long long  int mid=(start+end)/2;

//     while(start<=end){
//         long long int square=mid*mid;
//         if((square)==num){
//         return mid;
//     }
//     else if((square)>num){
//         end=mid-1;
//     }
//     else if((square)<num){
//         ans=mid;
//         start=mid+1;
//     }
//     mid=(start+end)/2;
// }
//   return ans;
// }


// int main(){
//     long long num;
//     cout<<"Enter the number"<<endl;
//     cin>>num;
//     long long ind=sqr(num);
//     cout<<ind<<endl;
// }


int pivot(int arr[], int size){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<mid){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }

         mid=(start+end)/2;
    }
    return end;
}

int main(){
    int arr[6]={5,6,7,8,1,2};

    cout<<"pivot element is "<<pivot(arr,6)<<endl;
}
