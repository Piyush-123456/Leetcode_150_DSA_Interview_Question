class Solution {
public:
    int maxArea(vector<int>& height) {
        int first = 0;
        int last = height.size() - 1;
        int ans = 0;
        while (first <= last) {
            ans = max(ans, min(height[first], height[last]) * (last - first));
            if (height[first] < height[last]) {
                first++;
            } else {
                last--;
            }
        }
        return ans;
    }
};
