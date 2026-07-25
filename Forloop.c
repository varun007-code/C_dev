#include <stdio.h>

/* print Fahrenheit-Celsius table */
/*here in the for loop
 * the fahr =300  is the starting point
 * the fahr >=0 is the condition
 * the fahr=fahr-20 is the increment(or decrement)
 * so the loop will run until fahr is less than 0
 */
int main() {
    int fahr;
    printf("Fahrenheit to Celsius Conversion Table\n");
    printf("--------------------------------------\n");
    printf("Fahrenheit\tCelsius\n");
    for(fahr = 300; fahr >=0; fahr=fahr-20)
        printf("%3d\t%6.1f\n",fahr, (5.0/9.0)*(fahr-32));
    return 0;
}
