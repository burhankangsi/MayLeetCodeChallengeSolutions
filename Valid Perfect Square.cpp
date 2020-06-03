bool isPerfectSquare(int num) {
        
        int y = sqrt(num);
        
        if( y*y == num)
        {
            return true;
        }
        return false;
    }
