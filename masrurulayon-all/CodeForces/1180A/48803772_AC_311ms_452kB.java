import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the order of the rhombus
        int n = scanner.nextInt();

        // Calculate the number of cells using Math.pow
        int num_cells = (int) (Math.pow(n, 2) + Math.pow(n - 1, 2));

        // Print the result
        System.out.println(num_cells);
    }
}
