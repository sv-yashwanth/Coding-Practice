// Kotlin | Founders: JetBrains (led by Andrey Breslav) | A modern, concise language that runs on the JVM and supports Android development.

fun main() {

    println("Hello, World!")

    val byteValue: Byte = 127
    val shortValue: Short = 32000
    val intValue: Int = 100
    val longValue: Long = 1000000L

    val floatValue: Float = 10.5f
    val doubleValue: Double = 20.99

    val charValue: Char = 'A'
    val stringValue: String = "Kotlin Programming"

    val boolValue: Boolean = true

    println("\nData Types")
    println("Byte: $byteValue")
    println("Short: $shortValue")
    println("Int: $intValue")
    println("Long: $longValue")
    println("Float: $floatValue")
    println("Double: $doubleValue")
    println("Char: $charValue")
    println("String: $stringValue")
    println("Boolean: $boolValue")

    val a = 20
    val b = 6

    println("\nArithmetic Operators")
    println("Addition: ${a + b}")
    println("Subtraction: ${a - b}")
    println("Multiplication: ${a * b}")
    println("Division: ${a / b}")
    println("Modulus: ${a % b}")

    println("\nRelational Operators")
    println("a > b : ${a > b}")
    println("a < b : ${a < b}")
    println("a == b : ${a == b}")
    println("a != b : ${a != b}")

    println("\nLogical Operators")
    println("(a > 10 && b > 5): ${a > 10 && b > 5}")
    println("(a < 10 || b > 5): ${a < 10 || b > 5}")
    println("!(a > b): ${!(a > b)}")

    println("\nIf-Else")

    if (a > b) {
        println("a is greater")
    } else {
        println("b is greater")
    }

    println("\nWhen (Switch Equivalent)")

    val day = 2

    when (day) {
        1 -> println("Monday")
        2 -> println("Tuesday")
        else -> println("Other Day")
    }

    println("\nFor Loop")

    for (i in 1..5) {
        print("$i ")
    }

    println("\n\nWhile Loop")

    var count = 1

    while (count <= 5) {
        print("$count ")
        count++
    }

    println("\n\nArray")

    val numbers = arrayOf(10, 20, 30, 40, 50)

    for (number in numbers) {
        print("$number ")
    }

    println()
}