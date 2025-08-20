#include<stdio.h>
#include <stdlib.h>
struct no{
	int valor;
	int indice;  
	struct no *proximo;
};
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	struct no** lista = calloc(numsSize, sizeof(struct no*));
	for(int i = 0; i < numsSize; i++){
		int j = (target-nums[i])%numsSize;
		if(lista[j]==NULL){   //se o complemento nao exeiste(sem itens)
			j = nums[i]%numsSize;
			if(lista[j]==NULL){ //se estiver sem itens na posicao do numero em si
				struct no *novo = malloc(sizeof(struct no));
				lista[j] = novo;
				lista[j]->valor =
			}

		}
	}
	*returnSize = 2;

	return seq;
}
int main(){
	int qn;
	scanf("%d", &qn);
	int numeros[qn];
	for(int i = 0; i< qn; i++){
		scanf("%d", &numeros[i]);
	}
	int alvo;
	scanf("%d", &alvo);
	int *seq, tam;
	seq = twoSum(numeros, qn, alvo, &tam);
	for(int i = 0; i<tam; i++){
		if(i==0){
			printf("[");
		}
		printf("%d", seq[i]);
		if(i!=tam-1){
			printf(",");
		}else{
			printf("]\n");
		}
	}
}
