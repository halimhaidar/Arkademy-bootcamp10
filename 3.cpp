#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

char genRandom()  
{

    return alphanum[rand() % stringLength];
}

int main()
{
    srand(time(0));
    for(int z=0; z < 32; z++)
    {
        cout << genRandom();
        

    }
    
    return 0;

}
