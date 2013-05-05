#include "../include/MP3File.h"


MP3File::MP3File()
{
    this->path = "";
    this->streamPointer = 0;
    fileSize = 0;
}
MP3File::MP3File(string path)
{
    this->path = path;
    this->streamPointer = 0;
    fileSize = 0;
}

void MP3File::seekToHeader(){
    ifstream filestream;
    filestream.open(path.c_str(),ios::binary);
    filestream.close();

}

MP3File::~MP3File()
{
    //dtor
}
