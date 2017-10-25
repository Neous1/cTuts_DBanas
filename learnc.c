/*
Multiline
comment
*/

// single line comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Yvon N'Chonon";

int globalVar = 100;

main(){
    char firstLetter = 'Y';

    // An int can contain any shole number positive or negative between -32,768 and 32,767

    int age = 41;

    // use long int if you need to use a number larger or smaller than is provided by an int

    long int superBigNum = -327670000;

    // A float is anumber with a decimal positive or negative

    float piValue = 3.14159265359;

    //A double is used when you need a number bigger than float

    double reallyBigPi = 3.1415926535897932384626433832795028841971;

     printf("\n");

     //Escape sequences: \t -tab, \\ -backslash, \" -Quote

     printf("This will print to screen \n\n");

     // %d conversion character for int
     printf("I am %d years old \n\n", age); 

     // %ld => long int
     printf("Big number %ld\n\n", superBigNum); 
}

