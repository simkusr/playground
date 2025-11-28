#include <stdio.h>

int copyInputToOutput();
int copyInputToOutput2();
int copyInputToOutputExcersice1();

int main()
{
    return 0;
}

/* 1.5.2 Character Counting */


/*---------*/

/* read a character
        while (character is not end-of-file indicator) {
            output the character just read
            read a character
        }*/
int copyInputToOutput(){
    int c;

    c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}

int copyInputToOutput2(){
    int c;
    
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}

int copyInputToOutputExcersice1(){
    int c;

    /*with ctrl+d sending -1 signal to match EOF */

    c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }

    if (c == EOF) {
        printf("signal to close terminate the app `ctrl+d`=%d\n", c);
    }

    return 0;
}

