#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main(){
    std::vector<std::string> strs = {"eat","tea","tan","ate","nat","bat"};
    std::unordered_map<std::string, std::vector<std::string>> umap;

    for(auto word : strs){
        std::string sorted_word = word;
        std::sort(sorted_word.begin(), sorted_word.end());
        umap[sorted_word].push_back(word);
    }

    std::vector<std::vector<std::string>> ans;
    for(auto c : umap){
        ans.push_back(c.second);
    }

    for(auto c : ans){
        for(auto a : c){
            std::cout << a << " ";
        }
    }


    return 0;
}



