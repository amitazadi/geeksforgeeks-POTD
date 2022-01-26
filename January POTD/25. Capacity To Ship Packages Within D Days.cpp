int leastWeightCapacity(int arr[], int n, int D) {
    // code here
    int left = 0, right = 0;
    
    for (int i=0;i<n;i++)
    left = max(left, arr[i]),right+= arr[i];
        
    while (left < right) 
    {
        int mid = (left + right) / 2, need = 1, cur = 0;
        
        for (int i = 0; i < n && need <= D; cur += arr[i++])
        if (cur + arr[i] > mid)
        cur = 0, need++;
        
        if (need > D) 
        left = mid + 1;
        else 
        right = mid;
    }
    
    return left;
}