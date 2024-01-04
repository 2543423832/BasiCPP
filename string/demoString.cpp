#include <iostream>
using namespace std;
#include <stdbool.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string>

int main()
{
    #if 0
    bool a = true;
    int len = sizeof(a);
    printf("len:%d\n", len);
    /*布尔占一个字节 只有ture：1 和 false：0*/
    #endif

    string s = "hello world";
    const char * ptr = s.c_str();
    printf("s:%s\n", s.c_str());

    return 0;
}