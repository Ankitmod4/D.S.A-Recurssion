# include <iostream>
using namespace std;
void saydigit(string arr[],int n){
      
     // Base condition
    if(n==0){
     return ;    
    }

    //  Processing
    int digit=n%10; 
    n=n/10;
     
 
 // Recursive relation 
    saydigit(arr,n); 
    cout<<arr[digit]<<" ";
    
}
   
int main(){

string arr[10]={"zero","one","two","three","four","five","six","seven", "eight","nine"};
int n;
cin>>n;

saydigit(arr,n); 

    return 0;
}