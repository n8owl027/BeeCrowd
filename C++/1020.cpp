#include <iostream>
 
using namespace std;
 
int main() {
 int a,y,c,m,d;
 scanf("%d",&a);
 y=a/365;
 c=a%365;
 m=c/30;
 d=c%30;
 printf("%d ano(s)\n",y);
printf("%d mes(es)\n",m);
printf("%d dia(s)\n",d);
 
    return 0;
}
