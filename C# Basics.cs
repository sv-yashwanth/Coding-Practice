// C# | Founder: Anders Hejlsberg | A modern object-oriented language developed by Microsoft.

using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Hello, World!");

        byte byteValue = 255;
        short shortValue = 32000;
        int intValue = 100;
        long longValue = 1000000L;

        float floatValue = 10.5f;
        double doubleValue = 20.99;
        decimal decimalValue = 99.99m;

        char charValue = 'A';
        string stringValue = "C# Programming";

        bool boolValue = true;

        Console.WriteLine("\nData Types");
        Console.WriteLine($"byte: {byteValue}");
        Console.WriteLine($"short: {shortValue}");
        Console.WriteLine($"int: {intValue}");
        Console.WriteLine($"long: {longValue}");
        Console.WriteLine($"float: {floatValue}");
        Console.WriteLine($"double: {doubleValue}");
        Console.WriteLine($"decimal: {decimalValue}");
        Console.WriteLine($"char: {charValue}");
        Console.WriteLine($"string: {stringValue}");
        Console.WriteLine($"bool: {boolValue}");

        int a = 20;
        int b = 6;

        Console.WriteLine("\nArithmetic Operators");
        Console.WriteLine($"Addition: {a + b}");
        Console.WriteLine($"Subtraction: {a - b}");
        Console.WriteLine($"Multiplication: {a * b}");
        Console.WriteLine($"Division: {a / b}");
        Console.WriteLine($"Modulus: {a % b}");

        Console.WriteLine("\nRelational Operators");
        Console.WriteLine($"a > b : {a > b}");
        Console.WriteLine($"a < b : {a < b}");
        Console.WriteLine($"a == b : {a == b}");
        Console.WriteLine($"a != b : {a != b}");

        Console.WriteLine("\nLogical Operators");
        Console.WriteLine($"(a > 10 && b > 5): {a > 10 && b > 5}");
        Console.WriteLine($"(a < 10 || b > 5): {a < 10 || b > 5}");
        Console.WriteLine($"!(a > b): {!(a > b)}");

        Console.WriteLine("\nIf-Else");

        if (a > b)
            Console.WriteLine("a is greater");
        else
            Console.WriteLine("b is greater");

        Console.WriteLine("\nSwitch");

        int day = 2;

        switch (day)
        {
            case 1:
                Console.WriteLine("Monday");
                break;

            case 2:
                Console.WriteLine("Tuesday");
                break;

            default:
                Console.WriteLine("Other Day");
                break;
        }

        Console.WriteLine("\nFor Loop");

        for (int i = 1; i <= 5; i++)
        {
            Console.Write(i + " ");
        }

        Console.WriteLine("\n\nWhile Loop");

        int count = 1;

        while (count <= 5)
        {
            Console.Write(count + " ");
            count++;
        }

        Console.WriteLine("\n\nArray");

        int[] numbers = { 10, 20, 30, 40, 50 };

        foreach (int number in numbers)
        {
            Console.Write(number + " ");
        }

        Console.WriteLine();
    }
}