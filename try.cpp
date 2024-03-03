# include <iostream>
using namespace std;

int check(string &name,int i,int j){
    
    // base case
    if(i>j){ 
        return true; 
    }
    // recursive call
    if(name[i]=name[j]){
       return check(name,i+1,j-1);
    }
    
} 
int main(){
   string name="abba";
   int i,j;
  bool ans= check(name,0,name.length()-1);;
  if(ans){
    cout<<"string is a pallindrome string";
  }
  else{
    cout<<"not a pallindrome string";;
  }
    return 0;
}