# include <iostream>
# include <vector>
using namespace std;

int main(){

int arr[5]={10,20,30,40,50};
vector<int>v;


for(int i=0;i<5;i++){
    if(i%2==0){
    v.push_back(arr[i]);
     
    }
}
int max=v[0];
for(int j=0;j<v.size();j++){
 if(max <=v[j]){
    max=v[j];
 }
    
}

cout<<max<<" ";


    return 0;
}