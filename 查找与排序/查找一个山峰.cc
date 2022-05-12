class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;
        //二分法
        while (left < right)
        {
            int mid = (left + right) / 2;
            //右边是往下，不一定有坡峰
            if (nums[mid] > nums[mid + 1])
                // right = mid的地方需要注意不是mid - 1，这样可以保证right的地方就是波峰
                right = mid;
            //右边是往上，一定能找到波峰
            else
                left = mid + 1;
        }
        //其中一个波峰
        return right;
    }
};