

## Synopsis

At the top of the file there should be a short introduction and/ or overview that explains **what** the project is. This description should match descriptions added for package managers (Gemspec, package.json, etc.)

## Code Example

Show what the library does as concisely as possible, developers should be able to figure out **how** your project solves their problem by looking at the code example. Make sure the API you are showing off is obvious, and that your code is short and concise.

## Motivation

A short description of the motivation behind the creation and maintenance of the project. This should explain **why** the project exists.

## Installation

Provide code examples and explanations of how to get the project.

## API Reference

Depending on the size of the project, if it is small and simple enough the reference docs can be added to the README. For medium size to larger projects it is important to at least provide a link to where the API reference docs live.

## Tests

Describe and show how to run the tests with code examples.

## Contributors

Let people know how they can dive into the project, include important links to things like issue trackers, irc, twitter accounts if applicable.

## License

A short snippet describing the license (MIT, Apache, etc.)



# FeedbackTracker

The main purpose of this application is to employ the computer vision library opencv in tracking a moving target. Then using feedback on the new location to ensure constant data transmission to the target via laser.

# Description

This application was developed for iBionics. Which is a startup company that is planning to use this project as a basis for their main system. The main system consists of 2 subsystems; Tracking and detection subsystem as well as transmition and recieving subsystem.

The transmission subsystem consists of a servo-controlled target that rotates along two axes in a spherical fashion. The tracking is done using a feedback camera, fixed infront of the target, and controlled by a Raspberry Pi. The Raspberry Pi also, directs a servo-controlled optical mirror that rotates along two axes based on the feedback it recieves from the camera. This ensures real-time transmission and recieving of data.The transmission and recieving of data is done using another two seperate Raspberry Pis.


The Raspicam captures the video stream then passes it to the Raspberry Pi, which in turn applies Haar Cascade classefiers that detect and track the target. This process is repeated constintly and an updated coordinate of the target is always captured. After the new coordinate has been captured, a camera transformation is then used to obtain the coordinates in real-life dimensions (milimeters) using the pinhole camera model. Coordinate transformation is then applied and the coordinate in milimeter is used to
calculate both angles of inclination of the mirror using predeveloped mathmatical model.

The transmitssion and recieving subsystem handles the modulation and demodulation of data. Data can be any encoded binary data (i.e. modulated audio/video data). In this project, the transmitted data is a integer sequence that runs from 0-255.

