#include<iostream>
using namespace std;
int mergedarrays(int arr1[],int size1, int size2, int arr2[],int comarr[]){
    int i=0,j=0,k=0;
     
    //merged the array
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j])
        comarr[k++] = arr1[i++];
        else{
            comarr[k++] = arr2[j++];
        }
    }
    //store the remainig elements
    while(i<size1){
        comarr[k++] = arr1[i++];
    }

    while(j<size2){
        comarr[k++]= arr2[j++];
    }

}

int main(){
    int size1, size2;

    cout<<"Enter the  no elements in arr1 : ";
    cin>>size1;

    int arr1[size1];
    cout<<"enter the elemnts in array1 :";
    for(int i =0;i<size1;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the number of second array :";
    cin>>size2;

    cout<<"enter the elements :";
    int arr2[size2];
    for(int j =0;j<size2;j++){
        cin>>arr1[j];
    }
    int comarr[size1 + size2];

    //calling the function
    mergedarrays(arr1,size1,size2,arr2,comarr);

    // return the new array
    cout << "Merged sorted array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << comarr[i] << " ";
    }
    cout << endl;

 
}
