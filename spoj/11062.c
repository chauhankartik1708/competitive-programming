#include <stdio.h>
#define MAX 100004

long long v[MAX];

int buscab(int ini, int fim, long long p){

	int mid = (ini+fim)/2;

	if(ini == fim) return ini;
	else if(v[mid] >= p) return buscab(ini,mid,p);
	else return buscab(mid+1,fim,p);
	
}

int main(){

	int n,q,i,res;
	long long num;

	scanf("%d %d",&n,&q);

	for(i = 0; i < n; i++){
		scanf("%lld",&v[i]);
	}

	for(i = 0; i < q; i++){
		scanf("%lld",&num);
		res = buscab(0,n-1,num);
		if (v[res] != num)
			res = -1;
		printf("%d\n",res);
	}
	
	return 0;
}