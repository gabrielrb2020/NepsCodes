#include <iostream>
#include <vector>

using namespace std;

int busca(int *v, int n, int in, int f){
	int pos = 0;
	while(in<=f){
		pos = (f+in)/2;
		if(v[pos]==n)return pos;
		if(v[pos]>n)f=pos-1;
		if(v[pos]<n)in=pos+1;
	}
	return f;
}

int main(void){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],f[n],o[m];
	for(int i=1;i<n;i++){
		scanf("%d",a+i);
	}
	for(int i=0;i<n;i++){
		scanf("%d",f+i);
	}
	for(int i=0;i<m;i++){
		scanf("%d",o+i);
		o[i] = f[busca(a,o[i],1,n-1)];
	}
	for(int i=0;i<m;i++){
		printf("%d ",o[i]);
	}printf("\n");
	return 0;
}
