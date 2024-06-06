# include <iostream>
using namespace std;
int  Sum(int n){
  if(n==1){
    return 1 ;
  }
  int ans=n+Sum(n-1);
  return ans;


}
int main(){

cout<<Sum(3);




    return 0;
}