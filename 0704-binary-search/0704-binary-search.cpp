class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid=(start+end)/2;
        
        while(start<=end){
            if(target==nums[mid]){
                return mid;
            }if(target<nums[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
            mid=(start+end)/2;  
        }
        return -1;
    }
};