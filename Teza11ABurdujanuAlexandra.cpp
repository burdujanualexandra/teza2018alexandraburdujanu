#include<iostream.h>
#include<string.h>
void main()
{
 char a[100];
 int i;
 cout<<"Sirul: ";
 cin.get(a,99);

     for(i=0;i<strlen(a);i++)
      if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
    cout<<a[i];
   cout<<endl;


}
