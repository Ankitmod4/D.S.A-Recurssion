# include <iostream>
using namespace std;
int reachHome(int source,int destination){
    cout<<"Source "<<source<<" "<<"destination "<<destination<<endl;
    // Base Case
    if(source==destination){
        cout<<"Pahuch gya"<<endl;
        return 1 ;
    }
    // Processing
    source++;
    // Recursive relation
    reachHome(source,destination);
    
}
int main(){
int source=1;
int destination=10;

reachHome(source,destination);

    return 0;
}