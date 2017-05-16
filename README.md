# FeedbackTracker

The main purpose of this application is to employ the computer vision library opencv in tracking a moving target, then providing feedback
on the new location to ensure constant data transmission via laser.


This application was developed for iBionics. Which is a startup company that is planning to use this project as a basis for their main
system. The main system consists 2 subsystems; Tracking and detection subsystem along with transmitof a servo-controlled target that moves along two axes in a spherical fation. The tracking is done using a feedback camera that is controlled by a Raspberry Pi. The Raspberry Pi
also controlls a servo-controlled optical mirror that moves along two axes. The optical mirror reflects the laser beam onto the target based on the feedback obtained by the camera. 


The Raspicam captures the video stream then passes it to the Raspberry Pi, which
in turn applies Haar Cascade classefiers which detect and track the target. This process is repeated consintly and an updated coordinate
of the target is always captured.

After the new coordinate has been captured, a camera transformation is used to obtain the coordinates in real-life dimensions
(milimeters) using the pinhole camera model. Coordinate transformation is then applied and the coordinate in milimeter is used to
calculate both  angles of inclination of the mirror. 
