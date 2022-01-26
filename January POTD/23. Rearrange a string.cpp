string arrangeString(string str)
{
    //code here.
    string ans="";
    int sum=0;
    
    map<char,int>mp;
    for(auto i:str)
    {
        if(isdigit(i))
        sum+=i-'0';
        else
        mp[i]++;
    }
    
    for(auto i:mp)
    while(i.second--)
    ans+=i.first;
    
    return ans+to_string(sum);
}