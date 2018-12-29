#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>
//Algorithm for
 void initialiseRelay();

int main()
{
    float relayArray[20];
    int i,j;
    float maxAmperage = 200.0;
    float incomingCurrent;


    //initializing relays

    srand(time(0));
    while(1){
/*
    for(i=0; i<20; i++)
    {
        incomingCurrent = ((float)rand()/(float)(RAND_MAX)) * maxAmperage;
        relayArray[i] = incomingCurrent;
        //initialiseRelay();
        printf("\nCurrent is %.2f A",/*initialiseRelay(),*/// relayArray[i]);
       // Sleep(1000);
       initialiseRelay();
       Sleep(1000);
       exit(0);

    }
    return 0;
}


initialiseRelay()
{
    int i,j;
    j =1;
    char str1 [10] = {"Relay"};
    char message [10];
    for(i=0; i<20; i++)
    {
        if(j != 21)
            {
                message[10] = strcat(str1[5],j);
                printf(" %c\n", message[10]);
                 j++;

            }

        else exit(0);
    }
    //return message;
}
