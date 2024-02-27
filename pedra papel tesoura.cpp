#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
		
		srand(time(NULL));
		int robo=rand()%3+1;
		int n1=robo;
		int n2;
		int ponto_robo=0;
		int ponto_user=0;
		int r=0;
		
	
	
	for(r=1;r<4;r++){
			printf("RODADA %d \n",r);
			
		while(r==4){
			break;
		}
		
		printf("Insira:\n1 para pedra\n2 para papel\n3 para tesoura\n");
		scanf("%d",&n2);
	
		switch (n1)
		{
		case 1:printf("robo jogou pedra\n");
		break;
		case 2:printf("robo jogou papel\n");
		break;
		case 3:printf("robo jogou tesoura\n");
		break;
		
		default:printf("ERRO!");
	}
	
		switch (n2){
		case 1:printf("Voce jogou pedra\n");
		break;
		
		case 2:printf("Voce jogou papel\n");
		break;
		
		case 3:printf("Voce jogou tesoura\n");
		break;
		
		efault:printf("ERRO!");
	}
	
		
	if(n2==1 && n1==3){
		printf("voce ganhou \n\n");
		ponto_user++;
		printf("PLACAR:\n");
		printf("ROBO=%d  VOCE=%d \n",ponto_robo,ponto_user);
	}
	else if(n2==3 && n1==1){
		printf("voce perdeu \n\n");
		ponto_robo++;
		printf("PLACAR:\n");
		printf("ROBO=%d  VOCE=%d \n",ponto_robo,ponto_user);
	}
	else if (n2==2 && n1==1){
		printf("voce ganhou \n\n");
		ponto_user++;
		printf("PLACAR:\n");
		printf("ROBO=%d  VOCE=%d ",ponto_robo,ponto_user);
	}
	else if (n2==1 && n1==2){
		printf("voce perdeu \n\n");
		ponto_robo++;
		printf("PLACAR:\n");
		printf("ROBO=%d  VOCE=%d \n\n ",ponto_robo,ponto_user);
	}
	else if(n2==3 && n1==2){
		printf("voce ganhou \n\n");
		ponto_user++;
		printf("PLACAR:\n");
		printf("ROBO=%d  VOCE=%d \n\n",ponto_robo,ponto_user);
	}
	else if(n2==2 && n1==3){
		printf("voce perdeu \n\n");
		ponto_robo++;
		printf("PLACAR:\n\n");
		printf("ROBO=%d  VOCE=%d \n\n",ponto_robo,ponto_user);
	}
	
	
	else {
		printf("empatou \n\n");
		printf("PLACAR: \n\n");
		printf("ROBO=%d  VOCE=%d \n\n",ponto_robo,ponto_user);
	}
	
	
			}
	
}





