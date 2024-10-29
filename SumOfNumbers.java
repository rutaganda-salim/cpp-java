import java.util.Scanner;

public class SumOfNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        String firstNumber = scanner.nextLine();
       
       boolean isDigit1 = firstNumber.matches("[0-9]+");
       
       while (!isDigit1) {
       System.out.println("the Input should only be digits");
       System.out.println("Enter the first number again: ");
       firstNumber = scanner.nextLine();
       isDigit1 = firstNumber.matches("[0-9]+");
       }
        System.out.print("Enter the second number: ");
        String secondNumber = scanner.nextLine();
        
        boolean isDigit2 = secondNumber.matches("[0-9]+");
       
        while (!isDigit2) {
        System.out.println("the Input should only be digits");
        System.out.println("Enter the second number again: ");
        secondNumber= scanner.nextLine();
        isDigit2 = secondNumber.matches("[0-9]+");
        }
        int num1 = Integer.parseInt(firstNumber);
        int num2 = Integer.parseInt(secondNumber);

        int sum = num1 + num2;

        System.out.println("The sum of the numbers is: " + sum);
    }
}