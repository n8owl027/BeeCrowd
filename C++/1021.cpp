#include <iostream>
 
using namespace std;
 
int main() {
	double A;
int	c,e,g,i,k,m,o,q,s,u,w,y,b,d,f,h,j,l,n;
double p,r,t,v,x,z;  
 scanf("%lf",&A);
 int a=A;
 b=a/100;
 c=a%100;
 d=c/50;
 e=c%50;
 f=e/20;
 g=e%20;
 h=g/10;
 i=g%10;
 j=i/5;
 k=i%5;
 l=k/2;
 m=k%2;
 n=m/1;
 o=m%1;
 p=(o/50)*100;
 q=(o%50)*100;
 r=(q/25)*100;
 s=(q%25)*100;
 t=(s/10)*100;
 u=(s%10)*100;
 v=(u/5)*100;
 w=(u%5)*100;
 x=(w/1)*100;
 y=(w%1)*100;
 
printf("%.2lf\n",a);
printf("%d nota(s) de R$ 100,00\n",b);
printf("%d nota(s) de R$ 50,00\n",d);
printf("%d nota(s) de R$ 20,00\n",f);
printf("%d nota(s) de R$ 10,00\n",h);
printf("%d nota(s) de R$ 5,00\n",j);
printf("%d nota(s) de R$ 2,00\n",l);
printf("%d moeda(s) de R$ 1,00\n",n);
printf("%d moeda(s) de R$ 0.50\n",p);
printf("%d moeda(s) de R$ 0.25\n",r);
printf("%d moeda(s) de R$ 0.10\n",t);
printf("%d moeda(s) de R$ 0.05\n",v);
printf("%d moeda(s) de R$ 0.01\n",x);
    return 0;
}
