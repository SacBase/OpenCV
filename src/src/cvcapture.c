#include "cv.h"

double cvGetFrameHight( CvCapture &capture)
{
  return cvGetCaptureProperty( capture, CV_CAP_PROP_FRAME_HEIGHT);
}

double cvGetFrameWidth( CvCapture &capture)
{
  return cvGetCaptureProperty( capture, CV_CAP_PROP_FRAME_WIDTH);
}

double cvGetFrameCount( CvCapture &capture)
{
  return cvGetCaptureProperty( capture, CV_CAP_PROP_FRAME_COUNT);
}

