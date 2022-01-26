static bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    if(a.second==b.second)
    return a.first>b.first;
    
    return a.second > b.second;
}

vector<int> TopK(vector<int>& arr, int k)
{
    // code here
    map<int,int>mp;
    for(auto i:arr)
    mp[i]++;
    
    vector<pair<int,int>>mpp;
    for(auto i:mp)
    mpp.push_back(i);
    
    sort(mpp.begin(),mpp.end(),cmp);
    
    vector<int>res;
    for(auto i:mpp)
    {
        if(k==0)
        break;
        
        k--;
        res.push_back(i.first);
    }
    
    return res;
}