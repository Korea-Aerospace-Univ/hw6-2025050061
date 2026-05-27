#include <stdio.h>

int main(void)
{
	char arr[10] = {};
	char *p = nullptr, *q = nullptr;
	char x, word;
	int xCount, wordCount=0;

	for(p=arr; p<arr+10; p++) {
		scanf(" %c", p);
	}

	for(p=arr; p<arr+10; p++) {
		x = *p;
		xCount = 0;
		for(q=arr; q<arr+10; q++) {
			if(x == *q) xCount++;
		}
		if(xCount>wordCount) {
			word = x;
			wordCount = xCount;
		}
	}
	printf("%c %d", word, wordCount);

	return 0;
}
