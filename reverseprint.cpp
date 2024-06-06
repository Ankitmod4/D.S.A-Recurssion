# include <iostream>
using namespace std;
void PrintingReverse(int n){
  if(n==0){
    return ;
  }
  
 cout<<n<<" ";
 PrintingReverse(n-1);

}
int main(){

PrintingReverse(10);




    return 0;
}