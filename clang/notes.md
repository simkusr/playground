## Useful tooks
- ascii - in console write `ascii` and it will print ascii table

## escape sequences
- \n - new line
- \t - tab
- \b - backspace
- \" - double qoute
- \\\ - backslash

## commenting
- /* comment */
- // comment

## data types
- int     - integer
- float   - floating point
- char    - character - a single byte
- short   - short integer
- long    - long integer
- double  - double precision floating point

## formatting
- %d - integer
- %3d - width, right justified
- %f - print as floating point
- %3.0f - floating point number, at least three characters wide, no decimal points
- %6.1f - at least 6 characters wide with 1 digit after decimal point
- %.2f - print as floating point, 2 characters after decimal point
- %f - is used for float and double
- %o - octal
- %x - hexadecimal
- %c - character
- %s - character string
- %% - % it self
- %ld - a long integer

## increment / decrement
- ++ -> means, increment by 1
- -- -> means, decrement by 1


## math details
- integer division truncates (any fractional part is discarded)
- 5/9 will be trucated to 0
- 5.0/9.0 will not be trucated as it's held as floating point division
- if an arithmetic operator has integer operands, an integer operation is performed. If an arithmetic operator has one floating-point operand and one integer operand, however, the integer will be converted to floating point before the operation is done.


## <stdio.h>
- printf - writes output
- scanf - reads input


## good to know
- `ctrl+c` terminates program in it's current possition
- `ctrl+d` sends `EOF` or `-1` signal and the it is terminated greatfully

- The `precedence` of `!=` is higher than that of `=`.

- in C any assignment such as `c = getchar();` is an expression and has a value, which is the value of the left hand side after the assignment. This means that a assignment can appear as part of a larger expression.

- `#include` <lib.h> -> include library

- `#define` -> defines a symbolic name or symbolic constant to be a particular string of characters
    `#define name replacement list`
Thereafter, any occurrence of name (not in quotes and not part of another name) will be replaced by the corresponding remplacement text. The replacement text can be any sequence of charactersl it's not limited to numbers.

- a general rule - in any context where it is permissible to use the value of some type, you can use a more complicated expression of that type.

- the `for` statement. It has 3 parts separated by semicolons:
    1. the initialization (fahr=0) and it's done once, before the loop is entered.
    2. test condition or condition that controls the loop (fahr<=300), this condition is evaluated: if it's true, the body of the loop is executed.
    3. the increment step (fahr=fahr+20) is executed and the condition re-evaluated.
The loop terminates if the condition has become false. The body can be a single statement or a group of statements enclosed in braces. The initialization, condition and increment can be any expressions.

- the `for` and `while` statements help ensure that programs do reasonable things with boundary conditions.

- a character (char) within single quotes '\n' or 'c' represents an integer value equal to the numerical value of the character in the machine's character set. This is called a character constant, althought it is just another way to write a small integer. E.g. 'A' is a character constant; in the ASCII character set it's value is 65, the internal representation of the character A. So '\n' stands for the value of the newline character, which is 10 in ASCII.


## text input/output
- Text input or output, regardless of where it originates ow where it goes to, is dealt with as streams of characters.
    - A `text stream` is a sequence of characters divided into lines; each line consists of zero or more characters followed by a newline character.
    - it is the responsibility of the library to make each input or output stream confirm this model.
    - the C programmer using the libraryra need not worry about how lines are represented outside of the program.
The standard library provides several functions for reading or writing once character at a time, of which `getchar` and `putchar` are the simplest. Each time it is called, `getchar` reads the `next input character` from a text stream and returns that as its value. That is, after `c = getchar();` the variable c contains the next character of input.
The function `putchar` prints a character each time it is called: `putchar(c);` prints the contents of the integer variable `c` as a character, usually on the screen.
Calls to `putchar` and `printf` may be interleaved; the output will appear in the order in which the calls are made.

- Given `getchar` and `putchar` you can write a surprising amount of useful code without knowing anything more about input and output.

- What appears to be a character on the keyboard or screen is of course, like everything else, stored internally just as a bit pattern. The ype `char` is specifically meant for storing such character data, but any integer type can be used.

- The problem is distinguishing the end of input from valid data. The solution is that `getchar` returns a distinctive value when there is no more input, a value that cannot be confused with any real character. This value is called `EOF`, for ``end of file``. We must declare `c` to be a type big enough to hold any value that `getchar` returns. We can't use `char` since `c` must be big enought to hold `EOF` in addition to any possible `char` there for best to use is `int` for `c = getchar();`

- `EOF` is an integer defined in `<stdio.h>`, but the specific numeric value doesn't matter as long as it is not the same as any `char` value. By using the symbolic constant, we are assured that nothing in the program depends on the specific numeric value.

- the standard library ensures that an input text stream appears as a sequence of lines, each terminated by a newline