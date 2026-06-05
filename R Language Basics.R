# R | Creators: Ross Ihaka and Robert Gentleman | A programming language and environment for statistical computing and data analysis.

cat("Hello, World!\n")

integerValue <- 100L
numericValue <- 20.99
doubleValue <- 10.5
characterValue <- "R Programming"
logicalValue <- TRUE
complexValue <- 3 + 4i

cat("\nData Types\n")
cat("Integer:", integerValue, "\n")
cat("Numeric:", numericValue, "\n")
cat("Double:", doubleValue, "\n")
cat("Character:", characterValue, "\n")
cat("Logical:", logicalValue, "\n")
cat("Complex:", complexValue, "\n")

a <- 20
b <- 6

cat("\nArithmetic Operators\n")
cat("Addition:", a + b, "\n")
cat("Subtraction:", a - b, "\n")
cat("Multiplication:", a * b, "\n")
cat("Division:", a / b, "\n")
cat("Modulus:", a %% b, "\n")
cat("Exponent:", a ^ 2, "\n")

cat("\nRelational Operators\n")
cat("a > b :", a > b, "\n")
cat("a < b :", a < b, "\n")
cat("a == b :", a == b, "\n")
cat("a != b :", a != b, "\n")

cat("\nLogical Operators\n")
cat("(a > 10 && b > 5):", a > 10 && b > 5, "\n")
cat("(a < 10 || b > 5):", a < 10 || b > 5, "\n")
cat("!(a > b):", !(a > b), "\n")

cat("\nIf-Else\n")

if (a > b) {
  cat("a is greater\n")
} else {
  cat("b is greater\n")
}

cat("\nSwitch\n")

day <- 2

result <- switch(
  as.character(day),
  "1" = "Monday",
  "2" = "Tuesday",
  "Other Day"
)

cat(result, "\n")

cat("\nFor Loop\n")

for (i in 1:5) {
  cat(i, " ")
}

cat("\n\nWhile Loop\n")

count <- 1

while (count <= 5) {
  cat(count, " ")
  count <- count + 1
}

cat("\n\nVector (Array Equivalent)\n")

numbers <- c(10, 20, 30, 40, 50)

for (number in numbers) {
  cat(number, " ")
}

cat("\n")