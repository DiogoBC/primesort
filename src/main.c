/*	PrimeSort
 *
 *	Esta tarefa é sobre usar pipes e ferramentas do Linux. Nela, você deverá escrever um prorama que 
 *	recebe como entrada uma sequência de números inteiros positivos, separados por um caractere newline. 
 *	A sequência é encerrada pelo número -1. O programa deve escrever na tela todos os números não-primos 
 *	dessa sequência, um por linha ordenados do maior para o menor.
 */

#include <stdio.h>

int prime (int num){

	int i;
	if ((num == 0) || (num == 1)) {
		return 0;
	}
	else {
		for (i=2; i<((num/2)+1); i++){
			if (num%i == 0){
				return 0;
			}
		}
		return 1;
	}	
}

int main() {

	int num;
	FILE *pipeIn;	

	pipeIn = popen ("sort -r", "w");

	while (1){

		scanf ("%d\n", &num);	  	

	  	if (num < 0){	  		
	  		break;
	  	}
	  	else {
	  		if (prime (num) == 0){
	  			fprintf (pipeIn, "%d\n",num);	  			  				  				  			
	  		}
		}
	}

	pclose (pipeIn);
	  
	return 0;
}