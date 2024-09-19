#include "../_public.h"
using namespace std;
using namespace idc;

int main()
{
    char str1[31];
    string str2;

    //去除字符串左边的空格
    strcpy(str1," 西施 ");
    printf("去除左边的空格前str1 =%s=\n",str1);
    deletelchr(str1,' ');
    printf("去除左边的空格后str1 =%s=\n",str1);

    str2 = " 西施 ";
    cout << "去除左边的空格前str2 =" << str2 << "=" << endl;
    deletelchr(str2,' ');
    cout << "去除左边的空格后str2 =" << str2 << "=" << endl;

    //去除字符串右边的空格
    strcpy(str1," 西施 ");
    printf("去除右边的空格前str1 =%s=\n",str1);
    deleterchr(str1,' ');
    printf("去除右边的空格后str1 =%s=\n",str1);

    str2 = " 西施 ";
    cout << "去除右边的空格前str2 =" << str2 << "=" << endl;
    deleterchr(str2,' ');
    cout << "去除右边的空格后str2 =" << str2 << "=" << endl;

    //去除字符串两端的空格
    strcpy(str1," 西施 ");
    printf("去除字符串两端的空格str1 = %s \n",str1);
    deletelrchr(str1,' ');
    printf("去除字符串两端的空格str1 = %s \n",str1);

    str2 = " 西施 ";
    cout << "去除字符串两端的空格str2 =" << str2 << "=" << endl;
    deletelrchr(str2,' ');
    cout << "去除字符串两端的空格str2 =" << str2 << "=" << endl;



    return 0;
}