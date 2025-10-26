#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currentsum = 0, maxsum = INT_MIN;

    for (int val : nums) {
        currentsum += val;
        maxsum = max(currentsum, maxsum);

        if (currentsum < 0)
            currentsum = 0;
    }
    return maxsum;
}

// Example usage
int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}