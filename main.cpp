#include <stdlib.h>
#include <iostream>
#include "include/Codec.h"
using namespace std;

int main()
{
    cout << "initialiseing codec" << endl;
    Codec *codec = new Codec();
    cout << "codec created" << endl;
    cout << "Cleaning up" << endl;

    delete codec;

    return 0;
}
