#include <iostream>
#include <vector>

using namespace std;

class ccmdstr
{
private:
    vector<string> m_cmdstr;    //用于存放拆分后的内容
    ccmdstr(const ccmdstr &) = delete;  //禁用拷贝构造
    ccmdstr &operator=(const ccmdstr &) = delete;   //禁用赋值操作
private:
    ccmdstr(){}
    ccmdstr(const string &buffer,const string &sepstr,const bool &bdelspace);

    void splittocmd(const string &buffer,const string &sepstr,const bool &bdelspace);


};
ccmdstr::ccmdstr(const string &buffer,const string &sepstr,const bool &bdelspace)
{
    splittocmd(buffer,sepstr,bdelspace);
}

void ccmdstr::splittocmd(const string &buffer,const string &sepstr,const bool &bdelspace)
{
    
}