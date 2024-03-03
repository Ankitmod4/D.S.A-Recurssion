# include <iostream>
using namespace std;
void swap(int arr[],int i){
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp; 
}
void sort(int arr[],int size){
    // base case
    if(size==0||size==1){
        return ;
    }
    // ---to solve one case baki recurssion sambhal lega
    for(int i=0;i<size-1;i++){
     if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
     }
    }
    // recursive call
    return sort(arr,size-1);
}
int main(){ 
int arr[6]={9,6,1,2,4,8};
int size=6;
sort(arr,size);

// for printing after sort
for(int i=0;i<=5;i++){
    cout<<arr[i]<<endl;
}

    return 0;
}