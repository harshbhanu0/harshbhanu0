import java.util.*;

//tc=O(n)

public class fib_eff_linearTC{

    public static int fib(int n, int f[]){
        if(n==0 || n==1){
            return n;
        }

        if(f[n]!=0){//fib(n) is already calculated
            return f[n];

        }
        f[n]=fib(n-1,f)+fib(n-2,f);
        return f[n];
    }

    //tabulation code O(n) TC
    public static int fibTabulation(int n){
        int dp[]=new int[n+1];
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;++i){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];//answer
    }

    public static void main(String args[]){
        int n=5;
        int f[]=new int[n+1];//because fib is calculated from 0 to n..thats why n+1 size
        //initially the whole f array would ne initialised with 0's
        //0, 0, 0, 0....
        System.out.println(fib(n,f));
        //by tab method answer
        System.out.println(fibTabulation(n));
    }

}