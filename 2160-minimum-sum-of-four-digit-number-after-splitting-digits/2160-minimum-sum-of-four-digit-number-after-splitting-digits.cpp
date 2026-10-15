class Solution {
public:
    int minimumSum(int num) {
        int one=num%10;
        num/=10;
        int two=num%10;
        num/=10;
        int three=num%10;
        num/=10;
        int four=num%10;
        num/=10;
        vector<int> arr(4);
        arr[0]=one;
        arr[1]=two;
        arr[2]=three;
        arr[3]=four;
        sort(arr.begin(),arr.end());
        int new1=arr[0];
        new1*=10;
        new1+=arr[2];
        int new2=arr[1];
        new2*=10;
        new2+=arr[3];
        return new1+new2;
    }
};