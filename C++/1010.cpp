//VALOR A PAGAR: R$ 51.40
#include <iostream>
 
using namespace std;
 
int main() {
 int a,b;
 float c,e;
 scanf("%d%d%f",&a,&b,&c);
 e=b*c;
int A,B;
 float C,E,t;
 scanf("%d%d%f",&A,&B,&C);
 E=B*C;
 t=e+E;
 printf("VALOR A PAGAR: R$ %.2f\n",t);
    return 0;
}
