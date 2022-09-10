#include <stdio.h>

/**
 *  main - entry into the program
 * 
 * return - always return 0 for success
 * 
 */
 
 int main(void){

    char alph;

    for (alph = 'a'; alph <= 'z'; alph++)
    {

        if(alph == 'q' || alph == 'e'){

            alph++;

        }
        putchar(alph);
    }

    putchar('\n');

    return(0);
 }
 
