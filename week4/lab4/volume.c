// in this program I will modify the bvolume of an audio file.

// Each audio file starts with a44-byt long header that contains info about the file, the size of the file, the number of samples per second, and the size of each sample.
//After the header the file contains a sequence of samples, each sample has 2-byte integer representing the audio signal at a particular point in time.

//scaling each sample will result into changing the volume of the audio. Multiplying each sample value by 2.0 will double the volume of the origin audio. and multiplying the same file by 0.5 will cut the volume by half.

// we will use the uint8_t type  for dealing with the byte of the file's header.
// we will use the uint16_t for dealing with the sample of the audio file.
