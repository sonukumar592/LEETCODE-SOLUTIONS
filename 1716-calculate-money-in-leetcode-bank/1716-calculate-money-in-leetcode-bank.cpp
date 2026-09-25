class Solution {
public:
    int totalMoney(int n) {
      int sum=0;
      int week=1;
      for(int i=1;i<=n;i++){
        int day=(i-1)%7;
        sum=sum+week+day;
      
    
      if(i%7==0){
        week++;
       }
      }
      return sum;

    }

};