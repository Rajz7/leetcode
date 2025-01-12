#include <iostream>
#include <stack>
#include <string>


//this question is based on dynamic programming

bool checkPalindrome(std::string str, int n){
    std::stack<char> char_stack;
    if(n % 2 == 0){
        for(int i = 0; i < n; i++){
            if(i < n / 2) {
                char_stack.push(str[i]);
            }
            else{ 
                if(char_stack.top() != str[i]) return false;
                if(!char_stack.empty()) char_stack.pop();
            }
        }
    }

    else{
        for(int i = 0; i < n; i++){
            if(i <= n / 2) {
                char_stack.push(str[i]);
            }
            else{ 
                if(!char_stack.empty()) char_stack.pop();
                if(i != (n / 2) + 1 && char_stack.top() != str[i]) return false;
            }
        }
    }

    return true;
}


int main(){
    std::string str = "abb";
    //if(checkPalindrome(s, s.lenght())) return s;
    std::string longest_substr;

    for(int left = 0; left < str.length(); left++){
        for(int right = str.length() - 1; right > left; right--){
            if(str[right] == str[left] && 
                checkPalindrome(str.substr(left, right - left + 1), right - left + 1) && 
                longest_substr.length() < str.substr(left, right - left + 1).length()){
                longest_substr = str.substr(left, right - left + 1);
            }
        }
    }

    std::cout << longest_substr;
    

    return 0;
}