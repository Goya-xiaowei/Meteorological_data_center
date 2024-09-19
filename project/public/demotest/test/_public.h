#ifndef __PUBLIC_HH
#define __PUBLIC_HH 1
#include "_cmpublic.h"
using namespace std;
namespace idc
{
    char *deletelchar(char *str,const int cc = ' '); //去除c风格字符串左边的空格
    string& deletelchar(string &str,const int cc = ' ');//去除c++风格字符串左边的空格

    char* deleterchar(char *str,const int cc = ' '); //去除c风格字符串右边的空格
    string& deleterchar(string &str,const int cc = ' ');    //去除c++风格字符串右边的空格

    char* deletelrchar(char *str,const int cc = ' '); //去除c风格字符串左右边的空格
    string& deletelrchar(string &str,const int cc = ' ');    //去除c++风格字符串左右边的空格

   // 把字符串中的小写字母转换成大写，忽略不是字母的字符。
    // str：待转换的字符串。
    char*     toupper(char *str);   //将c风格的字符串转为大写
    string& toupper(string &str);   //将c++风格的字符串转为大写

    // 把字符串中的大写字母转换成小写，忽略不是字母的字符。
    // str：待转换的字符串。
    char*     tolower(char *str);   //将c风格的字符串转为小写
    string& tolower(string &str);   //将c++风格的字符串转为小写

}

#endif // __PUBLIC_HH