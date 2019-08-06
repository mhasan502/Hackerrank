import java.util.*;
import java.math.*;

class Solution{
    public static void main(String[]args){
        Scanner input = new Scanner(System.in);
        BigInteger a = input.nextBigInteger();
        BigInteger b = input.nextBigInteger();

        System.out.println((a.add(b)+"\n"+a.multiply(b)));
    }
}
