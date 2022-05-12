class Solution
{
public:
    int minNumberInRotateArray(vector<int> rotateArray)
    {
        int left = 0;
        int right = rotateArray.size() - 1;
        while (left < right)
        {
            int mid = (left + right) / 2;
            //最小的数字在mid右边
            if (rotateArray[mid] > rotateArray[right])
                left = mid + 1;
            //无法判断，一个一个试
            else if (rotateArray[mid] == rotateArray[right])
                right--;
            //最小数字要么是mid要么在mid左边
            else
                right = mid;
        }
        return rotateArray[right];
    }
};