#ifndef CODEC_H
#define CODEC_H

#include <string>

using namespace std;
class Codec
{
    public:
        Codec();
        Codec(string path);
        virtual ~Codec();
        void convertFile(string outpath);
    protected:
    private:
        string path;
};

#endif // CODEC_H
