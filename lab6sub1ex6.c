#include <stdio.h>

#include <stdlib.h>





long int total_sec;

int i;



void split_time(long int total_sec, int *hr, int *min, int *sec);



int main()

{

    printf ( "Enter the time in seconds: \n");

    scanf ( "%ld", &total_sec );





    int *hour1;

    int *min1;

    int *sec1;

    int hours = 0;

    int minutes = 0;

    int seconds = 0;



    hour1 = &hours;

    min1 = &minutes;

    sec1 = &seconds;





    split_time( total_sec, hour1, min1, sec1);



    printf ( "\n This time, in hours, look like :  %d hours, %d minutes, %d seconds \n", *hour1, *min1, *sec1 );



    return 0;

}



void split_time(long int total_sec, int *hr, int *min, int *sec)

{

        *hr = total_sec / 3600;

        total_sec %= 3600;



        *min = total_sec / 60;

        total_sec %= 60;



        *sec = total_sec;

}
