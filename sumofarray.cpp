# include <iostream>
using namespace std;
int sum(int arr[],int n){
//   base case
  if(n==0){
    return 0;
  }
  if(n==1){
    return arr[0];
  }
//   recursive relation
return arr[0]+sum(arr+1,n-1);
}
int main(){
int arr[7]={1,2,3,4,5,6,10};
int n=7; 
cout<<sum(arr,n);
    return 0;
}
