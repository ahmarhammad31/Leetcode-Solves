class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        while(st<=end){
            int midl=(st+end)/2;
            if(nums[midl]==target)
                return midl;
            else if(nums[midl]<target)
                st=midl+1;
            else{
                end=midl-1;
            }
        }
        return st;
    }
};