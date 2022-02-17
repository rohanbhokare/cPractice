#include <stdio.h>
void main (void)
{
    // swap number using third variable
    int numb1 = 10;
    int numb2 = 20;
    int numb3 = numb2; // numb3 = 20 
    numb2 = numb1; // numb2 = 10 
    numb1 = numb3; // numb1 = 20
    // swap number without using third variable
    numb1 = 100;
    numb2 = 200;

    numb1 = numb1 + numb2; // numb1 = 300
    numb2 = numb1 - numb2; // numb2 = 100
    numb1 = numb1 - numb2; // numb1 = 200

}