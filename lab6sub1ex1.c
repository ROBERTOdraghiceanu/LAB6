#include <stdio.h>

#include <stdlib.h>

#include <string.h>



char *strcpy_array( char dest[], char src[] );

char *strcpy_pointer( char *dest, char *src );



char dest[30];

char src[30];



int main()

{

    printf ( "Enter 2 strings: \n ");

    gets(dest);

    gets(src);



    printf ( " %s \n " , strcpy_array ( dest , src ) );



    printf ( "\nEnter other 2 strings: \n ");

    gets(dest);

    gets(src);



    printf ( " %s \n " , strcpy_array ( dest , src ) );



    return 0;

}





char *strcpy_array( char dest[], char src[] )

{

    int i;



    for ( i = 0 ; i < strlen(src) ; i++ )

    {

        dest[i] = src[i];

    }



    i = strlen(src);

    dest[i] = 0;



    return dest;

}



char *strcpy_pointer( char *dest, char *src )

{

    int i;



    for ( i = 0 ; i < strlen(src) ; i++ )

    {

        *(dest + i) = *(src + i);

    }



    i = strlen(src);

    *(dest + i) = 0;



    return dest;

}
