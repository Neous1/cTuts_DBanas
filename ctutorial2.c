#include<stdio.h>
int main(){
    /* to compile your code run make programName (without the extension 
    then run ./programName
    now go debugg :-)    
    */

    /*thre are many ways to compare datra in c >, <, ==, >=, <=, !=
    only compare values wiht the same data type
    to comapre 2 unlike types perform a cast
    A relational operator alwys evaluates to 1 for true, or 0 for false   
    */
    printf("\n");

    int num1= 1, num2 = 2; 
    
    printf ("Is 1 > 2 : %d\n\n", num1>num2);

    /* If used to compare values and perfom differnt actins depending on th=ose comparisons.
    you can check multiple conditions with else if and 
    you can define a dfautl with else
    once one condition is true they code in between the curly brackets that follows is executed and then no other 
    condition that follows is checked.    
    */

    if (num1 > num2){
        printf("%d is greater than %d\n\n", num1, num2);
    }else if(num1 < num2){
        printf("%d is less than %d\n\n", num1, num2);
    }else{
        printf("%d is equal to %d\n\n", num1, num2);
    }

    /* Logical operatiors are used to combine the above relational operators. && - And, || -Or, ! - Not
    
    Computer are logical they only understand 1s and 0s 
    RElational operators check how values relate
    */

    int custAge = 38; 

    if(custAge > 21 && custAge < 35) {
        printf("They are welcome\n\n");
    }

    /* ! - Not turns a 1 to 0 and vice versa
    Surround relations with parentheses when using not 
    This won't work !custAge > 21
    */

    printf("! turns a true into false: %d\n\n", !1);

    //Bob deserve a raise if he has missied less then 10 days work
    //and has over 30000 insales or has signed up 30 new customers 

    int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;
    if((bobMissedDays < 10 && bobTotalSales > 3000) || (bobNewCust > 30)){
        printf("Bob get a raise \n\n");
    }else{
        printf("Bob doesn't get a raise \n\n");
    }



}