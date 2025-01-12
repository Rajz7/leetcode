#include <iostream>
#include <vector>
#include <algorithm>

double solve () {
    std::vector<int> nums1 = {1, 2};
    std::vector<int> nums2 = {3, 4};
    int i = 0, j = 0;
    int min_len = std::min(nums1.size(), nums2.size());
    std::vector<int> ans;


    while(i < min_len || j < min_len) {
        if (nums1[i] < nums2[j]) {
            while (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            ans.push_back(nums2[j]);
            j++;
        }
        else if (nums2[j] < nums1[i] ){
            while (nums2[j] < nums1[i]) {
                ans.push_back(nums2[j]);
                j++;
            }
            ans.push_back(nums1[i]);
            i++;
        }
        else {
            ans.push_back(nums1[i]);
            ans.push_back(nums2[j]);
            i++;
            j++;
        }
    }

    for (int i = 0; i < ans.size(); i++) std::cout << ans[i] << " ";

}

int main () {
    std::cout << solve();
    return 0;
}