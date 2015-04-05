/* 
 * File:   main.cpp
 * Author: PHTrinityII
 *
 * Created on 5 de enero de 2012, 01:32 AM
 */

// Canny edge detector

/*
#include <highgui.h>
#include <cv.h>
#include <stdio.h>


IplImage *doCanny(IplImage* in, double lowThres, double hiThres, double aperture); 

int main( int argc, char** argv ) {
    const char *winImgIn  = "ImageInput";        // Name of window input
    const char *winImgOut = "ImageOutput";       // Name of window result
    

    IplImage *imgIn = cvLoadImage(argv[1]);       // Load Image in buffer
    cvNamedWindow(winImgIn, CV_WINDOW_AUTOSIZE );// Create window winNamed
    cvShowImage(winImgIn, imgIn);                // show first image in window
    IplImage *imgOut = doCanny(imgIn, 0.5, 2.2, 3); // Filter in gray
    if (imgOut != NULL)
        cvShowImage(winImgOut, imgOut);              // show output image
    cvWaitKey(0);                                // wait for key event
    cvReleaseImage(&imgIn);                      // release input image
    if (imgOut != NULL)
        cvReleaseImage(&imgOut);                     // release output image
    cvDestroyWindow(winImgIn);                   // release input window
    if (imgOut != NULL)
        cvDestroyWindow(winImgOut);                  // release output window
    return 0;
}


IplImage *doCanny(IplImage *in,   double lowThres, 
                  double hiThres, double aperture) {
    if(in->nChannels != 1) {
        printf("Canny only handles gray scale images");
        return(0); //Canny only handles gray scale images
    } else {
    IplImage *out = cvCreateImage(cvSize( in->width, in->height),
                                  IPL_DEPTH_8U,
                                  1);
    cvCanny(in, out, lowThres, hiThres, aperture ); // Downsample the image
    return(out);                               // return out image
    }
}*/