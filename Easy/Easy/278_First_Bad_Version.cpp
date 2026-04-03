class Solution
{
    public:
        long long firstBadVersion(long long n)
        {
            long long left = 1;
            long long right = n;
            while (left < right)
            {
                long long mid = (right + left) / 2;
                if (isBadVersion(mid))
                {
                    right = mid;
                }
                else
                {
                    left = mid + 1;
                }
            }
            return left;
        }
};
