#include "_public.h"
using namespace std;
using namespace idc;

int main()
{
    char str1[31];

    strcpy(str1,"AA,AA ");
    tolower(str1);
    printf("str1 =%s=\n",str1);
    string str2;
    str2 = "AA,AA ";
    tolower(str2);
    cout << "str2  =" << str2 << "=" << endl;
    return 0;
} 