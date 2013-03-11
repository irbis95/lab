#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main() {
	int n,*p;
	printf("Enter n = ");
	scanf("%d", &n);
	p = (int *)malloc(n*sizeof(int));
	srand(time(NULL));
	for(int i=0; i<n; ++i) {
		p[i] = rand() % 100;
		printf("%d " , p[i]);
	}
	for(int j=0; j<n; j++) {
		if(j == 0)
			j=1;
		for(int i=0; i<n-j; i++) {
			if(p[i] > p[i+1]) {
				swap(&p[i],&p[i+1]);
			}
		}
	}
	printf("\n");
	for(int i=0; i<n; i++) 
		printf("%d ", p[i]);
	return 0;
	free(p);
}