string removeKdigits(string num, int k) {
        
        stack<char>s;
        int n = num.size();
        
        for(int i=0; i<n; i++)
        {
            if(s.size() == 0 || num[i] >= s.top())
            {
                s.push(num[i]);
            }
            else 
            {
                while(s.size()>0 && k>0 && num[i] < s.top())
            {
                s.pop();
                k--;
            }
                s.push(num[i]);
            }            
        }
        
        while(k--)
        {
            s.pop();
        }
        
        string temp = "";
        while(s.size() > 0)
        {
            temp = temp + s.top();
            s.pop();
        }
        reverse(temp.begin(), temp.end());
        
        string ans = "";
        int flag = 0;
        
        for(int i=0; i<temp.size(); i++)
        {
            if(temp[i] > '0' || flag == 1)
            {
                ans = ans + temp[i];
                flag = 1;
            }
        }
        
        if(ans.size() == 0)
        {
            return "0";
        }
        return ans;
        
    }
