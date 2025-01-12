#include <iostream>
#include <vector>
#include <climits>

int solve() {
    std::vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    
    int start = 0;
    int end = 0;
    int sum = 0;
    int min_sum = INT_MAX;

    for (end; end < nums.size(); end++) {
        sum += nums[end];

        while (sum >= target) {
            min_sum = std::min(min_sum, end - start + 1);
            sum -= nums[start];
            start++;   
        }
    }
    return min_sum;
}

int main() {
    std::cout << solve();
    return 0;
}