#include <algorithm>

void calculate(vector<int>& num, int i, vector<int>& sub, vector<vector<int>>& v);

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{   
    sort(arr.begin(), arr.end());
    
    vector<int> sub;
    vector<vector<int>> ans;
    calculate(arr, 0, sub, ans);
    
    return ans;
}

void calculate(vector<int>& num, int i, vector<int>& sub, vector<vector<int>>& ans)
{
    ans.push_back(sub);
    
    for(int j = i; j < num.size() ; ++j)
    {
        if(j != i && num[j] == num[j - 1])
            continue;
        sub.push_back(num[j]);
        calculate(num, j + 1, sub, ans);
        sub.pop_back();
    }
}
