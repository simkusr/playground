
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