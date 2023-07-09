#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int zero = 0, one = 0, two = n-1;
    
    while(one <= two)
    {
        if(arr[one] == 0)
        {
            swap(arr[one], arr[zero]);
            zero++, one++;
        }
        else if(arr[one] == 1)
            one++;
        else
        {
            swap(arr[one], arr[two]);
            two--;
        }
    }
}
