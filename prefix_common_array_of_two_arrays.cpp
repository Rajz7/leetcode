#include <bits/stdc++.h>

std::vector<int> findThePrefixCommonArray(std::vector<int> A, std::vector<int> B) {
    std::vector<int> ans;
    std::unordered_map<int, int> umap;
    int count = 0;

    for (int i = 0; i < A.size(); i++) {
        umap[A[i]]++;
        if (umap[A[i]] == 2) count++;

        umap[B[i]]++;
        if (umap[B[i]] == 2) count++;
        ans.push_back(count);
    }
    return ans;
}

int main () {
    std::vector<int> ans = findThePrefixCommonArray({1,3,2,4}, {3,1,2,4});
    for (int x : ans) {
        std::cout << x << " ";
    }
    return 0;
}