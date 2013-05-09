#include <stdlib.h>
#include <iostream>
#include <bitset>
#include "include/Codec.h"
using namespace std;

void printByte(unsigned char b){
    bitset<8> x(b);


    cout << x << endl;
}

void printBinInt (int b){
        bitset<32> x(b);
        bitset<32> a(b);
        bool out  = x.test(13);
        if(a == 0xFFF){
            cout << "0xFFF yes" << endl;
        }
        cout << out << endl;
        cout << x << endl;
}

bool synccheck(char * data){
}

struct HexCharStruct
{
  unsigned char c;
  HexCharStruct(unsigned char _c) : c(_c) { }
};

inline std::ostream& operator<<(std::ostream& o, const HexCharStruct& hs)
{
  return (o << std::hex << (int)hs.c);
}

inline HexCharStruct hex(unsigned char _c)
{
  return HexCharStruct(_c);
}

int main()
{
    /*
    cout << "initialiseing codec" << endl;
    Codec *codec = new Codec();
    cout << "codec created" << endl;
    cout << "Cleaning up" << endl;

    delete codec;*/
    unsigned int b = 0xFFFBA040;

    unsigned char * ptr = (unsigned char *)&b;

    for(int i = 0 ; i < 4; i++){
        cout << hex(*ptr) << endl;
        ptr++;
    }


        return 0;
}


