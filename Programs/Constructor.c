#include<iostream>
using namespace std;
class college
{
   int cid;
   string name,cname;


public:
    college(int cid,string name,string cname)
    {
        this->name=name;
        this->cid=cid;
        this->cname=cname;
    }

    void getcollege()
    {
        cout<<"\ncid "<<cid;
       cout<<"\nname "<<name;
       cout<<"\ncname "<<cname;
    }
 };
 int main()
 {
     college n1=new college();
     n1.college;
     n1.getcollege;
 }

