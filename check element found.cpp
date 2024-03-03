# include <iostream>
using namespace std;
int sorted(int arr[],int n){
    // Base case
    if(n==0||n==1){ 
        return true;
    }
    if(arr[0]>arr[1]){ 
        return false;
    }
    else{
        return sorted(arr+1,n-1);
    }
}
int main(){
int arr[7]={1,2,3,4,5,6,9};
int n=7; 
sorted(arr,n);
bool ans=sorted(arr,n);
if(ans){  
    cout<<"Sorted";
}
else{
    cout<<"Not sorted";
}
    return 0;
}