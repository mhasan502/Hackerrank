import java.util.Scanner;

public class Solution {

        public static boolean isAnagram(String a, String b) {
        char A[] = a.toLowerCase().toCharArray();
        sort(A);
        char B[] = b.toLowerCase().toCharArray();
        sort(B);
        a = new String(A);
        b = new String(B);
        if(a.equals(b))
            return true;
        else
            return false;

    }
    public static void sort(char[] arr) {
        int n = arr.length;
        char temp = 0;
        for(int i=0; i < n; i++){
            for(int j=1; j < (n-i); j++){
                if(arr[j-1] > arr[j]){
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }


    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
