import java.util.*;

//O(n) TC
public class climbingStairs__TabulationDP {

    public static int countWays(int n,int ways[]){

        if(n==0){
            return 1;
        }

        if(n<0){
            return 0;
        }

        if(ways[n]!= -1){//already calculated
            return ways[n];

        }

        ways[n]= countWays(n-1,ways)+countWays(n-2,ways);
        return ways[n];
        
    }

    public static int countWaysTab(int n){
        int dp[]=new int[n+1]; //1D array since only 1 variable n is changing
        dp[0]=1;

        //tabulation loop
        for(int i=1;i<=n;++i){
            if(i==1){
                dp[i]=dp[i-1]+0;
            }else{
                dp[i]=dp[i-1]+dp[i-2];
            }
        }
        return dp[n];
    }

    public static void main(String args[]){

        int n=5; //n=3 -> 3 & n=4 ->5 =>>total 8 ways
        int ways[]=new int[n+1];//since from 0 to n thats why n+1 elements
        //initially by default each element is initialzed with 0  0 0 0.......  
        Arrays.fill(ways,-1); //IMPPPPP
        //now each element would be initialised with -1    -1 -1 -1 -1.......
        System.out.println(countWaysTab(n));

    }
    
}
