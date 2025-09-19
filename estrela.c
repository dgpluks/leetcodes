#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int arred(int n){
	if(n < 0){
		n*=-1;
	}
	return n;
}
int fun(int cont, int x[][2] , int est,  int raio){
    if(cont == est){
        return 1;
    }
    int dist;
        dist = arred(x[cont][0] - x[cont+1][0]) + arred(x[cont][1]-x[cont+1][1]);
    //char m;
    //scanf(" %c", &m);
    if(raio > dist - 1){
        return -1; //caso errado
    } else {
        return fun(cont+1, x, est, arred(dist - raio));  //caso certo
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int x[n][2];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x[i][0], &x[i][1]);
    }

    int dist;
    dist = arred(x[0][0] - x[1][0]) + arred(x[0][1] - x[1][1]);

    int R1 = dist - 1;
    int resp = -1;
	int i = R1;
    while(i>0 && resp == -1){
        resp = fun(1, x, n-1, dist-i);
	if(resp == 1){
		resp = i;
	}
	i--;
    }

    printf("%d", resp);
    return 0;
}
