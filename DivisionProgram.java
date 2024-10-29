import java.util.Scanner;

public class DivisionProgram {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numerator;
        int denominator;

        while (true) {
            try {
                System.out.print("Enter the numerator: ");
                numerator = scanner.nextInt();
                System.out.print("Enter the denominator: ");
                denominator = scanner.nextInt();

                if (numerator < denominator) {
                    throw new ArithmeticException("Numerator must be greater than the denominator.");
                }

                double result = (double) numerator / denominator;
                System.out.println("Result: " + result);
                break;
            } catch (ArithmeticException e) {
                System.out.println(e.getMessage() + " Please enter a greater numerator.");
            } catch (Exception e) {
                System.out.println("Invalid input. Please enter valid integers.");
                scanner.next();
            }
        }

        scanner.close();
    }
}