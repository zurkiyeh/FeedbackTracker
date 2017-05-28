# Feedback Tracker

## Project source code

For the source code for this project, please refer to the following github repository [Feedback Tracker](https://github.com/zurkiyeh/FeedbackTracker)

## Synopsis

The main purpose of this application is to employ the computer vision library opencv in tracking a moving target. Then using feedback on the new location to ensure constant data transmission to the target via laser.

## Motivation

This application was developed for [iBionics] (http://www.ibionics.ca). Which is a startup company that is planning to use this project as a basis for their main system. The main system consists of 2 subsystems; Tracking and detection subsystem as well as transmition and recieving subsystem.

## Installation

Clone the repo to a Raspberry pi, then run the [tracking code](https://github.com/zurkiyeh/FeedbackTracker/tree/master/Tracker/build) by running the executable "mainProject". That will initiate the tracking process. Meanwhile run the [Transmission application](https://github.com/zurkiyeh/FeedbackTracker/tree/master/Transmission/onebyte/trans) on a seperate Raspberry pi. Finally, to recieve the data, run the [receiving application](https://github.com/zurkiyeh/FeedbackTracker/tree/master/Transmission/onebyte/rec) on a third RPi. 


## Tests

Tests and simulations were conducted on the project report which can be provided seperetly. Please contact me for more information.

## Contributors

This project was developed with the help of [Zachary (Tsa) Liu ](https://www.linkedin.com/in/tsaliu)



## Detailed Description


The transmission subsystem consists of a servo-controlled target that rotates along two axes in a spherical fashion. The tracking is done using a feedback camera, fixed infront of the target, and controlled by a Raspberry Pi. The Raspberry Pi also, directs a servo-controlled optical mirror that rotates along two axes based on the feedback it recieves from the camera. This ensures real-time transmission and recieving of data.The transmission and recieving of data is done using another two seperate Raspberry Pis.


The Raspicam captures the video stream then passes it to the Raspberry Pi, which in turn applies Haar Cascade classefiers that detect and track the target. This process is repeated constintly and an updated coordinate of the target is always captured. After the new coordinate has been captured, a camera transformation is then used to obtain the coordinates in real-life dimensions (milimeters) using the pinhole camera model. Coordinate transformation is then applied and the coordinate in milimeter is used to
calculate both angles of inclination of the mirror using predeveloped mathmatical model.

The transmitssion and recieving subsystem handles the modulation and demodulation of data. Data can be any encoded binary data (i.e. modulated audio/video data). In this project, the transmitted data is a integer sequence that runs from 0-255.

