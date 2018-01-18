#include <stdio.h>

#include <stdlib.h>

#include <string.h>



char *func_strncpy( char *s, char *ct, int n );

char *func_strncat( char *s, char *ct, int n );

int func_strncmp( char *cs, char *ct, int n );



char first[30];

char s[30];

char ct[15];

char cs[15];

int n;



int main()

{

    gets(first);

    gets(ct);



    scanf( "%d", &n );



    strcpy( s, first );

    printf( "\n a) %s \n" , func_strncpy( s, ct, n ) );



    strcpy( s, first );

    printf( "\n b) %s \n" , func_strncat( s, ct, n ) );



    strcpy( s, first );

    printf( "\n c) %d \n" , func_strncmp( s, ct, n ) );



    return 0;

}



char *func_strncpy( char *s, char *ct, int n )

{

    int i;



    if ( n > strlen(ct) )

        n = strlen(ct);



    for ( i = 0 ; i < n ; i++ )

    {

        *(s + i) = *(ct + i);

    }



    *(s + n) = 0;



    return s;

}



char *func_strncat( char *s, char *ct, int n )

{

    int i;

    int x = strlen(s);



    if ( n > strlen(ct) )

        n = strlen(ct);



    for ( i = 0 ; i < n ; i++ )

    {

        *(s + x) = *(ct + i);

        x++;

    }



    return s;

}



int func_strncmp( char *cs, char *ct, int n )

{

    int i = 0;

    int ok = 0;



    while ( ok == 0 && i < n )

    {

        if ( *(cs + i) < *(ct + i) )

            ok = -1;

        else

        {

            if ( *(cs + i) > *(ct + i) )

                ok = 1;

        }



        i++;

    }



    return ok;

}
