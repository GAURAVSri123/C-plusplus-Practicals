// remove dublicates from an array ...

#include<iostream>
using namespace std;
int removedublicates(int arr[],int n){
    if(n==0 || n==1){
        return n;
    }
    int temp[n];   //temperory array
    int j= 0 ;          //index of temperory arry

    for(int i =0;i<n-1;i++){
        if(arr[i] !=arr[i+1]){        //if adject index not equal to then 
            temp[j++]=arr[i];       // arry of index i is store in temperory arry and increment by 1
        }
       
    }
    temp[j++] = arr[n-1];    // store thelast element 

    //now we back to the store in original array
    for(int i=1;i<j;i++){
        arr[i] = temp[i];
    }
    return j;
}

int main(){
    int n;
    cout<<"enter the no of elements : ";   //number the total  elements
    cin>>n;

    int arr[n];
    cout<<"enter the elements :";
    for(int i =0;i<n;i++){ // number the elements
        
        cin>>arr[i];
    }
    //now calling the function and stroe the array in new size variable

    int newsize = removedublicates(arr,n);

    //print the new size array
    cout<<"the new array is -->";
    for(int i =0;i<newsize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}