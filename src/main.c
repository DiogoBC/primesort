/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
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

  int i;

  
  return 0;
}
