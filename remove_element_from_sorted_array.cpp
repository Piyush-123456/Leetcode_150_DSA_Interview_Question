class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if(nums.empty()){
        return  0;
      }
      int i =0;
      for(int num : nums){
        if(i<2 || num>nums[i-2]){
            nums[i++] = num;
        }
      }
      return i;
    }
};