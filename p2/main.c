#include <stdio.h>

int main(void)
{
	int arr1[20]= {}, arr2[20]= {};
	int N;
	int *p1 = nullptr, *p2 = nullptr;

	scanf("%d", &N);

	for(p1=arr1; p1<arr1+N; p1++) {
		scanf(" %d", p1);
	}

	for(p2=arr2; p2<arr2+N; p2++) {
		scanf(" %d", p2);
	}

	for(p1=arr1, p2=arr2+N-1; p1<arr1+N; p1++, p2--) {
		printf(" %d", *p1+*p2);
	}
	return 0;
}
