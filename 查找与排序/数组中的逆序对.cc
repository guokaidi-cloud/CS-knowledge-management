class Solution
{
public:
    int mod = 1000000007;
    int InversePairs(vector<int> data)
    {
        int n = data.size();
        vector<int> res(n);
        return mergeSort(0, n - 1, data, res);
    }

    int mergeSort(int left, int right, vector<int> &data, vector<int> &temp)
    {
        //停止划分
        if (left >= right)
            return 0;
        //取中间
        int mid = (left + right) / 2;
        //左右划分合并
        int res = mergeSort(left, mid, data, temp) + mergeSort(mid + 1, right, data, temp);
        //防止溢出
        res %= mod;
        int i = left, j = mid + 1;
        for (int k = left; k <= right; k++)
            temp[k] = data[k];
        for (int k = left; k <= right; k++)
        {
            // 左边数组已经放完
            if (i == mid + 1)
                data[k] = temp[j++];
            // 右边数组已经放完||左边比右边小,这个应该是大概率的情况
            else if (j == right + 1 || temp[i] <= temp[j])
                data[k] = temp[i++];
            //左边比右边大，答案增加
            else
            {
                data[k] = temp[j++];
                //统计逆序对
                res += mid - i + 1;
            }
        }
        return res % mod;
    }
};