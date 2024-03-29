class Solution {
    private:
  void  solve(vector<int>& nums,int index,vector<vector<int>>&ans){
    //   base case
    if(index>=nums.size()){
      ans.push_back(nums);
      return;
    }
    // recursive call
    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        solve(nums,index+1,ans);

         // backtrack
    swap(nums[index],nums[j]);
    }
   

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int index=0;
       vector<vector<int>>ans;
        
        solve(nums,index,ans);
        return ans; 
    }
};