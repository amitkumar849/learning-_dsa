#include<iostream>
#include <vector>
#include <algorithm>

int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
    std::sort(g.begin(), g.end());
    std::sort(s.begin(), s.end());
    int child_idx = 0;
    int cookie_idx = 0;
    while (child_idx < g.size() && cookie_idx < s.size()) {
        if (s[cookie_idx] >= g[child_idx]) {
            child_idx++;
        }
        cookie_idx++;
    }
    return child_idx;
}

int main() {
    std::vector<int> g = {1, 2,3};
    std::vector<int> s = {1,1};
    std::cout << findContentChildren(g, s) << std::endl;
    return 0;
}
// chec git 
echo "# test" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/amitkumar849/test.git
git push -u origin main