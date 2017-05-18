# FeedbackTracker

The main purpose of this application is to employ the computer vision library opencv in tracking a moving target, then providing feedback on the new location to ensure constant data transmission to the target via laser.

# Description

This application was developed for iBionics. Which is a startup company that is planning to use this project as a basis for their main system. The main system consists 2 subsystems; Tracking and detection subsystem as wel as transmition and recieving subsystem.

The transmission subsystem consists of a of a servo-controlled target that moves along two axes in a spherical fashion. The tracking is done using a feedback camera that is controlled by a Raspberry Pi. The Raspberry Pi also directs a servo-controlled optical mirror that rotates along two axes. The optical mirror reflects the laser beam onto the target based on the feedback obtained by the camera. While another two seperate Raspberry Pis control transmission and recieving of data.


The Raspicam captures the video stream then passes it to the Raspberry Pi, which in turn applies Haar Cascade classefiers that detect and track the target. This process is repeated constintly and an updated coordinate of the target is always captured. After the new coordinate has been captured, a camera transformation is then used to obtain the coordinates in real-life dimensions (milimeters) using the pinhole camera model. Coordinate transformation is then applied and the coordinate in milimeter is used to
calculate both angles of inclination of the mirror using predeveloped mathmatical model.

The transmitssion and recieving subsystem handles the modulation and demodulation of data. Data can be any encoded binary data (i.e. modulated audio/video data). In this project, the transmitted data is a integer sequence that runs from 0-255.

