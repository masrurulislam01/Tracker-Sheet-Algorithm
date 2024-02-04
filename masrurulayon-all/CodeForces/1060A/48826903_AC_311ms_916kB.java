import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        scanner.nextLine(); // consume the newline character
        String digits = scanner.nextLine().trim();

        int eight = 0;

        for (int i = 0; i < n; i++) {
            if (digits.charAt(i) == '8') {
                eight++;
            }
        }

        if (eight >= n / 11) {
            System.out.println(n / 11);
        } else if (eight < n / 11 && n > 11) {
            System.out.println(eight);
        } else {
            System.out.println(0);
        }
    }
}
