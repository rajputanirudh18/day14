class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector<int> ans(nums.size());
        int i=0; //most -ve number
        int j=nums.size()-1; //most +ve number
        int idx=nums.size()-1;
       while(i<=j){
           int val1=nums[i]*nums[i];
           int val2=nums[j]*nums[j];
            if(val1>val2){
                ans[idx]=val1;
                i++;
            }
            else{
                ans[idx]=val2;
                j--;
            }
           idx--;
       }
        return ans;
        
    }
};