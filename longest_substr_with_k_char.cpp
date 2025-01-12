#include <iostream>
#include <unordered_map>
#include <string>

void solve () {
    std::string str = "araaci";
    int k = 2;
    int start = 0;
    int max_len = 0;
    std::unordered_map<char, int> umap;

    for (int end = 0; end < str.length(); end++) {
        umap[str[end]]++;

        while (umap.size() > k) {
            umap[str[start]]--;
            if (umap[str[start]] == 0) {
                umap.erase(umap[str[start]]);
            }
            start++;
        }
        max_len = std::max(max_len, end - start + 1);
    }
    std::cout << max_len;
}

int main () {
    solve();
    return 0;
}