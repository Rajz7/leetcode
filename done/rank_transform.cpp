#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> nums = {40,10,20,30};
    std::vector<int> temp = nums;
    std::unordered_map<int, int> umap; //element, rank
    std::sort(temp.begin(), temp.end());
    std::set<int> set_nums(temp.begin(), temp.end());
    int i = 1;
    for (const auto& elem : set_nums) {
        umap[elem] = i;
        i++;    
    }
    for(int i = 0; i < nums.size(); i++){
        nums[i] = umap[nums[i]];
    }

    for(int i = 0; i < nums.size(); i++){
        std::cout << nums[i] << " ";
    }

    return 0;
}

