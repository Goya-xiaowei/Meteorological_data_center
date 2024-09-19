
#include "_public.h"

namespace idc
{
    char *deletelchar(char *str,const int cc)//去除c风格字符串左边的空格
    {
        if(str == nullptr) return nullptr;
        char *p = str;
        while(*p == cc)
        {
            p++;
        }
        memmove(str ,p ,strlen(str) - (p - str) + 1);
        return str;
        
    }

    string& deletelchar(string &str,const int cc)//去除c++风格字符串左边的空格
    {
        auto pos = str.find_first_not_of(cc);
        if(pos != 0) str.replace(0,1,"");

        return str;
    }


    char* deleterchar(char *str,const int cc)//去除c风格字符串右边的空格
    {
        if (str == nullptr) return nullptr;	// 如果传进来的是空地址，直接返回，防止程序崩溃。
	
        char* p = str;				// 指向字符串的首地址。
        char* piscc = 0;		  // 右边全是字符cc的第一个位置。

        while (*p != 0)			   // 遍历字符串。
        {
            if (*p == cc && piscc == 0) piscc = p;		  // 记下字符cc的第一个位置。
            if (*p != cc) piscc = 0;								  // 只要当前字符不是cc，清空piscc。
            p++;		
        }

        if (piscc != 0) *piscc = 0;	// 把piscc位置的字符置为0，表示字符串已结束。

        return str;
    }
    string& deleterchar(string &str,const int cc)    //去除c++风格字符串右边的空格
    {
        auto pos=str.find_last_not_of(cc);
        if(pos != 0) str.erase(pos + 1);

        return str;
    }

    char* deletelrchar(char *str,const int cc) //去除c风格字符串左右边的空格
    {
        deletelchar(str,cc);
        deleterchar(str,cc);
        return str;
    }

    string& deletelrchar(string &str,const int cc)    //去除c++风格字符串左右边的空格
    {
        deletelchar(str,cc);
        deleterchar(str,cc);
        return str;
    }

    char* toupper(char *str)   //将c风格的字符串转为大写
    {
        if(str == nullptr) return nullptr;
        char *p = str;
        while(*p)
        {
            if(*p <= 'z' && *p >= 'a')*p = *p - 32;
            p++;
        }
        return str;
        
    }
    string& toupper(string &str)   //将c++风格的字符串转为大写
    {
        for(auto &cc:str)
        {
            if(cc <= 'z' && cc >= 'a') cc = cc - 32;
        }
        return str;
    }

    char* tolower(char *str)   //将c风格的字符串转为小写
    {
        if(str == nullptr) return nullptr;
        char *p = str;
        while(*p)
        {
            if((*p >= 'A') && (*p <= 'Z')) *p = *p + 32;
            p++;
        }
        return str;
    }
    string& tolower(string &str)   //将c++风格的字符串转为小写
    {
        for(auto &cc : str)
        {
            if((cc >= 'A') && (cc <= 'Z')) cc = cc + 32;
        }
        return str;
    }
} // namespace idc
