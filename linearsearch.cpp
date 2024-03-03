# include <iostream>
using namespace std;
bool search(int arr[],int n,int key){
    // base condition
    if(n==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }
    // recursive relation
    else{
        return search(arr+1,n-1,key);
    }
}

int main(){
int arr[7]={1,2,3,4,5,6,10};
int n=7;
int key=23;
search(arr,n,key);
bool ans=search(arr,n,key);
if(ans){ 
    cout<<"found";
} 
else{
    cout<<"not found";
}
    return 0;
}
