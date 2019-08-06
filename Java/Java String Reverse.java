import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        String A = input.next();
        StringBuilder a = new StringBuilder(A);
        String B = a.reverse().toString();
        if(A.equals(B))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}
