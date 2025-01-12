#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string s1 = "ab";
    std::string s2 = "eidbaooo";
    std::string sub_str;
    int i = 0;
    int j = s1.length() - 1;

    std::sort(s1.begin(), s1.end());
    while(j < s2.length()){
        sub_str = s2.substr(i, s1.length());
        std::sort(sub_str.begin(), sub_str.end());
        if(sub_str == s1){
            std::cout << "True";
        }
        i++;
        j++;
    }
    std::cout << "False";

    return 0;
}

