#include<iostream>
using namespace std;

int main(){
    int a,b,time=0;
   scanf("%d%d",&a,&b);

    if(a<b){
        time=b-a;
       printf("O JOGO DUROU %d HORA(S)\n",time);
    }
		
		else if(a>b){
        time=24-(a-b) ;
       printf("O JOGO DUROU %d HORA(S)\n",time);
    }
		
		else if(a==b){
        time=24;
				printf("O JOGO DUROU %d HORA(S)\n",time);
    }
return 0;
}
