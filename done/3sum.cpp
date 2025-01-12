#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> nums = {-1,0,1,2,-1,-4};
    std::vector<std::vector<int>> ans;

    std::sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 2; i++){
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int j = i + 1;
        int k = nums.size() - 1;
        while(j < k){
            if(nums[j] + nums[k] + nums[i] == 0 ){
                ans.push_back({nums[i], nums[j], nums[k]});

            while (j < k && nums[j] == nums[j + 1]) 
                j++;
        
            while (j < k && nums[k] == nums[k - 1]) 
                k--;
            
            j++;
            k--;
            }

            else if(nums[j] + nums[k] + nums[i] < 0)
                j++;

            else
                k--;
        }
    }
    for(int i = 0; i < ans.size(); i++)
        for(int j = 0; j < ans[i].size(); j++)
            std::cout << ans[i][j] << " ";

    return 0;
}


