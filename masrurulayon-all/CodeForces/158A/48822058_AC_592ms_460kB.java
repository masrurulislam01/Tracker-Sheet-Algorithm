import java.util.Scanner;

public class NextRound {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int k = scanner.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        int count = 0;
        int kth = arr[k - 1];

        for (int i = 0; i < n; i++) {
            if (arr[i] >= kth && arr[i] > 0) {
                count++;
            }
        }

        System.out.println(count);
    }
}
