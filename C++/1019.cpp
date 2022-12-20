#include <iostream>
 
using namespace std;
 
int main() {
 int a,h,m,m1,s,s1,s2;
 scanf("%d",&a);

h=a/3600;
m1=a%3600;
m=m1/60;
s1=m1%60;
s2=s1%60;	
printf("%d:%d:%d\n",h,m,s2);
    return 0;
}
