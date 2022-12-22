#include <iostream>
 
using namespace std;
 
int main() {
 int a,b;
 scanf("%d%d",&a,&b);
float c1,c2,c3,c4,c5,bc1,bc2,bc3,bc4,bc5;

c1=4.00;
c2=4.50;
c3=5.00;
c4=2.00;
c5=1.50;

bc2=b*c2;
bc1=b*c1;
bc3=b*c3;
bc4=b*c4;
bc5=b*c5;
switch(a){
	case 1:
		printf("Total: R$ %.2f\n",bc1);
		break;

 case 2:
	printf("Total: R$ %.2f\n",bc2);
		break;

case 3:
		printf("Total: R$ %.2f\n",bc3);
		break;


case 4:
		printf("Total: R$ %.2f\n",bc4);
		break;


case 5:
		printf("Total: R$ %.2f\n",bc5);
		break;
}
    return 0;
}
