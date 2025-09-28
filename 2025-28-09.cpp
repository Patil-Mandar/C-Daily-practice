class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n = nums.size();
        for(int i=0;i<n-2;i++){
                int j = i+1;
                int k = j+1;
                int a = nums[i];
                int b = nums[j];
                int c = nums[k];
                if(
                    (a+b)>c &&
                    (c+b)>a &&
                    (a+c)>b
                ) {
                    return a + b + c;
                }
        }

        return  0;
    }
};