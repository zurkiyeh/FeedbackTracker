#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <unistd.h>


#include "mySerial.h"
#include "updateServos.h"


using namespace std;


int main()
{	
	
	mySerial serial("/dev/ttyUSB0",9600);
	usleep(2000000);
	
	bool flag = true;
	
	
	while (flag)
	
	{
			int motor_1;
			int motor_2;
		
		    printf("Please enter an angle (between 0-180) for Servo(1) or a -1 to exit \n");
		    		    cin >> motor_1;
		    		    if ( motor_1 == -1 ) {break;}
		    		    		     
		   printf("Please enter an angle (between 0-180) for Servo(2) or a -1 to exit  \n");
				   cin >> motor_2;
				   if (motor_2 == -1) {break;}
		    
		    //updateServos::sendToServos((unsigned char) motor_1,  (unsigned char)  motor_2, serial);
	
	unsigned char dataArray[2]={};

	dataArray[0] = motor_1;
	dataArray[1] = motor_2 ;
		
	serial.Send(dataArray,sizeof(dataArray));
	usleep(1000000);
	
	
	
	}
	
	serial.Close();
    return 0;
}

 
	
	

