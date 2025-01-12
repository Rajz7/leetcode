#include <iostream>
#include <string>
#include <vector>

std::string addSpaces(std::string s, std::vector<int> spaces) {
    if(spaces.size() == 0) return s;

    std::string ans;
    int k = 0;
    int target = spaces[k];

    for(int i = 0; i < s.length(); i++) {
        if(target == i) {
            ans += ' ';
            if(k < spaces.size() - 1){
            k++;
            target = spaces[k];
            }
        }
        ans += s[i];
    }

    return ans;
}

int main() {
    std::string s = "spacing";
    std::vector<int> spaces = {0,1,2,3,4,5,6};
    std::cout <<  "\"" << addSpaces(s, spaces) << "\"";
    return 0;
}