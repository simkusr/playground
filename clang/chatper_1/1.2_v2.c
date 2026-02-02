#include <stdio.h>

int fahrToCels();
int celsToFahr();

int main(){

    celsToFahr();
    fahrToCels();

    return 0;
}


/* print Celsius-Fahrenheit table
    for cels -17.8, -6.7, ..., 148.9; excersise 1-4
    formula = °F = (°C × 9/5) + 32 */
int celsToFahr() {
    float fahr, celsius;
    float lower, upper, step;
    int increase;

    lower = -17.8;      /* lower limit of celsius temperatuire scale */
    upper = 148.9;      /* upper limit */
    step = 10.0;        /* step size */
    increase = 0;       /* increase the celsius */

    celsius = lower;
    printf("%6s %3s\n", "celsius", "fahr");

    while (celsius < upper) {
        fahr = celsius * (9.0/5.0) + 32.0;

        printf("%6.1f %3.0f\n", celsius, fahr);

        celsius = celsius + step + increase;
        increase++;
    }

    return 0;
}

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int fahrToCels() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;          /* lower limit of temeratuire scale */
    upper = 300;        /* upper limit */
    step = 20;          /* step size */

    fahr = lower;
    printf("%3s %6s\n", "fahr", "celsius");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);

        printf("%3.0f %6.1f\n", fahr, celsius);

        fahr = fahr + step;
    }

    return 0;
}