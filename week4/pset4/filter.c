#include <stdio.h>

// to make a grayscale image, we need to convert the RGB of each pixels to the same value: read, green and blue will have the same value. To find the value to put to all the colorsm we need to find the average value of red, green and blue.
//sepia: for each pixel of sepia, c

/*
  sepiaRed = .393 * originalRed + .769 * originalGreen + .189 * originalBlue
  sepiaGreen = .349 * originalRed + .686 * originalGreen + .168 * originalBlue
  sepiaBlue = .272 * originalRed + .534 * originalGreen + .131 * originalBlue
  
  and each value could be rounded to the nearest integer. 
  
  If the value is > than 255 ==> the value shoud be 255.
  
  the value shoud be a whole number between 0 and 255.
  */

// Reflection: all the pixels on the right should be on the left. 

// blur:
