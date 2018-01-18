#include <stdio.h>

#include <stdlib.h>

#include <string.h>



int strlen_array( char array[] );

char arrayy[30];



int strlen_pointer( char *strp );

char *p;



int main()

{



    gets( arrayy );



    printf ( "a) the length of the string is:  %d \n" , strlen_array (arrayy) );



    p = &arrayy;



    printf ( "b) %d \n", strlen_array (p) );



    return 0;

}



int strlen_array( char array[] )

{

    int step = 0;



    while ( array[step] != '\0' )

        step++;



    return step;

}



int strlen_pointer( char *strp )

{

    int contor = 0;



    while ( *strp != '\0' )

    {

        contor++;

        strp++;

    }



    return contor;

}
