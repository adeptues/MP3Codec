#ifndef MP3FILE_H
#define MP3FILE_H

#include <string>
#include <iostream>
#include<fstream>

using namespace std;
class MP3File
{
    public:
        MP3File();
        MP3File(string path);
        virtual ~MP3File();
    protected:
    private:
        string path;
        int streamPointer;
        int fileSize;
        /**
        find first occurance of the mp3 frame header
        */
        void seekToHeader();
};

#endif // MP3FILE_H
