int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int count = 1;
    
    for(int i = 0, j = 0; (i < n && i < n); ++i)
        if(arr[i] != arr[j])
        {
            count++;
            j = i;
        }
    
    return count;
}
