using System;

class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());

        // Calculate the number of cells using Math.Pow
        int num_cells = (int)(Math.Pow(n, 2) + Math.Pow(n - 1, 2));

        // Print the result
        Console.WriteLine(num_cells);
    }
}
