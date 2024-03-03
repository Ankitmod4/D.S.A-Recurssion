# include <iostream>
using namespace std;

int print(int arr[],int start,int end){
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" "; 
    }  cout<<endl;
}
bool search(int arr[],int start,int end,int key){
    cout<<endl;
    print(arr,start,end);
    int mid=(start+end)/2;
    // base case
    if(start>end){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    // recursive relation
    if(arr[mid]<key){
    return search( arr,mid+1,end,key);
    }
    if(arr[mid]>key){
        return search( arr,start,mid-1,key);
    }
}
int main(){
int arr[7]={1,4,5,7,8,9,11};
int start=0;
int end=6;
int key=11;

search(arr,start,end,key);
bool ans=search(arr,start,end,key);
if(ans){
    cout<<"present";
}
else{
    cout<<"Not present";
}
    return 0;
}