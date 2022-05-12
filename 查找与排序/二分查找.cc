// 一维数组查找
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = (right - left) / 2 + left;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1;
    }
};

//二维数组查找
class Solution
{
public:
    bool Find(int target, vector<vector<int>> array)
    {
        //优先判断矩阵特殊性
        if (array.size() == 0)
            return false;
        int n = array.size();
        if (array[0].size() == 0)
            return false;
        int m = array[0].size();

        //从最左下方的元素开始往左或者往上走
        for (int i = n - 1, j = 0; i >= 0 && j < m;)
        {
            //元素相同
            if (array[i][j] == target)
            {
                return true;
            }
            else if (array[i][j] > target)
            {
                i--;
            }
            else
            {
                j++;
            }
        }
        //没有找到
        return false;
    }
};