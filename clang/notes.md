
## escape sequences
\n - new line
\t - tab
\b - backspace
\" - double qoute
\\ - backslash

## commenting
/* comment */
// comment

## data types
int     - integer
float   - floating point
char    - character - a single byte
short   - short integer
long    - long integer
double  - double precision floating point

## formatting
%d - integer
%3d - width, right justified
%f - print as floating point
%3.0f - floating point number, at least three characters wide, no decimal points
%6.1f - at least 6 characters wide with 1 digit after decimal point
%.2f - print as floating point, 2 characters after decimal point
%o - octal
%x - hexadecimal
%c - character
%s - character string
%% - % it self

## math details
- integer division truncates (any fractional part is discarded)
- 5/9 will be trucated to 0
- 5.0/9.0 will not be trucated as it's held as floating point division.
- if an arithmetic operator has integer operands, an integer operation is performed. If an arithmetic operator has one floating-point operand and one integer operand, however, the integer will be converted to floating point before the operation is done.


## <stdio.h>
printf - writes output
scanf - reads input


## random

- a general rule - in any context where it is permissible to use the value of some type, you can use a more complicated expression of that type.

- the `for` statement. It has 3 parts separated by semicolons:
    1. the initialization (fahr=0) and it's done once, before the loop is entered.
    2. test condition or condition that controls the loop (fahr<=300), this condition is evaluated: if it's true, the body of the loop is executed.
    3. the increment step (fahr=fahr+20) is executed and the condition re-evaluated.
The loop terminates if the condition has become false. The body can be a single statement or a group of statements enclosed in braces. The initialization, condition and increment can be any expressions.
