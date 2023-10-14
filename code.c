#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float totaldistinkm,meter,foot,inch,centimeter;
    scanf("%f",&totaldistinkm);
    meter=totaldistinkm*1000;
    foot=totaldistinkm*3280.84;
    inch=totaldistinkm*39370.1;
    centimeter=totaldistinkm*100000;
     printf("%.2f m\n",meter);
    printf("%.2f ft\n",foot);
    printf("%.2f in\n",inch);
    printf("%.2f cm\n",centimeter);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
