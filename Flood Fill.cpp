vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int x = image[sr][sc];
        
        if(x == newColor)
        {
            return image;
        }
        else
        {
            color(image, sr, sc, newColor, x);
        }
        return image;
        
    }
    
    void color(vector<vector<int>>& image,int sr,int sc,int newColor,int x)
    {
        int n = image.size();
        int m = image[0].size();
        
        if(sr < 0 || sc < 0 || sr > n-1 || sc > m-1 || image[sr][sc] != x)
        {
            return;
        }
        
        if(image[sr][sc] == x)
        {
            image[sr][sc] = newColor;
        }
        
        color(image,sr-1,sc,newColor,x);
        color(image,sr+1,sc,newColor,x);
        color(image,sr,sc-1,newColor,x);
        color(image,sr,sc+1,newColor,x);
        
    }
