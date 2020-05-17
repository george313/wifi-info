#include "simpio.h"
#include "stdio.h"
#include "genlib.h"
#include <stdlib.h>




char find(char cmd[],char name[]);

int main()
{
    char cmd[512];
    char name[100];


    char response[3];
    find(cmd,name);

printf("\nYour WiFi information saved !\n");

system("pause");
}

char find(char cmd[],char name[])
{

        sprintf(cmd,"NETSH WLAN SHOW drivers ");
        system(cmd);
        sprintf(cmd,"NETSH WLAN SHOW drivers |clip",name);
        system(cmd);
        system("powershell -command Get-Clipboard > wifi_info.txt");


        sprintf(cmd,"ipconfig ");
        system(cmd);
        sprintf(cmd,"ipconfig |clip",name);
        system(cmd);
        system("powershell -command Get-Clipboard >> wifi_info.txt");
   }
