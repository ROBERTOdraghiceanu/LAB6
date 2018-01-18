#include <stdio.h>

#include <stdlib.h>

#include <string.h>



char s[40];

char t[20];





char *func_strcat( char *s, char *t );



int main()

{

    gets(s);

    gets(t);



    printf ( "\n%s \n", func_strcat( s, t ) );



    return 0;

}



char *func_strcat( char *s, char *t )

{

    int i;

    int length = strlen(s);



    for ( i = 0;  i < strlen(t) ; i++ )

    {

        *(s + length + i) = *(t + i);

    }



    return s;

}
