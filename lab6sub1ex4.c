#include <stdio.h>

#include <stdlib.h>

#include <string.h>



char s[30];

char t[15];



int func_strend( char *s, char *t );



int main()

{

    gets(s);

    gets(t);



    printf( "\n  %d  \n" , func_strend( s, t ) );



    return 0;

}



int func_strend( char *s, char *t )

{

    int nrOfSteps = 0;

    int ok = 1;



    s += strlen(s) - strlen(t);



    while ( nrOfSteps < strlen(t)   &&   ok == 1 )

    {

        if ( *s != *t )

        {

            ok = 0;

        }

        else

        {

            s++;

            t++;

        }



        nrOfSteps++;

    }



    return ok;

}
