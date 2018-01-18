#include<iostream>
#include<cstring>
using namespace std;
char c[100];
int main()
{
    char* p;
    cout<<"text:";
    cin.get(c,100);

    p=strtok(c," ");
    while(p!=NULL)
    {
        cout<<p<<" ";
        p=strtok(NULL," ");
    }

return 0;
}
