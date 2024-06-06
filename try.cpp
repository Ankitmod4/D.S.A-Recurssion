# include <iostream>
# include <vector>
using namespace std;
void digitint(int n,vector<int>&v){
  if(n==0){
    return ;
  }
 int digit= n%10;
n=n/10;
digitint(n,v);
v.push_back(digit);
// cout<<digit<<endl;
}

int main(){
   vector<int>v;
 digitint(452,v);

 for(int i=0;i<v.size();i++){
  cout<<v[i]<<endl; 
 }
    return 0;
}