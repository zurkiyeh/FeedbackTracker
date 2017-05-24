/**
//============================================================================
// Name        : serialComm_2.cpp
// Author      : Anas Zurkiyeh & Zachary Liu
// Version     : 1.0
// Copyright   : Check LICENSE file
// Description : Used to calibrate servo-controlled optical mirror remotely using a Rpi 
//============================================================================
*/


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

 

