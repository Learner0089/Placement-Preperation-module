void calculate(vector<int>& num, int i, int sum, vector<int>& ans);

vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    calculate(num, 0, 0, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

void calculate(vector<int>& num, int i, int sum, vector<int>& ans)
{
    if(i >= num.size())
    {
        ans.push_back(sum);
        return;
    }
    calculate(num, i + 1, sum + num[i], ans);
    calculate(num, i + 1, sum, ans);
}
