class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> idx(n);
        int st=0,end=0;
        vector<int> res;
        
        for (int i =0;i<n;i++) {
            if (end<st && idx[end]<=i-k) {
                end++;
            }
            
            while (end<st && nums[idx[st-1]]<nums[i]) {
                st--;
            }
            
            idx[st++]=i;
            
            if (i>=k-1) {
                res.push_back(nums[idx[end]]);
            }
        }
        
        return res;
    }
};