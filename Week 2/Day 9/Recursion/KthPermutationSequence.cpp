#include <algorithm>

void getPermutations(string& s, int k, string& ans);
int fact(int n);

string kthPermutation(int n, int k)
{
    string s = "", ans = "";
    
    for(int i = 1; i <= n; ++i)
            s += to_string(i);
    
    getPermutations(s, k - 1, ans);
    return ans;
}

void getPermutations(string& s, int k, string& ans)
{
    int n = s.size(), perm = fact(n - 1);
    
    if(n == 0)
        return;
    
    // index of character at 1st position in current permutation
    int j = k / perm;
    
    sort(s.begin(), s.end());
    ans += s[j];
    s.erase(j, 1);
    n--;
    
    getPermutations(s, k % perm, ans);
}

int fact(int n)
{
    if(n <= 0)
        return 1;
    
    return n * fact(n - 1);
}
