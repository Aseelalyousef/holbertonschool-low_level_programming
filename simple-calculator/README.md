# C - Simple Calculator

A terminal-based interactive calculator written in C.

## Compilation
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run Instructions
    ./calculator

## Supported Operations
- 1: Add (+)
- 2: Subtract (-)
- 3: Multiply (*)
- 4: Divide (/)
- 0: Quit

## Numeric Behavior
The calculator consistently uses double-precision floating-point numbers (decimals) for all operands and arithmetic operations, formatted cleanly with %g (e.g., 10 / 4 = 2.5).

## Known Limitations
- Non-numeric input is not handled in the mandatory version.
- Division by zero is caught and prints: Error: division by zero
