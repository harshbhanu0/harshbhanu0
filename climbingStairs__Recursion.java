import java.util.*;

//recursion TC is O(2^n)..exponential bad TC

public class climbingStairs__Recursion {

    public static int countWays(int n){

        if(n==0){
            return 1;
        }

        if(n<0){
            return 0;
        }

        return countWays(n-1)+countWays(n-2);
        //exactly exactly similar to fibonacci case(pattern)
    }

    public static void main(String args[]){

        int n=5; //n=3 -> 3 & n=4 ->5 =>>total 8 ways
        System.out.println(countWays(n));

    }
    
}
