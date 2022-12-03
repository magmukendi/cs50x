#include "helpers.h"
#include <math.h>

/// a program that add grayscale, sepia, reflect and blur an image file.
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int avg = round((image[i][j].rgbtGreen + image[i][j].rgbtBlue + image[i][j].rgbtRed) / 3.0);
            image[i][j].rgbtRed = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtBlue = avg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);

            if(sepiaRed > 255) sepiaRed = 255;
            if(sepiaGreen > 255) sepiaGreen = 255;
            if(sepiaBlue > 255) sepiaBlue = 255;

            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i = 0; i < height; i++)
    {
        int end;
        if(width % 2 == 0)
        {
            end = width / 2;
        }
        else{
            end = (width - 1) / 2;
        }
        for (int j = 0; j < end; j++)
            {
                RGBTRIPLE temp = image[i][j];

                image[i][j] = image[i][width  - 1 - j];
                image[i][width - 1 - j] = temp;

            }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

    RGBTRIPLE copy[height][width];


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float avgRed = 0;
            float avgGreen = 0;
            float avgBlue = 0;
            float count = 0;

            for (int m = - 1; m <= 1; m++)
            {
                for (int n = - 1; n <= 1; n++)
                {

                    int mm = i + m;
                    int nn = j + n;

                    if( mm >= 0 && mm < height && nn >= 0 && nn < width)
                    {
                    avgRed += image[mm][nn].rgbtRed;
                    avgGreen += image[mm][nn].rgbtGreen;
                    avgBlue += image[mm][nn].rgbtBlue;
                    count ++;
                    }
                }
            }
            copy[i][j].rgbtRed = round(avgRed / count);
            copy[i][j].rgbtGreen = round(avgGreen / count);
            copy[i][j].rgbtBlue = round(avgBlue / count);

        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtRed = copy[i][j].rgbtRed;
            image[i][j].rgbtGreen = copy[i][j].rgbtGreen;
            image[i][j].rgbtBlue = copy[i][j].rgbtBlue;
        }
    }
    return;
}

