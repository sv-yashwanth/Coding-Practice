// Go | Founders: Robert Griesemer, Rob Pike and Ken Thompson | A simple, efficient language designed at Google for scalable software.

package main

import "fmt"

func main() {

	fmt.Println("Hello, World!")

	var intValue int = 100
	var int8Value int8 = 127
	var int16Value int16 = 32000
	var int32Value int32 = 100000
	var int64Value int64 = 1000000

	var uintValue uint = 200

	var float32Value float32 = 10.5
	var float64Value float64 = 20.99

	var boolValue bool = true

	var stringValue string = "Go Programming"

	fmt.Println("\nData Types")
	fmt.Println("int:", intValue)
	fmt.Println("int8:", int8Value)
	fmt.Println("int16:", int16Value)
	fmt.Println("int32:", int32Value)
	fmt.Println("int64:", int64Value)
	fmt.Println("uint:", uintValue)
	fmt.Println("float32:", float32Value)
	fmt.Println("float64:", float64Value)
	fmt.Println("bool:", boolValue)
	fmt.Println("string:", stringValue)

	a := 20
	b := 6

	fmt.Println("\nArithmetic Operators")
	fmt.Println("Addition:", a+b)
	fmt.Println("Subtraction:", a-b)
	fmt.Println("Multiplication:", a*b)
	fmt.Println("Division:", a/b)
	fmt.Println("Modulus:", a%b)

	fmt.Println("\nRelational Operators")
	fmt.Println("a > b :", a > b)
	fmt.Println("a < b :", a < b)
	fmt.Println("a == b :", a == b)
	fmt.Println("a != b :", a != b)

	fmt.Println("\nLogical Operators")
	fmt.Println("(a > 10 && b > 5):", a > 10 && b > 5)
	fmt.Println("(a < 10 || b > 5):", a < 10 || b > 5)
	fmt.Println("!(a > b):", !(a > b))

	fmt.Println("\nIf-Else")

	if a > b {
		fmt.Println("a is greater")
	} else {
		fmt.Println("b is greater")
	}

	fmt.Println("\nSwitch")

	day := 2

	switch day {
	case 1:
		fmt.Println("Monday")
	case 2:
		fmt.Println("Tuesday")
	default:
		fmt.Println("Other Day")
	}

	fmt.Println("\nFor Loop")

	for i := 1; i <= 5; i++ {
		fmt.Print(i, " ")
	}

	fmt.Println("\n\nWhile Loop")

	count := 1

	for count <= 5 {
		fmt.Print(count, " ")
		count++
	}

	fmt.Println("\n\nArray")

	numbers := [5]int{10, 20, 30, 40, 50}

	for _, number := range numbers {
		fmt.Print(number, " ")
	}

	fmt.Println()
}