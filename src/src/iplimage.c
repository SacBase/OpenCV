#include "cv.h"

#define sac_t int

void IplImage2Rgb( IplImage *img, ...)
{

   int nchannels = img->nChannels;
   int step      = img->widthStep;
   int width     = img->width;
   int height    = img->height;
   uchar *frame = ( uchar* )img->imageData;
   sac_t *sac_data;
 
   /* loop over all pixels, writing the R G and B channel uchar values
    * to its corresponding array */
   const int R = 2;
   const int G = 1;
   const int B = 0;
   int h,w;

   sac_data = (sac_t *)malloc( sizeof(sac_t) * 3 * width *height);

   for (h=0; h < height; h++){
     for (w = 0; w < width; w++){
       char* rgb = frame + step * h + w * 3;
       sac_data[(h*width+w)*3] = rgb[R];
       sac_data[(h*width+w)*3+1] = rgb[G];
       sac_data[(h*width+w)*3+2] = rgb[B];
     }
   }
}
