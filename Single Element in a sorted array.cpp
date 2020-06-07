int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int, int>mp;
        
        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        
        for(int i=0; i<n; i++)
        {
            if(mp[nums[i]] == 1)
            {
                return nums[i];
            }
        }
        return -1;      
        
    }
    int binary(vector<int>& nums, int n)
    {
        int low = 0;
        int high = n-1;
        int mid = 0;
        
        while(low <= high)
        {
             mid = low + (high-low)/2;
            
            if(mid % 2 == 0)
            {
                if(nums[mid] != nums[mid+1])
                {
                    high = mid;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if(nums[mid] == nums[mid+1])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid;
                }
            }
        }
        return nums[low];
    }
