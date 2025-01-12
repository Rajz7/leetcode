#include <iostream>
#include <vector>
#include <string>
//output : number of lines, width of last line
int main(){
    std::vector<int> widths = {4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    std::string str = "bbbcccdddaaa";
    //97 to 122
    int lines = 1;
    int n = 0;
    for(int i = 0; i < str.length(); i++){
        if(n + widths[char(str[i]) - 97] <= 100){
            n = n + widths[char(str[i]) - 97];
            std::cout << str[i] << " ";
        }
        else{
            n = 0;
            lines ++;
            i--;
        }
    }
    std::cout << lines << " " << n;
    return 0;
}

