long getTrappedWater(long *arr, int n){
    
    long water = 0;
    long l = 0, r = n - 1;
    long leftMax = 0, rightMax = 0;
        
    while(l < r)
    { 
        if(arr[l] <= arr[r])
        {
            if(arr[l] > leftMax)
                leftMax = arr[l];
            else
                water += leftMax - arr[l];
            l++;
        }
        else
        {
            if(arr[r] > rightMax)
                rightMax = arr[r];
            else
                water += rightMax - arr[r];
            r--;
        }
    }
    
    return water;
}
