/* The distance of a marathon in kilometers
by Hugo Rocha
Agust 23
*/

#include <stdio.h>

int main (void)
{
    double miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 *(miles + yards / 1760.0);
    printf("\nA marathons %lf is kilometers.\n\n", kilometers);
    return 0;
}
