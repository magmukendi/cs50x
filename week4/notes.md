# Week 4: Pointers & Hexadecimal

Hexadecimal:

## Pointers


Everything in the memory has an address.
Pointer takes 8 bytes of memory. A pointer is an address.

A pointer is a data item whose value is a memory address. the type describes the data located at the memory address.

I finally understood the pointer explanation.

## Malloc

We use malloc to dynamically allocate memory. We must always use free() to free up the memory at the end of the program.
Never use free() for a statically allocated memory and do not use free() twice on a dynamically allocated memory.

## Call stacks

When a function is called it will pushed in the stack. When a function is executed it will be popped off of the stack.


## File Pointers

fopen(): for opening a file.

fgetc(): for reading a file.

fputc(): to writes or append a character in a file

fread(buffer, size, qty, file pointer): This one reads the quantity of units of size (s) from the file pointed to and stores them in memory in a buffer (usually an array) pointer to by <buffer>.
  
fwrite(buffer, size of(char), 1, pointer file): Helps us write into a pointer file.\
  
 **REMEMBER**: & provides the address of something stored in memory., * instructs the compiler to go to a location in memory. 
  
So if we write our code like this:
  
  ```
  int main(void)
  {
    int n = 50;
    int *p = &n
    printf("%p\n", p)
  }
  ```
In order to compare two strings we will use `strcmp(stringA,stringB) == 0`. This will return a truthy value.
  
  
For use to be able to modify a variable within a function, when we make a function call we must input the address of the variable and in the function we go to that address.
Other file pointer commands:
  
- fgets(): Reads a full string from a file.
- fputs(): writes a full string to a file.
- fprintf(): writes a formatted string to a file
- fseek(): allows you rewind or fast-forward within a file
- ftell(): tells you at what(byte) position you are at within a file.
- feof(): tells if I have read to the end of a file
- ferror(): indicates whether an error occured in working with a file.
  
**2022.12.04:**
  
  Today I was solving the filter problem set. And I came accross a very interesting problem: Sobel Operator.
  
  It is used in image processing and computer vision, particularly within edge detection algortithms where it creates and image emphasising on edges.
 
  I also started working on the recover  problem set. Which is a problem in which I try to recover the JPEGs from a forensic image.

  
  **2023.03.25**
  
  ## Bottom Up Problem
  
  I also learned to input a text in a file. using the file library.
  
  Now I will be working on a practice questions. The first challenge will be "Bottom Up"
  
  
  The learning goals are:
  - Practice working with images
  - Learn about metadata
  - Learn more about how structs can be useful.
  
  
  Each image file (BITMAP) have a headers:
  - BITMAPFILEHEADER which is 14 bytes long.
  - BITMAPINFOHEADER which is 40 bytes long.
  
  Tasks: edit the metadata so the bitmap's top row is first and the bottom row is last.
  
  I was able to modify  the metadata so that the picture that was bottom up could be flipped top down. I had to changeb the BITMAPINFOHEADER's height, That's it.
  
  
  
  ## License Problem
  
  Goals:
  
  - Practice working with files and file pointers
  - More work with strings and arrays
  Debuggin with debug50
  Use valgrind to check for memory leaks
  
  I just completed a license plate related problem. I had to read a file with license plate. Copy them into an array and them print them one by one. 
  
  ## Lab 4: Filter-less
  
  I easily built a program that filter an image: change it color to sepia or other hue depending on the arg.
  
  
  ## Problem Set 4: Recover
  
  
  I will be working on a program that recovers JPEGs from a forensic image.
  
  The first three bytes of JPEGS are 0xff 0xd8 and 0xff.
  
  The forth byte is either 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, or 0xef. or any fourth bytes  that start with `1110`.
  
  Usually digital cameras initializa cards with a FAT file system whole "block size" is 512 bytes (B). So a photo of 1MB (1,048,576 B) takes 2048 blocks on the memory card.
  
  So what I have to do is looking for JPEGS signature. When I get to find one, I will open a new file and start copying the JPEG content in that new file until it reach another JPEG signature. It will not go ever every single bytesm but will read 412 bytes at a time for efficiency sake.
  
  As it was a new memory card most of the slack space (the space without information), will be zeroed.
  
  Program requirement. The program should accept only one argument
  
  
