#include <iostream>
//#include<cmath>
using namespace std;
 
int main() {
double a1,a,b,c,t,A;
scanf("%lf%lf%lf",&A,&b,&c);

if(A>b && A>c){
t=A;
}
 if (b>A && b>c){
	t=b;
}
 if(c>A && c>b){
t=c;
}

 if(t>=(b+c)){
 	printf("NAO FORMA TRIANGULO\n");
 }
 else if((t*t)==(b*b)+(c*c)){
 	printf("TRIANGULO RETANGULO\n");
 }
else if((t*t)>(b*b)+(c*c)){
 	printf(" TRIANGULO OBTUSANGULO\n");
 }
 else if ((t*t)<(b*b)+(c*c)) {
 	printf("TRIANGULO ACUTANGULO\n");
 }
  if(a==b && b==c && c==a){
 	printf("TRIANGULO EQUILATERO\n");
}
 else if(a==b || b==c || c==a){
 	printf("TRIANGULO ISOSCELES\n");
 }
return 0;
}
