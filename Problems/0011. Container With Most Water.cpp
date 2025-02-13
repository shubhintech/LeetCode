class Solution {
public:
    int maxArea(vector<int>& height) {
        int count = 0, mx = 0;
        int start = 0, end = height.size() - 1;
        int startMax = height[start], endMax = height[end];

        while (start <= end) {
            startMax = max(height[start], startMax);
            endMax = max(height[end], endMax);
            count = (end - start) * (min(startMax, endMax));
            if (mx < count) {
                mx = count;
            } else {
                if (height[start] > height[end]) {
                    end--;
                } else {
                    start++;
                }
            }
        }
        return mx;
    }
};
