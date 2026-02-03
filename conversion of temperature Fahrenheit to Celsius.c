/*Program conversion of temperature Fahrenheit to Celsius*/
#include<stdio.h>
int main()
{
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5/9;
    printf("Temperature in Celsius = %f", c);
    return 0;
}