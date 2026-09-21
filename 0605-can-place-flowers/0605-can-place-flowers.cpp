class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         int a=flowerbed.size();
         for(int i=0;i<a;i++){
             if(flowerbed[i] == 0 && 
               (i == 0 || flowerbed[i-1] == 0) &&
               (i == a-1 || flowerbed[i+1] == 0) &&
               n > 0){
                flowerbed[i]=1;
                n--;
            }

         }
         if(n==0){
            return true;
         }
         return false;
    }
};