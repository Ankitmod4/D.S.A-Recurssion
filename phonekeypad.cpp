class Solution {
    private:
  void   solve(string digits,string mapping[], vector<string>&ans,string output,int index){
        // base case
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        }
        // processing
        int number=digits[index]-'0';
        string value=mapping[number];

        // recursive relation
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,mapping,ans,output,index+1);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    if(digits.length()==0){
        return ans; 
    }
    string output;
    int index=0;
     solve(digits,mapping,ans,output,index);
     return ans; 
    }
};