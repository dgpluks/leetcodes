#include<stdio.h>
int main (){
	int qn,aux, raio[qn], dist[qn-1];
	scanf("%d", &qn);
	for(int j = 0; j < 2; j++){
        	scanf("%d", &aux);
        	dist[i] += aux;
        }
	raio[0] = dist[0]-1;
	if(raio[0] < 1){
		printf("-1\n");
		return 0;	
	}

	for(int i = 1; i < qn-1; i++){
		for(int j = 0; j < 2; j++){
			scanf("%d", &aux);
			dist[i] += aux;
		}
		raio[i] = dist[i-1]-raio[i-1];  
		if(raio[i]<1){
			printf("-1\n"); 
                	return 0;
		}
	}

}
