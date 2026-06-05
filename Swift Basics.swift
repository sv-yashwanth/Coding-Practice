// Swift | Creator: Chris Lattner (Apple) | A modern, fast and safe programming language for iOS, macOS and more.

import Foundation

print("Hello, World!")

let intValue: Int = 100
let uintValue: UInt = 200
let floatValue: Float = 10.5
let doubleValue: Double = 20.99

let charValue: Character = "A"
let stringValue: String = "Swift Programming"

let boolValue: Bool = true

print("\nData Types")
print("Int: \(intValue)")
print("UInt: \(uintValue)")
print("Float: \(floatValue)")
print("Double: \(doubleValue)")
print("Character: \(charValue)")
print("String: \(stringValue)")
print("Bool: \(boolValue)")

let a = 20
let b = 6

print("\nArithmetic Operators")
print("Addition: \(a + b)")
print("Subtraction: \(a - b)")
print("Multiplication: \(a * b)")
print("Division: \(a / b)")
print("Modulus: \(a % b)")

print("\nRelational Operators")
print("a > b : \(a > b)")
print("a < b : \(a < b)")
print("a == b : \(a == b)")
print("a != b : \(a != b)")

print("\nLogical Operators")
print("(a > 10 && b > 5): \(a > 10 && b > 5)")
print("(a < 10 || b > 5): \(a < 10 || b > 5)")
print("!(a > b): \(!(a > b))")

print("\nIf-Else")

if a > b {
    print("a is greater")
} else {
    print("b is greater")
}

print("\nSwitch")

let day = 2

switch day {
case 1:
    print("Monday")
case 2:
    print("Tuesday")
default:
    print("Other Day")
}

print("\nFor Loop")

for i in 1...5 {
    print(i, terminator: " ")
}

print("\n\nWhile Loop")

var count = 1

while count <= 5 {
    print(count, terminator: " ")
    count += 1
}

print("\n\nArray")

let numbers = [10, 20, 30, 40, 50]

for number in numbers {
    print(number, terminator: " ")
}

print()