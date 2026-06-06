import java.util.*;
public class MaximumValuesInAMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[][] a = new int[n][n];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        int max = a[0][0];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                max = Math.max(max, a[i][j]);
            }
        }
        System.out.println(max);
    }
}