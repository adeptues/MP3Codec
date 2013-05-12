#include "../include/MP3Header.h"
#include <bitset>
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
    data  = new unsigned char[4];
}

MP3Header::MP3Header(unsigned char * data){
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

bool MP3Header::syncWord(unsigned char * data){
    //4 bytes pointer manipulation
    unsigned int * word = (unsigned int *)&data;

    bitset<32> bits(*word);
    bits.test(1);
    //first 12 bits should be 1
    int count = 0;
    for(int i = 1 ; i < 12; i++){
        if(bits.test(i)){
            count++;
        }
    }

    if(count == 12){
        return true;
    }
    return false;
}

void MP3Header::parseHeader(){


}

MP3Header::~MP3Header()
{
    delete [] data;
    //dtor
}
