#include <iostream>
#include<cmath>
using namespace std; 
int main() {
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);

if ((a%2==0) && (c+d>a+b) && (b>c) && (d>a) && (c>0) && (d>0)){
		printf("Valores aceitos\n");
	}
else{
	printf("Valores nao aceitos\n");
}
 
    return 0;
}
