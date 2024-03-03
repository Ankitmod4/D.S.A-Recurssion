# include <iostream>
using namespace std;
int swap(int i,int j){
    int temp=i;
    i=j;
    j=temp;
}
int reverse(string &s,int i,int j){
    cout<<"call recieved for "<<s<<endl;
    // base case
    if(i>j){ 
        return false;
    }
    // processing 
    swap(s[i],s[j]);
    i++;
    j--;
    // recursive relation
    reverse(s,i,j); 
}
int main(){
string s="ankit";

reverse(s,0,s.length()-1); 
cout<<s;

    return 0;
}