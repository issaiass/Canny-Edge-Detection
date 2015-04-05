/* 
 * File:   main.cpp
 * Author: PHTrinityII
 *
 * Created on 5 de enero de 2012, 01:32 AM
 */

// Capture and input video from Camera

/*
#include <highgui.h>
#include <cv.h>
#include <stdio.h>

int main( int argc, char** argv ) {
    const char *window;                       // name of window
    CvCapture* capture;                       // video
    IplImage* frame;                          // frame

    
    window = "Camera Input";                  // reference of camera window
    capture = cvCaptureFromCAM(1);            // open camera
//    capture = cvCreateFileCapture("http://admin:admin@192.168.2.115:80/img/mjpeg.cgi");
//    capture = cvCreateFileCapture("http://admin:admin@192.168.1.115:80/img/video.asf");
    cvNamedWindow(window, CV_WINDOW_AUTOSIZE);// construct a window
    for(;;) {                                 // repeat forever
        frame = cvQueryFrame(capture);        // get the first frame
        if(!frame || cvWaitKey(10) >= 0) {    // if no frame or a keypress event
            break;                            // break event
        } 
        cvShowImage(window, frame );          // show the image in window
    }
    cvReleaseCapture(&capture);               // destroy captured data
    cvDestroyWindow(window);                  // destroy referenced window
    return 0;
}*/