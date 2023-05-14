import java.util.*;

//memoization TC is O(n) linear TC

//mostly the array name is given as dp...most commonbly used

public class climbingStairs__MemoizationDP {

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

    public static void main(String args[]){

        int n=5; //n=3 -> 3 & n=4 ->5 =>>total 8 ways
        int ways[]=new int[n+1];//since from 0 to n thats why n+1 elements
        //initially by default each element is initialzed with 0  0 0 0.......  
        Arrays.fill(ways,-1); //IMPPPPP
        //now each element would be initialised with -1    -1 -1 -1 -1.......
        System.out.println(countWays(n,ways));

    }
    
}
