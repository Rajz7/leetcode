#include <iostream>
#include <vector>

void sortedSquare(std::vector<int> nums) {
    std::vector<int> ans(nums.size());
    int x = nums.size() - 1;
    int i = 0;
    int j = nums.size() - 1;

    while(i <= j) {
        int a = nums[i] * nums[i];
        int b = nums[j] * nums[j];

        if(a > b) {
            ans[x--] = a;
            i++;
        }
        else{
            ans[x--] = b;
            j--;
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " ";
    }

}

int main() {
    std::vector<int> nums = {-4, -1, 0, 3, 10};
    sortedSquare(nums);
    return 0;
}