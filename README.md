# FeedbackTracker

The main purpose of this application is to employ the computer vision library opencv in tracking a moving target, then providing feedback
on the new location to ensure constant data transmission via laser.



This application was developed for iBionics. Which is a startup company that used this project as a basis for their main application. The
system consists of a servo-controlled target that moves along two axes in a spherical fation. The tracking is done using Raspicam that is
that is connected to a Raspberry Pi and located infront of the target. The Raspicam captures the video stream then applies Haar Cascade
classifiers to detect the target.  

