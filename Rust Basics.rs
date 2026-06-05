// Rust | Founder: Graydon Hoare | A systems programming language focused on safety, speed and concurrency.

fn main() {
    println!("Hello, World!");

    let int_value: i32 = 100;
    let long_value: i64 = 1_000_000;
    let float_value: f32 = 10.5;
    let double_value: f64 = 20.99;
    let char_value: char = 'A';
    let bool_value: bool = true;
    let string_value: &str = "Rust Programming";

    println!("\nData Types");
    println!("i32: {}", int_value);
    println!("i64: {}", long_value);
    println!("f32: {}", float_value);
    println!("f64: {}", double_value);
    println!("char: {}", char_value);
    println!("bool: {}", bool_value);
    println!("string: {}", string_value);

    let a = 20;
    let b = 6;

    println!("\nArithmetic Operators");
    println!("Addition: {}", a + b);
    println!("Subtraction: {}", a - b);
    println!("Multiplication: {}", a * b);
    println!("Division: {}", a / b);
    println!("Modulus: {}", a % b);

    println!("\nRelational Operators");
    println!("a > b : {}", a > b);
    println!("a < b : {}", a < b);
    println!("a == b : {}", a == b);
    println!("a != b : {}", a != b);

    println!("\nLogical Operators");
    println!("(a > 10 && b > 5): {}", a > 10 && b > 5);
    println!("(a < 10 || b > 5): {}", a < 10 || b > 5);
    println!("!(a > b): {}", !(a > b));

    println!("\nIf-Else");

    if a > b {
        println!("a is greater");
    } else {
        println!("b is greater");
    }

    println!("\nMatch (Switch Equivalent)");

    let day = 2;

    match day {
        1 => println!("Monday"),
        2 => println!("Tuesday"),
        _ => println!("Other Day"),
    }

    println!("\nFor Loop");

    for i in 1..=5 {
        print!("{} ", i);
    }

    println!("\n\nWhile Loop");

    let mut count = 1;

    while count <= 5 {
        print!("{} ", count);
        count += 1;
    }

    println!("\n\nArray");

    let numbers = [10, 20, 30, 40, 50];

    for number in numbers {
        print!("{} ", number);
    }

    println!();
}