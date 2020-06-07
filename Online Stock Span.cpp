stack<pair<int, int>>s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        int span=1;
        while(!s.empty() && price>=s.top().first)
        {
            span+=s.top().second;
            s.pop();
        }
        s.push(make_pair(price, span));
        return span;
                
    }
