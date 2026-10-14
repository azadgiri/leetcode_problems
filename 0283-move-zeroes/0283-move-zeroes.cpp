class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int noz=0;
        vector<int>arr;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) arr.push_back(nums[i]);
            else noz++;
        }
        for(int i=1;i<=noz;i++){
            arr.push_back(0);
        }
        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
    }
};