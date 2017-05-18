#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "mySerial.h"
#include <iostream>
#include <wiringPi.h>


using namespace std;

unsigned char dataArray[2]={};

int main()
{	
	
	
    	mySerial serial("/dev/ttyUSB0",9600);
	delayMicroseconds (2000000);
	
	
	
	
	unsigned char var_1 = 0;
	unsigned char var_2 = 45;
	
	dataArray[0] = var_1;
	dataArray[1] = var_2;
	
	printf ("%d", dataArray[0]);
	printf (", ");
	printf ("%d", dataArray[1]);
	printf ("\n");
		
	
	
	serial.Send(dataArray,sizeof(dataArray));
	
	serial.Close();
		
	
    return 0;
}

 
	
	
	
	
	/*
	
	//unsigned char var_1 = reinterpret_cast<int &> (*argv[1]);
	//unsigned char var_2 = reinterpret_cast<int &> (*argv[2]);
	
	
	unsigned char var_1 = (int) (*argv[1]);
	unsigned char var_2 = (int) (*argv[2]);
	
	printf ("%d", var_1);
	printf (", ");
	printf ("%d", var_2);
	printf ("\n");
	*/











/*


	
	unsigned char *var_1 ;
	unsigned char *var_2 ;
	
	var_1 = malloc(20 * sizeof(unsigned char));
	strncpy ((char *) var_1, argv[1], 20);
	
	var_2 = malloc(20 * sizeof(unsigned char));
	strncpy ((char *) var_2, argv[2], 20);
	
	//strncpy ((char *) var_1, argv[1], 20);
	//strncpy ((char *) var_2, argv[2], 20);

*/
