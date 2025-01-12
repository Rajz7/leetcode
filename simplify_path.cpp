#include <iostream>
#include <stack>
#include <string>

int main(){
    std::stack<char> char_stack;
    std::string path = "/home/";
    int count = 0;
    std::string new_path;

    for(int i = 0; i < path.length(); i++){
        if((char_stack.top() == '/' && path[i] == '/') || (i == path.length() - 1 && path[i] == '/')){
            ;
        }
        else{
            char_stack.push(path[i]);
            count++;
        }
    }

    new_path[count] = '\0';

    for(int i = count - 1; i >= 0; i--){
        new_path[i] = char_stack.top();
        char_stack.pop();
    }

    std::cout << new_path;

    return 0;
}