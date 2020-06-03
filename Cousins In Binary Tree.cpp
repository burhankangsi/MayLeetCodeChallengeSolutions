bool isCousins(TreeNode* root, int x, int y) {
if(root->val == x || root->val == y)
        {
            return false;
        }
        
        int p1 = -1;
        int h1 = height(root, 0, x, p1);
        
        int p2 = -1;
        int h2 = height(root, 0, y, p2);
        
        if(p1 != p2 && h1 == h2)
        {
            return true;
        }
        return false;
    }

int height(TreeNode* root, int h, int x, int &p)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        if(root -> val == h)
        {
            return x;
        }
        
        p = root->val;
        int l = height(root->left, h+1, x, p);
        
        if( l == 0)
        {
            p = root->val;
            
            int r = height(root->right,h+1,x,p);
                return r;
        }
        
        return l;
    }
