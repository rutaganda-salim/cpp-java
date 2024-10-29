import java.util.Scanner;

public class Cinema {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();

        try {
            checkAge(age);
            System.out.println("You are allowed to enter the cinema.");
        } catch (IllegalArgumentException e) {
            System.out.println("Exception" + e.getMessage());
        } finally {
            scanner.close();
        }
    }

    private static void checkAge(int age) {
        if (age < 18) {
            throw new IllegalArgumentException("You must be 18 or older to enter the cinema.");
        }
    }
}