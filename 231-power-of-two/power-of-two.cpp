class Solution {
public:
    bool isPowerOfTwo(int n) {

        bool ans;
        
        double x=log2(n);
         if(n<=0)
          return false;
          else if(n==1)
            return true;
          

        // if(n%2==0||n==1)
        // x=true;
    
        // else if(n%3==0||n%5==0||n%7==0||n%9==0)
        //     x=false;
        
    

        //   else 
        //  x=false;

        // if(n==pow(2,x)){
        //     x=true;
        // }

        // else x=false;
        
    

 return floor(x)==x;
}



};