class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        int maxArea = 0;

        for (int i = 0; i <= n; i++) {
            int currHeight = (i == n) ? 0 : heights[i];

            while (!s.empty() && currHeight < heights[s.top()]) {
                int mid = s.top();
                s.pop();

                int h = heights[mid];
                // If the stack is empty, the bar spans from index 0 to i - 1 (width = i)
                int width = s.empty() ? i : (i - s.top() - 1);
                maxArea = max(maxArea, h * width);
            }
            s.push(i);
        }

        return maxArea;
    }
};