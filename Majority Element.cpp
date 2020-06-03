int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int>mp;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto i=mp.begin(); i!= mp.end(); i++)
        {
            if(i->second > n/2)
            {
                return i->first;
            }
        }
        return -1
