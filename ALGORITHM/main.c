#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <time.h>
int main()
{
    float incomingVoltage;
    float incomingCurrent;
    float powerMeasured;
    float instantaneousPower;
    float maxVoltage = 300.0;
    float maxCurrent = 30.0;
    instantaneousPower = incomingCurrent * incomingVoltage;
    srand(time(0));
    while(1)
    {
        incomingVoltage =  ((float)rand()/(float)(RAND_MAX)) * maxVoltage;    //rand()%300;
        incomingCurrent =  ((float)rand()/(float)(RAND_MAX)) * maxCurrent;    //rand()%40;
        instantaneousPower = incomingCurrent * incomingVoltage;

        if(incomingCurrent >= 0 && incomingCurrent<=30 &&incomingVoltage >=0 && incomingVoltage <= 225)
        {

        printf("%f A\n", incomingCurrent);
        printf("%f V\n", incomingVoltage);
        printf("%.2f W\n", instantaneousPower);
        printf("*************************\n\n\n\n");
        Sleep(2000);
        }

        else printf("\n\npower surge\n\n\n");
        Sleep(1000);
    }


    return 0;
}
