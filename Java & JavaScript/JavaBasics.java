// Java | Creator: James Gosling | A class-based, object-oriented language designed for portability through the JVM.

public class JavaBasics {

    public static void main(String[] args) {

        System.out.println("Hello, World!");

        byte byteValue = 127;
        short shortValue = 32000;
        int intValue = 100;
        long longValue = 1000000L;

        float floatValue = 10.5f;
        double doubleValue = 20.99;

        char charValue = 'A';
        String stringValue = "Java Programming";

        boolean boolValue = true;

        System.out.println("\nData Types");
        System.out.println("byte: " + byteValue);
        System.out.println("short: " + shortValue);
        System.out.println("int: " + intValue);
        System.out.println("long: " + longValue);
        System.out.println("float: " + floatValue);
        System.out.println("double: " + doubleValue);
        System.out.println("char: " + charValue);
        System.out.println("String: " + stringValue);
        System.out.println("boolean: " + boolValue);

        int a = 20;
        int b = 6;

        System.out.println("\nArithmetic Operators");
        System.out.println("Addition: " + (a + b));
        System.out.println("Subtraction: " + (a - b));
        System.out.println("Multiplication: " + (a * b));
        System.out.println("Division: " + (a / b));
        System.out.println("Modulus: " + (a % b));

        System.out.println("\nRelational Operators");
        System.out.println("a > b : " + (a > b));
        System.out.println("a < b : " + (a < b));
        System.out.println("a == b : " + (a == b));
        System.out.println("a != b : " + (a != b));

        System.out.println("\nLogical Operators");
        System.out.println("(a > 10 && b > 5): " + (a > 10 && b > 5));
        System.out.println("(a < 10 || b > 5): " + (a < 10 || b > 5));
        System.out.println("!(a > b): " + !(a > b));

        System.out.println("\nIf-Else");

        if (a > b) {
            System.out.println("a is greater");
        } else {
            System.out.println("b is greater");
        }

        System.out.println("\nSwitch");

        int day = 2;

        switch (day) {
            case 1:
                System.out.println("Monday");
                break;

            case 2:
                System.out.println("Tuesday");
                break;

            default:
                System.out.println("Other Day");
        }

        System.out.println("\nFor Loop");

        for (int i = 1; i <= 5; i++) {
            System.out.print(i + " ");
        }

        System.out.println("\n\nWhile Loop");

        int count = 1;

        while (count <= 5) {
            System.out.print(count + " ");
            count++;
        }

        System.out.println("\n\nArray");

        int[] numbers = {10, 20, 30, 40, 50};

        for (int number : numbers) {
            System.out.print(number + " ");
        }

        System.out.println();
    }
}