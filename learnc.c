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

     // %f => float and doubles. You can define the number of decimal places as well 
     //Size goes from -3.4 *10^38 to 3.4 * 10^38
     printf("Pi = %.5f\n\n", piValue); 
     printf("Big Pi = %.20f\n\n", reallyBigPi); 
     printf("My name is %s\n\n", "Yvon"); 

     char myName[] = "Yvon N'Chonon";

     strcpy(myName, "John Doe");

     printf("My name is %s\n\n", myName); 

     //scanf() is used to get input from the user 
     //you must use the & ampersand before the variable unless you're using %s

     char middleInitial;

     printf ("What is your middle initial?\n");

     // we're using c to because we want a character
     scanf("%c", &middleInitial);

     //You can only except more than one value if you
     // define exactly what you expect to get

     char firstName[30], lastName[30];

     printf("What is you name?\n");

     scanf("%s %s", firstName, lastName);

     printf("Your name is %s %c %s\n\n", firstName, middleInitial, lastName);

     //You can also except a / if you know the user will enter it 

     int month, day, year;

     printf("What's your birth date?");

     scanf("%d/%d/%d", &month, &day, &year);

     printf("Birth date %d/%d/%d\n\n", month, day, year);

     //C programming Math
     //+, -, *, /, and sometimes %(% onlywith ints)




     
}

