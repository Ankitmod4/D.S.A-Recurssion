# include <iostream>
using namespace std;
check(string s,int i,int j){
    // base case
    if(i>=j){
        return true;
    } 
    
    // recursive relation
    if(s[i]!=s[j]){
        return false;
    }
    else{
        return check(s, i+1 , j-1);
    }
}
int main(){
string s="abba"; 
check(s,0,s.length()-1);
bool ans=check(s,0,s.length()-1);
if(ans){
    cout<<"Yes it is pallindrome";
}
else{
    cout<<"Not a pallindrome";
}

    return 0;
}





        