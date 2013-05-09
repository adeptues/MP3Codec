#include "../include/MP3Header.h"

MP3Header::MP3Header()
{
    layer = "";
    version = "";
    errorProtection = false;
    bitrate = 0;
    frequency = 0;
    pad = 0;
    mode = "";
    copy = false;
    original = false;
    mx1 = "";
    mx2 = "";
    emphasis = "";
    data  = new char[4];
}

MP3Header::MP3Header(char * data){
        layer = "";
    version = "";
    errorProtection = false;
    bitrate = 0;
    frequency = 0;
    pad = 0;
    mode = "";
    copy = false;
    original = false;
    mx1 = "";
    mx2 = "";
    emphasis = "";
    this->data  = data;
}

bool MP3Header::syncWord(char * data){


}

void MP3Header::parseHeader(){


}

MP3Header::~MP3Header()
{
    delete [] data;
    //dtor
}
