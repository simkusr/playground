#include <stdio.h>

int copyInputToOutput();
int copyInputToOutput2();
int copyInputToOutputExcersice1();
int countCharacters();
int countCharacters2();
int countLines();
int countBlanks();
int replaceBlanksToSingleBlank();
int replaceSpecSymbolsToVisible();

#define BLANKS 32
#define TABS 9
#define NEWLINES 10
#define BLANK_DETECTED 1

int main()
{
    replaceSpecSymbolsToVisible();

    return 0;
}

/* 1.5.3 Line Counting */
int replaceSpecSymbolsToVisible(){
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }

    return 0;
}

int replaceBlanksToSingleBlank(){ // exercise 1.9
    int c, b;

    b = 0;

    while ((c = getchar()) != EOF) {
        if (c != BLANKS && b != BLANK_DETECTED) {
            putchar(c);
        } else if (c == BLANKS && b != BLANK_DETECTED) {
            putchar(c);

            b = 1;
        } else if (c != BLANKS) {
            putchar(c);

            b = 0;
        }
    }

    return 0;
}

int countBlanks(){
    /* count blanks, tabs and newlines */
    int c, nl, b, t;

    nl = 0;
    b = 0;
    t = 0;

    while ((c = getchar()) != EOF) {
        switch (c)
        {
        case BLANKS:
            ++b;
            break;
        case TABS:
            ++t;
            break;
        case NEWLINES:
            ++nl;
            break;
        default:
            break;
        }
    }

    printf("blanks: %d\ntabs: %d\nnew lines: %d", b, t, nl);

    return 0;
}

int countLines(){
    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF){
        if (c == '\n') {
            ++nl;
        }
    }

    printf("%d\n", nl);

    return 0;
}

/* 1.5.2 Character Counting */
int countCharacters2(){
    double nc;

    for (nc = 0; getchar() != EOF; ++nc) {
    }

    printf("%.0f\n", nc);

    return 0;
}
int countCharacters(){
    long nc;

    nc = 0;
    while (getchar() != EOF) {
        ++nc;
    }

    printf("%ld\n", nc);

    return 0;
}


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

