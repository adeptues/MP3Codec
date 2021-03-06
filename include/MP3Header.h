#ifndef MP3HEADER_H
#define MP3HEADER_H

#include <string>

using namespace std;
class MP3Header
{

    public:
        MP3Header();
        MP3Header(unsigned char * data);
        bool syncWord(unsigned char * data);
        virtual ~MP3Header();
    protected:
    private:
        string layer;
        string version;
        bool errorProtection;
        int bitrate;
        int frequency;
        int pad;
        string mode;
        bool copy;
        bool original;
        string mx1;
        string mx2;
        string emphasis;
        unsigned char * data;
        void parseHeader();

};

#endif // MP3HEADER_H
