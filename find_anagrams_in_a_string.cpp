#include <bits/stdc++.h>

//438 : return an array of all the start indices of p's anagramsin s.
std::vector<int> findAnagrams(std::string s, std::string p) {
    std::unordered_map<char, int> p_freq;
    std::unordered_map<char, int> s_freq;
    std::vector<int> ans;
    int start = 0, end = 0;

    for (char c : p) {
        p_freq[c]++;
    }

    while (end < s.length()) {
        s_freq[s[end]]++;

        if (end - start + 1 == p.length()) {

            if (p_freq == s_freq) {
                ans.push_back(start);
            }

            s_freq[s[start]]--;

            if (s_freq[s[start]] == 0) {
                s_freq.erase(s[start]);
            }
            start++;
        }
        end++;
    }
    return ans;
}

int main () {
    std::vector<int> ans = findAnagrams("cbaebabacd", "abc");
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " ";
    }
    return 0;
}
