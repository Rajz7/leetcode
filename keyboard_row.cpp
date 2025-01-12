#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <unordered_map>

int main() {
    std::vector<std::string> words = {"Hello","Alaska","Dad","Peace"};
    std::unordered_map<char, int> umap = {{'q', 1},
                                          {'r', 1},
                                          {'e', 1},
                                          {'t', 1},
                                          {'y', 1},
                                          {'u', 1},
                                          {'i', 1},
                                          {'o', 1},
                                          {'p', 1},
                                          {'w', 1},

                                          {'a', 2},
                                          {'s', 2},
                                          {'d', 2},
                                          {'f', 2},
                                          {'g', 2},
                                          {'h', 2},
                                          {'j', 2},
                                          {'k', 2},
                                          {'l', 2},

                                          {'z', 3},
                                          {'x', 3},
                                          {'c', 3},
                                          {'v', 3},
                                          {'b', 3},
                                          {'n', 3},
                                          {'m', 3}};
    std::vector<std::string> ans;
    for(std::string& word : words){
        bool in_row = true;
        int word_key = umap[tolower(word[0])];
        for(char c : word){
            in_row = true;
            if(umap[tolower(c)] != word_key){
                in_row = false;
                break;
            }
        }
        if(in_row)
            ans.push_back(word);
    }

    for(int j = 0; j < ans.size(); j++)
        std::cout << ans[j];
    return 0;
}